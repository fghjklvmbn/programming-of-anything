const secHand = document.getElementById('sec-hand');
const minHand = document.getElementById('min-hand');
const hrHand = document.getElementById('hr-hand');


function clockTick(){
    const date = new Date();
    const sec = date.getSeconds() / 60;
    const min = (sec + date.getMinutes()) / 60;
    const hr = (min + date.getHours()) / 12;

    rotateClockHand(secHand, sec);
    rotateClockHand(minHand, min);
    rotateClockHand(hrHand, hr);
}

function rotateClockHand(element, rotation) {
    element.style.setProperty('--rotate', rotation * 360);
}

setInterval(clockTick, 1000)