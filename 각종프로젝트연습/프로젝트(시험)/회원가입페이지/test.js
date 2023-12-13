// c (ID)값 오류 왜 오류나는지는 몰?루

function welcome(){
    let c = docuemnt.getElementById("ID").value;
    let a = document.getElementById("PW").value;
    let b = document.getElementById("PW_re").value;
    let e = document.getElementById("email").value;
    if(a != b){
        alert("비밀번호 재확인 결과 일치하지 않습니다. 다시 입력해주세요.");
        return ;
    } else {
        // init
        window.localStorage.setItem("ID", c);
        window.localStorage.setItem("PW", b);
        window.localStorage.setItem("email", e);
        alert("가입을 환영합니다!" );
    }
}