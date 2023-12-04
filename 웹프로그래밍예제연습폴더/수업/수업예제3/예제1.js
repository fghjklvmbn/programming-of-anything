function GetCookie(name){
    let pairs = document.cookie.split(";");
    for(let i = 0; i < pairs.length; i++){
        let pair = pairs[i].trim();
        let unit = pair.split("=");
        if(unit[0] == name){
            return unescape(unit[1]);
        }
    }
    return null;
}

function SetCookie(name, value, expireData){
    let cookieStr = name + "=" + escape(value) + ((expireData == null)?"":("; expires = " + expireData.toUTCString()));
    document.cookie = cookieStr; 
}