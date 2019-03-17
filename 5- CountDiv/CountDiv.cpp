// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    int res=B/K+1;
    if(A!=0)
        res-=(A-1)/K+1;
    return res;
    
}