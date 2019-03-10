// you can use includes, for example:
// #include <algorithm>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> solution(int N, vector<int> &A) {
    vector<int> v(N,0);
    int len = A.size();
    int max=0;
    int temp=0;
    for(int i= 0; i<len;i++){
        if(1<= A[i] && A[i]<=N){
            if(v[A[i]-1] < max)
                v[A[i]-1] = max+1;
        
            else{
                v[A[i]-1]++;
            }
            if(v[A[i]-1] > temp){
                temp = v[A[i]-1];
                
           }
       }
       else if(A[i]-1 == N){
           max = temp;
          
       }
    }
    for(int i=0;i<N;++i){
       if(v[i]<max)
            v[i] = max;
    }
    return v;
}