var io = require('socket.io').listen(3000);

var roomList = [];
var userSessionIdList = [];

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
        var room = roomList[data]; // 예외처리 해야함
        if(room != null) {
            if (room.progress) {

            } else {
                room.userSessionId = socket.id;
                room.progress = true;
                io.sockets.emit('JoinRoom' + room.userSessionId);
                io.sockets.emit('JoinRoom' + room.masterSessionId, data);
            }
        }
    });

    socket.on('SetPostionDone', function (data) {
        var room = roomList[data];
        if(room != null) {
            if (room.progress) {
               if(room.masterSessionId == socket.id){
                   room.masterPosCheck = true;
               }
               if(room.userSessionId == socket.id){
                   room.userPosCheck = true;
               }
               var posReadyCheck = room.masterPosCheck && room.userPosCheck;
               if(posReadyCheck){
                   // 데이터 동기화 시켜야함
                   sockets.emit()
               }

            } else {

            }
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






