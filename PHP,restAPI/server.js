const express = require('express');
const server = express();

const user1 = [
    {
    id : "asdf",
    email : "dsapoi881@gmail.com",
    tel : "010-2432-5382"
    }
];

const user2 = [
    {
    id : "fjdksl",
    email : "fghjklvmbn@naver.com",
    tel : "010-2325-5358"
    }
];

server.get("/api/user1", (req,res) => {
    res.json(user1);
});

server.get("/api/user2", (req,res) => {
    res.json(user2);
});

server.listen(3000, () => {
    console.log("서버 실행중");
});