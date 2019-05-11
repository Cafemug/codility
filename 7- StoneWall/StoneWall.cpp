// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> s;
int solution(vector<int> &H) {
    int len=H.size();
    int res=0;
    for(int i=0;i<len;i++){
        while(s.size()!=0 && s.back()>H[i]){
            s.pop_back();
        }
        if(s.size()==0 || s.back()<H[i]){
            s.push_back(H[i]);
            res++;
        }
        
    }
    return res;
}