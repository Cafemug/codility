// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int arr[1000001]={0,};
int arr2[1000001]={0,};
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len=A.size();
    int count=0;
    for(int i=0;i<len;i++){
        if(A[i]<0){
            if(arr2[-A[i]]==0){
                count++;
                arr2[-A[i]]++;
            }
        }
        else{
            if(arr[A[i]]==0){
                count++;
                arr[A[i]]++;
            }
        }
            
    }
    return count;
}