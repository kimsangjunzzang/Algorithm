#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    cin.ignore();
    
    while(testCase--){
        string str ="";
        getline(cin,str);
        str +=' ';
        stack<char> st;
        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout<<str[i];
            }
            else st.push(str[i]);
        }
        
        
        
    }
}
