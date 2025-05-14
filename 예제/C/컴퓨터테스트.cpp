#include<iostream>
#include<ctime>

using namespace std;

int main(void) {
    clock_t start = clock();

    int tmp = 1;
    for(int i = 0; i < 1000000000 ; i++) {
        if(i>=0){
            tmp +=i;
            tmp -=i;
            tmp *=i;
            tmp /=i+1;
        }
    }
    double duration = (double)(clock() - start) / CLOCKS_PER_SEC;

    cout << duration << " sec" << endl;
    return 0;
}