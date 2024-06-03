#include <iostream>
using namespace std;

int main(){
    int e,s,m,cnt =1;
    int e2=1,s2=1,m2 =1;
    cin>>e>>s>>m;
    
    while(1){
        
        if(e2==e && s2==s && m2==m){
            break;
        }else{
            
            e2+=1;
            s2+=1;
            m2+=1;
            
            if(e2 >15){
                e2 = 1;
            }
            if(s2 >28){
                s2 = 1;
            }
            if(m2 >19){
                m2 = 1;
            }
            cnt++;
            
        }
       
    }
    cout<<cnt<<endl;
}
