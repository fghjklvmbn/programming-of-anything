function chk_pw() {
    let pw = document.getElementById("pass");
    let pw_re = document.getElementById("pass_re");
    // let pw_correct = 0;
    if(pw !== pw_re){
        alert("패스워드가 일치하지 않습니다. 다시 입력해주세요");
    } else {
        alert("패스워드가 일치합니다.");
    }
}