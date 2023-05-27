#include<stdio.h>

int main(void) {
    int h,m;
    h = 0;
    m = 0;
    scanf("%d %d", &h, &m);
    
    if (h>=24|| m>=60){
        return 1;
    }


    // 정상작동
    if (h >= 1 && m<45) {
	    h--;
        m = m-45+60;
        if (m==60) {
            m = 0;
        } 
    } else if(h >= 0 && m>=45) {
	    m=m-45;
    } else if ( h == 0 && m<45){
	    h = 23;
	    m = m-45+60;
    } else if (h == 0 && m>=45) {
	    m = m-45;
    }
    
    printf("%d %d\n", h, m);
    return 0;
}