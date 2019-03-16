// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // write your code in C++14 (g++ 6.2.0)
    long len=A.size();
    long count=0,idx=0;
    for(long i=0;i<len;i++){
        if(A[i]==0){
            idx++;
            
        }
        else{
            count+=idx;
        }
        
    }
    if(count>1000000000)
        return -1;
    else
        return count;
    
}