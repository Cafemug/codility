// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len=A.size();
    sort(A.begin(),A.end());
    int res=(A[len-1]*A[len-2]*A[len-3]);
    int res2=(A[0]*A[1]*A[len-1]);
    return res>res2 ? res:res2;
}