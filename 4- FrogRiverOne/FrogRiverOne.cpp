// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int check[100001]={0,};
int solution(int X, vector<int> &A) {
    int len = A.size();
    int cnt = 0;
    for(int i = 0; i < len; ++i){
        if(A[i] <= X){
            if(check[A[i]]==0){
                cnt++;
                check[A[i]]++;
            }
        }
        if(cnt == X)
            return i;
    }
    return -1;
}