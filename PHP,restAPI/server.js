const express = require('express');
const server = express();

const user = [
    {
    id : "asdf",
    email : "dsapoi881@gmail.com",
    tel : "010-2432-5382"
    },
    {
    id : "fjdksl",
    email : "fghjklvmbn@naver.com",
    tel : "010-2325-5358"
    }
];

server.get("/api/user", (req,res) => {
    res.json(user);
});

server.listen(3000, () => {
    console.log("서버 실행중");
});