#include <iostream>
#include <stack>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    cin.ignore();
    
    string str;
    stack<string>st;
    for(int i=0;i<testCase;i++){
        getline(cin,str);
        string str2;
        
        for(int k=0;k<str.size();k++){
            
            if(str[k] == ' '){
                st.push(str2);
                str2 = "";
            }else{
                str2 += str[k];
            }
            if(k == str.size()-1) st.push(str2);
        }
        int k = st.size();
        
        cout<<"Case #"<<i+1<<": ";
        for(int j=0;j<k;j++){
            
            cout<<st.top()<<" ";
            st.pop();
        }
        
        
    }
    
}
