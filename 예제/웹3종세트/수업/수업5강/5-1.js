let div = document.getElementById("div");
let button = document.getElementById("button");

// 캡처리스너
document.body.addEventListener("click", capture, true);
// 타겟
button.addEventListener("click", bubble, false);
// 버블리스너
document.body.addEventListener("click", bubble, false);

function capture(e){
    let obj = e.currentTarget;
    let tagname = obj.tagName;
    div.innerHTML += "<br>capture 단계 " + tagname + " 태그 " + e.type + " 이벤트";
}
function bubble(e){
    let obj = e.currentTarget;
    let tagname = obj.tagName;
    div.innerHTML += "<br>bubble 단계 " + tagname + " 태그 " + e.type + "이벤트";
}

// 기능제한
// function query(){
//     let ret = confirm("네이버로 이동하시겠습니까?");
//     return ret;
// }
// function noAction(e){
//     e.preventDefault();
// }

// 타입 찾기
// function f(e){
//     let text = "type" + e.type +"<br>"+ e.target +"<br>"+ e.currentTarget +"<br>"+ e.defultPrevented;
//     let p = document.getElementById("p");
//     p.innerHTML = text;
// }

// 마우스 조절로 인한 그림을 크게/작게 만드는 함수
// function controlImgsize(e, img){
//     if(e.wheeldelta>0){
//         img.height += img.height * 0.05;
//         img.width += img.width * 0.05;
//     }else{
//         img.height -= img.height * 0.05;
//         img.width -= img.width * 0.05;
//     }
// }