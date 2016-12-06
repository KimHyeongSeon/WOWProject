var http = require('http');
var express = require('express');
var app = express();
var port = 80;
var httpServer = http.createServer(app).listen(port, function (req, res) {
});

var io = require('socket.io').listen(httpServer);

var roomList = [];
var userSessionIdList = [];

app.get('/', function (req, res) {
    res.end('BattleShip Server  RoomCount : ' + roomList.length + ' UserCount : ' + userSessionIdList.length);
});

io.on('connection', function (socket) {
    userSessionIdList.push(socket.id);

    socket.on('CreateRoom', function (data) {
        console.log(data);
        roomList.push(new Room(data, socket.id));
    });

    socket.on('GetRoomList', function (data) {
        //console.log(socket.id);
        var temp = "\n";
        for (var i = 0; i < roomList.length; i++) {
            var room = roomList[i];
            if (!room.progress) {    // 진행중이지 않을경우
                temp += " no : " + i + " name : " + room.roomName + "\n";
            }

        }
        socket.emit('GetRoomListRes', temp);
    });

    socket.on('JoinRoom', function (data) {
        var room = roomList[data];
        if (room != null) {
            if (room.progress) {

            } else {
                room.userSessionId = socket.id;
                room.progress = true;
                io.sockets.emit('JoinRoom' + room.userSessionId);
                io.sockets.emit('JoinRoom' + room.masterSessionId, data);
            }
        }
    });

    socket.on('SetPositionDone', function (data) {
        var splitData = data.split('.');
        var roomIndex = splitData[0];
        var bordData = splitData[1];
        console.log(roomIndex);
        console.log(data);
        var room = roomList[roomIndex];
        if (room != null) {
            if (room.progress) {
                if (room.masterSessionId == socket.id) {
                    room.masterPosCheck = true;
                }
                if (room.userSessionId == socket.id) {
                    room.userPosCheck = true;
                }
                var posReadyCheck = room.masterPosCheck && room.userPosCheck;
                if (posReadyCheck) {
                    console.log("SUC");
                    io.to(room.userSessionId).emit("SetPositionDoneRes", bordData);
                    io.to(room.masterSessionId).emit("SetPositionDoneRes", bordData);
                }

            } else {
            }
        }

    });

    socket.on('Attack', function (data) {
        console.log(data);
        var splitData = data.split('.');
        var roomIndex = splitData[0];
        var attackData = splitData[1];


        var room = roomList[roomIndex];
        if (room != null) {
            var masterCheck = (room.masterSessionId == socket.id);
            if (masterCheck) {
                if (attackData[0] == 100) {
                    io.to(room.masterSessionId).emit('Win');
                    io.to(room.userSessionId).emit('Lose');
                } else {
                    io.to(room.userSessionId).emit('AttackRes', attackData);
                }

            } else {
                if (attackData[0] == 100) {
                    io.to(room.userSessionId).emit('Win');
                    io.to(room.masterSessionId).emit('Lose');
                }
                else {
                    io.to(room.masterSessionId).emit('AttackRes', attackData);
                }

            }
        } else {
            // 예외처리
        }

    });
});


function Room(roomName, masterSessionId) {
    this.roomName = roomName;
    this.masterSessionId = masterSessionId;
    this.userSessIonId;
    this.progress = false;
    this.userPosCheck = false;
    this.masterPosCheck = false;
};






