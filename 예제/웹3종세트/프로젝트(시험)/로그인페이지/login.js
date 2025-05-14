
function login(){
    let id1 = window.localStorage.getItem("ID");
    let pw1 = window.localStorage.getItem("PW");
    let username = window.localStorage.getItem("username");

    let id = document.getElementById("user_id").value;
    let pw = document.getElementById("user_pw").value;

    if(id1 != id || pw1 != pw){
        alert("아이디 및 비밀번호가 다릅니다.");
    } else{
        alert(id1+"님 환영합니다.");
        window.open("/각종프로젝트연습/프로젝트(시험)/메인페이지/logined.html");
    }
}


