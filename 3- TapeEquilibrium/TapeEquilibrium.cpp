#include <cmath>
int check[100001]={0,};
int solution(vector<int> &A) {
    int len = A.size();
    int res = 0;
    int min = 987654321;
    for(int i = 0; i < len; ++i){
        res += A[i];
        check[i] = res;
    }
    for(int i = 0; i < len-1; ++i){
        int temp = res - check[i];
        int minus = abs(temp-check[i]);
        if(minus < min)
            min = minus;
    }
    return min;
}