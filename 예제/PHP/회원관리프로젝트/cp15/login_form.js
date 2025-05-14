function chk_logform(){
    if(login_form.fuserid.value==""){
        alert("아이디를 입력하세요");
        login_form.fuserid.focus();
        return false;
    } else if(login_form.fpasswd.value==""){
        alert("비밀번호를 입력하세요");
        login_form.fpasswd.focus();
        return false;
    } else {
        return true;
    }


}