var io =  require('socket.io').listen(3000);

var roomList = [];

io.on('connection',function (socket) {
  //console.log(socket);
  socket.on('CreateRoom',function (data) {
      console.log(data);
      roomList.push(data);
  });
  socket.on('GetRoomList',function (data) {
      console.log(socket.id);
      var temp = "\n";
      for (var i = 0; i < roomList.length; i++)
      {
          temp +=  i + ". " + roomList[i] + "\n";
      }
      socket.emit('GetRoomList' + socket.id, temp);
  });

});





