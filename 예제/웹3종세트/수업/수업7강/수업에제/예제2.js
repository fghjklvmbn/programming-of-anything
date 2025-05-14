let canvas = document.getElementById("myCanvas");
let context = canvas.getContext("2d");// 도구 장착

context.beginPath(); // 빈 경로
context.strokeStyle = "blue"; // 선 색 설정
context.rect(50,50,60,60);// 사각형 그리기
context.stroke();


context.beginPath();
context.fillStyle = "violet"
context.rect(100,100,50,50);
context.fill();

context.font = "20px Gothic";
context.fillStyle = "green";
context.fillText("text in canvas", 100, 100);