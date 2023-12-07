const e = require('express');
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

server.listen(3100, () => {
    console.log("서버 실행중");
});

let c = document.getElementById("input");
let d = document.getElementById("output");

function input(){
    if(!sessionStorage){
        console.log("세션스토리지가 지원되지 않습니다. 지원하는 브라우저로 접속해주세요.");
        return ;
    }
    a = document.getElementById("asdf").value;
    document.write(a);
    sessionStorage.setItem(a);

}
function output(){
    if(!sessionStorage){
        console.log("세션스토리지가 지원되지 않습니다. 지원하는 브라우저로 접속해주세요.");
        return ;
    }
    b = sessionStorage.getItem(a);
    document.write(b);   
}