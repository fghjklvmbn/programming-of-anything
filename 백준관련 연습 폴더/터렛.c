#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int T =0;
    int x1, x2, y1, y2;
    int r1, r2;
    int i, a;
    double d;
	int sum[T];

    scanf("%d", &T);

    for (i = 0; i <T; i++)
    {
        scanf("%d %d %d", &x1, &y1, &r1);
        scanf("%d %d %d", &x2, &y2, &r2);
    //    정상적으로 입력 받아짐
    //    if (i==T){
    //     break;
    //    }
	// 위에서 얻은 값으로 원의 중심 값 계산과정
    // 거리 제곱(계산)
    d = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));

    if(x2==x1 && y1==y2) {
        if(r1==r2) {return -1; } // 무한대일 경우 -1로 변환
        else { return 0; }
    	} else if ((r1==r2)<d && abs(r1-r2)<d) { return 2;} // 교점이 2개일 경우
    	else if ((r1+r2)==d && abs(r1+r2)<d){ return 1;} // 교점이 1개일 경우
    	else { return 0; }
		sum[T] = main();
    }
	printf("%d", sum[T]);
	return 0;
    
}
/* 테스트중
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct feed
{
	int ret[50];
	int T;
};

int cal() {
	struct feed f;
	int x1, x2, y1, y2;
	int r1, r2;
	int i, a;
	double d;

	scanf("%d", &f.T);

	for (i = 0; i < f.T; i++)
	{
		scanf("%d %d %d", &x1, &y1, &r1);
		scanf("%d %d %d", &x2, &y2, &r2);
		//    정상적으로 입력 받아짐
		//    if (i==T){
		//     break;
		//    }

	}

	// 위에서 얻은 값으로 원의 중심 값 계산과정
	// 거리 제곱(계산)
	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	
	// 리턴값 저장 위한 반복
	for ( a = 0; a < f.T; a++)
	{
		if (x2 == x1 && y1 == y2) {
			if (r1 == r2) { return -1; } // 무한대일 경우 -1로 변환
			else { return 0; }
		}
		else if ((r1 == r2) < d && abs(r1 - r2) < d) { return 2; } // 교점이 2개일 경우
		else if ((r1 + r2) == d && abs(r1 + r2) < d) { return 1; } // 교점이 1개일 경우
		else { return 0; } 
		f.ret[a] += cal();
	}
}

int main() {
	struct feed f;
	int e;
	f.T = 3;
	for ( e = 0; e < f.T; e++)
	{
		printf("%d\n", f.ret[f.T]);
	}
	return 0;
}
*/