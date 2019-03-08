// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int check[100001]={0,};
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    for(int i = 0; i < len; ++i){
        if(A[i] <= len)
            check[A[i]]++;
    }
    for(int i = 1; i <= len; ++i){
        if(check[i] == 0)
            return 0;
    }
    return 1;
    
}