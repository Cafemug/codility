int check[100001]={0,};
int solution(vector<int> &A) {
    int len = A.size();
    int res = 0;
    for(int i = 0; i < len; ++i){
        check[A[i]]++;
    }
    for(int i = 1; i <=len+1; ++i){
        if(check[i] == 0){
            res = i;
            break;
        }
    }
    return res;
}