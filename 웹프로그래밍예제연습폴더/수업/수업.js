/*

// function 함수면 (매개변수) { 매개변수 정의 및 처리; }
// 루트폴더 : 수업
function over(obj) {
    obj.src = "banana.jpeg";
}
function out(obj) {
    obj.src = "apple.jpeg";
}

// 중복 조심 각각 다름
document.write("<h3>hello<h3>");
document.writeln("<h3>hello<h3>");

document.write("2 + 5는 ");
document.write("<mark>7입니다.");

*/

// let ret = prompt("이름을 입력해주세요 : ", "박경환");
// if(ret == null){
//     alert("이름이 일치하지 않습니다.");
// } else if(ret == "park"){
//     alert("박경환님 환영합니다!");
// } else {
//     alert("다시 입력해주세요");
// }

/*
let ret = confirm("전송할까요?");

if(ret == true){
    alert("전송되었습니다.");
} else {
    alert("전송이 되지 않았습니다.");
}
*/

// // 전역변수
// let x;
// function n() {
//     // 지역변수
//     let y;
//     x = 10;
//     y = 20;
//     z = 30; // 전역변수 생성 및 정의
//     if(y == 20){
//         let b = 40; // 블록변수 선언
//         b++;
//     } // 블록변수 없어짐
// } // 지역변수 없어짐

// // x,z 만 살아남음


// 과제 로직(비밀번호 불일치시 반복)

let a = prompt("비밀번호를 입력해 주세요");
let b = prompt("비밀번호를 다시 입력해 주세요");
function f(a,b){
    do{
        prompt("패스워드를 입력해주세요 : ");
    } while (a == b){
        if(a != b){
            alert("비밀번호가 틀렸습니다. 다시 입력해 주세요. ");
        }
        alert("통과되었습니다.");
    }
}