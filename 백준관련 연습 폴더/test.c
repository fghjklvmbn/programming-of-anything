#include <stdio.h>

int main(){
    int h,m,c,reset_h;
    scanf("%d %d",&h,&m);
    scanf("%d",&c);
    reset_h=(c+m)/60;
    if((h>=0 && h<=23)&&(m>=0 && m<=59)&&(c>=0 && c<= 1000)){
        if(c+m>60){
        	if(reset_h+h>23){
        		h= (reset_h+h)-24;
        		m= (c+m)%60;
        	    printf("%d %d",h,m);
        	} else {
        		h= h+reset_h;
        		m= (c+m)%60;
        	    printf("%d %d",h,m);        		
        	}
        } else {
            m = m+c;
            printf("%d %d",h,m);  
        }
    }
    return 0;
}