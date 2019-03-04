// you can use includes, for example:
#include <algorithm>
#include <iostream>
#include <cstdio>
int arr[1001];
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int tenConvertTwo(long num)
{
    int result = 0;
    for(int i=0; num>0; ++i)
    {
        int binary = num % 2;
        arr[i] = binary;
        num /= 2;
        result = i;
    }
    return result;
}
int solution(int N) {
    int len = tenConvertTwo(N);
    reverse(arr, arr+len);
    int cnt=0,res=0;
    for(int i = 0; i < len; i++){
        if(arr[i]==1){
            if(res<cnt)
                res=cnt;
            cnt=0;
        }
        else
            cnt++;
    }
    return res;
    
}