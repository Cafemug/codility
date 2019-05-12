// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
   int len =A.size();
   int size=0,value=0,count=0,candi=-1,idx=-1;
   for(int i=0;i<len;i++){
       if( size==0){
           size+=1;
           value=A[i];
       }
       else{
           if(value==A[i]){
               size+=1;
           }
           else{
               size-=1;
           }
       }
   }
   int leader=-1;
   if(size>0)
        candi=value;
   for(int i=0;i<len;i++){
       if(A[i]==candi){
           count++;
           idx=i;
       }
            
   }
   if(count>len/2)
        leader=idx;
    return leader;
}