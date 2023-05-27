#include<stdio.h>

int main(void) {
    int h,m;
    h = 0;
    m = 0;
    int c;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    
    if (h>=24|| m>=60){
        return 1;
    }

    // 핵심 알고리즘
    if ( h <= 23 && h >= 1 && m+c <= 59) {
        if (h >= 24 || m+c >= 60){
        h = 0;
        h = h + (m+c) / 60;
        m = (m+c) % 60;
        } 
        m += c;
    } else if( h <= 23 && h >= 1 && m+c >= 60) {
        m = m+c;
        h = h + (m / 60);
        if (h >= 24){h = h - 24;}
        if (h==23 && m+c < 60){
            m = m + c;
            if (m+c >60)
            {
                h = 0;
                h += (m + c / 60);
                if (h >= 24){h = h - 24;}
                m = (m + c) % 60;
            }
        }
	    m = m % 60; 
    } else if ( h == 24 && m+c < 60){
        h = 0;
        if (h >= 24){h = h - 24;}
        h += (m+c) / 60;
        m = (m + c) % 60;
    } else if ( h == 23 && m+c >= 60) {
	    h++;
        if (h==24) {
            h = 0;
            h = (m+c) / 60;
        }
        m = (m + c) % 60;
    } else if (h==0 || m+c < 60){
        h = h + (m+c)/60;
        m = (m + c) % 60; 
    }
    else if (h==0 || m+c >= 60){
        h = h + (m+c)/60;
        m = (m + c) % 60; 
    }
    printf("%d %d", h, m);
    return 0;
}