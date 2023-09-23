// 완전제곱수

// M이상 n 이하의 수들 중 완전제곱수를 골라 합을 구하고
// 그 중에 최솟값을 구하라

// 완전제곱수 : 8*8 = 64, 9*9 = 81처럼 같은 수를 제곱했을때
// 나오는 수

// 이 둘중에 완전제곱수는 
// M=60
// N=100

// 64와 81, 100 밖에 없으므로
// 합계 245가 되고, 그중 최솟값이 64가 된다!

// 완전제곱수가 없을때는 -1을 출력

// 코딩측면 :
// 완전 제곱수를 구현하려면 결국 루트가 필요하므로
// Math 헤더가 필요하다.
// math.h 파일 중에 sqrt()함수를 이용 하는게 나을듯..
// 일단 두 수를 while 조건문을 이용해서 sqrt 함수에 일일이
// 대입해보기 만약 이과정에서 나눈 결과가 0이 나온다면 
// 완전제곱수이다.
// 나누기 0으로 해도됨 하지만 많은수에선 불가능


#include<stdio.h>

int main(void){
	int m,n;
		
	scanf("%d", &m);
	scanf("%d", &n);
	int minus = m-n;
	int result[minus];
	int tmp = 0;
	int not_count = 0;

	for (int i = m; i <= n; i++){
		int b = i*i;
		if ( b % i == 0){
			result[tmp] = i;
			tmp++;
		} else {
			not_count++;
		}
	}
	for (int i = tmp; i>=0; i--){
		if (not_count == (m-n)){
			printf("-1\n");
			break;
		} else {
			printf("%d", result[i]);
		}
	}
	return 0;
}