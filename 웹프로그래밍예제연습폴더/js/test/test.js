/* 1
let age = 21; // var
let firstname = "park"; // String
let student = true; // booleans

age += 1;

console.log("your name is "+firstname);
if(student == true){
    console.log("you are student");
} else {
    console.log("you are not student");
}
console.log("your age is " + age); // age값 표시


document.getElementById("{html 문서의 id 태그}").innerHTML = 출력할 변수 입력;

document.getElementById("p1").innerHTML = "hello " + firstname;
document.getElementById("p2").innerHTML = "you are " + firstname + "years old";
document.getElementById("p3").innerHTML = "enrolled: " + student;
*/


/* 2
let student = 30;

student += 1;

console.log(student);

console.log(student % 3);

let extrastudents = student + 3;

console.log(extrastudents);


//    변수의 계산 순서 
//    1. 괄호 안의 숫자
//    2. 계산
//    3. 곱셈
//    4. 나머지 사칙연산


let result = (1+3) * (3+5);

console.log(result);

*/

// let username = window.prompt("what is your name? ");
// console.log(username);
let username;

document.getElementById("mybutton").onclick = function(){
    username = document.getElementById("mytext").value;
    console.log(username);    
    document.getElementById("mylabel").innerHTML = "hello " + username;
}