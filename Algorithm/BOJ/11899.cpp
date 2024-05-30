#include <iostream>
#include <stack>

using namespace std;

int main(){
    int cnt = 0;
    string str;
    cin>>str;
    
    stack<char>st1;
    stack<char>st2;
    
    for(int i=0;i<str.size();i++){
        st1.push(str[i]);
    }
    int size = st1.size();
    
    for(int i=0;i<size;i++){
        if(st2.empty()){
            if(st1.top() == '('){
                cnt++;
                st1.pop();
                
            }else{
                st2.push(st1.top());
                st1.pop();
                cnt++;
                
                
            }
        }else{
            if(st1.top() == '('){
                cnt--;
                st1.pop();
                st2.pop();
                
            }else{
                st2.push(st1.top());
                st1.pop();
                cnt++;
                
            }
            
        }
    }
    cout<<cnt<<endl;
}
