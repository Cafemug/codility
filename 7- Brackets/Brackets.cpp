#include <stack>
stack<char> s;
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int len = S.size();
    for(int i=0;i<len;i++){
        if(S[i]=='('|| S[i]=='['||S[i]=='{'){
          s.push(S[i]);  
        }
        else{
            if(s.empty())
                return 0;
            char temp = s.top();
            
            if(temp=='('){
                if(')'!=S[i])
                    return 0;
            }
            else if(temp=='{'){
                if('}'!=S[i])
                    return 0;
            }
            else{
                if(']'!=S[i])
                    return 0;
            }
               
            s.pop();
        }
    }
    if(!s.empty())
        return 0;
    return 1;
}