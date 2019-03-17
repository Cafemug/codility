
int arr[5][100001]={0,};
int check(char s){
    switch(s){
        case 'A':
            return 1;
        case 'C':
            return 2;
        case 'G':
            return 3;
        case 'T':
            return 4;
    }
}
vector<int> res;
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    int nlen= S.size();
    int mlen= Q.size();
    int temp=check(S[0]);
    arr[temp][1]++;
    for(int i=2;i<=nlen;i++){
        temp=check(S[i-1]);
        arr[temp][i]=(arr[temp][i-1]+1);
        for(int j=1;j<5;j++){
            if(j==temp)
                continue;
            else{
                arr[j][i]=arr[j][i-1];
            }
        }
    }
    for(int i=0;i<mlen;i++){
    
        if(arr[1][Q[i]+1]-arr[1][P[i]]!=0)
            res.push_back(1);
        else if(arr[2][Q[i]+1]-arr[2][P[i]]!=0)
            res.push_back(2);
        else if(arr[3][Q[i]+1]-arr[3][P[i]]!=0)
            res.push_back(3);
        else if(arr[4][Q[i]+1]-arr[4][P[i]]!=0)
            res.push_back(4);
    }
    return res;
}