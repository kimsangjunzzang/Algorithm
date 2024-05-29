#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    stack<int>st;
    int testCase,num;
    cin>> testCase;
    
    for(int i=0;i<testCase;i++){
        cin >> num;
        
        if(num == 1){
            int k;
            cin>>k;
            st.push(k);
            
        }else if(num == 2){
            if(!st.empty()){
                cout<<st.top()<<"\n";
                st.pop();
                
            }else{
                cout<<-1<<"\n";
            }
            
        }
        else if(num == 3){
            cout<<st.size()<<"\n";
            
        }
        else if(num == 4){
            if(st.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
            
        }else {
            if(!st.empty()) cout<<st.top()<<"\n";
            else cout<<-1<<"\n";
            
        }
    }
    return 0;
    
}
