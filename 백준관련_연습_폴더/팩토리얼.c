#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int result = 1;
	for(int i = 1; i<=a; i++){
		result = i * result;
	}
	
	printf("%d", result);
	
	return 0;
}