#include<stack>
#include<iostream>
#include<string>
using namespace std;

int main(){
    int testCase;
    int num;
    cin>>testCase;
    stack<int> arr;
    string str;
    
    while(testCase--){
        cin>>str;
        if(str=="push"){
            cin>> num;
            arr.push(num);
        }
        else if(str=="top"){
            if(arr.size()==0){
                cout<<"-1"<<endl;
            }
            else{
            cout<<arr.top()<<endl;
            }
        }
        
        else if(str=="size") cout<<arr.size()<<endl;
        
        else if(str=="empty"){
            if(arr.size()==0) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        
        else if(str=="pop") {
            if(arr.size()==0){
                cout<<"-1"<<endl;
            }
            else {
                cout<<arr.top()<<endl;
                arr.pop();
            }
        }
    }
    return 0;
    
    
}
