#include<iostream>
#include<queue>

using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    queue<int> arr;
    
    while(testCase--){
        string str;
        cin>>str;
        if(str=="push"){
            int add;
            cin>>add;
            arr.push(add);
        }
        else if(str=="front"){
            if(arr.size()!=0){
            cout<<arr.front()<<endl;
            }
            else {
                cout<<"-1"<<endl;
                
            }
        }
        else if(str=="size"){
            cout<<arr.size()<<endl;
        }
        else if(str=="pop"){
            if(arr.size()!=0){
            cout<<arr.front()<<endl;
            arr.pop();
            }
            else cout<<"-1"<<endl;
        }
        else if(str=="empty"){
            if(arr.size()!=0) cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        else if(str=="back"){
            if(arr.size()!=0){
            cout<<arr.back()<<endl;
            }
            else cout<<"-1"<<endl;
            
        }
        
    }
    return 0;
    
}

