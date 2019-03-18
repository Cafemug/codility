// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    sort(A.begin(),A.end());
    int len = A.size();
    for(int i=0;i<len-2;i++){
        if(A[i]<0) continue;
        if((long)A[i]+A[i+1]>A[i+2]){
            return 1;
        }
    }
    return 0;
}