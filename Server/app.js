var app = require('express')();
var http = require('http').Server(app);
var io = require('socket.io')(http);

app.get('/', function(req, res){
    print('hello');
});

io.on('connection', function(socket){
    console.log('a user connected');

    socket.on('move', function (data) {
        socket.broadcast.emit('hi',data); // 자신을 제외하고 다른 클라이언트에게 보냄
        //socket.emit('hi',data)
        // socket.emit('toclient',data); // 해당 클라이언트에게만 보냄. 다른 클라이언트에 보낼려면?
        //console.log('Message from client :'+data.msg);

        console.log('move' + data);
    });
});

http.listen(3000, function(){
    console.log('listening on *:3000');
});
