var io =  require('socket.io').listen(80);

var roomList = [];

io.sockets.on('Connection',function (socket) {
  console.log(socket);
  socket.on('CreateRoom',function (data) {
      console.log(data);
      roomList.push(data);
  });
  socket.on('GetRoomList',function (data) {
      console.log(data);
      socket.emit('GetRoomList' + ip, {roomList : roomList});
  });

});





