// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int check[10000001]={0,};
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    int max = 0;
    for(int i = 0; i < len; ++i){
        if(A[i] > 0)
            check[A[i]]++;
        if(max < A[i])
            max = A[i];
    }
    for(int i = 1; i <= max+1 ; ++i){
        if(check[i] == 0)
            return i;
    }
    return 0;
}