#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> arr;
    int testCase;
    cin>>testCase;
    
    while(testCase--){
        string str;
        cin>>str;
        if(str=="push_front"){
            int add;
            cin>>add;
            arr.push_front(add);
        }
        else if(str=="push_back"){
            int add;
            cin>>add;
            arr.push_back(add);
        }
        else if(str=="pop_front"){
            if(arr.size()!=0){
            cout<<arr.front()<<endl;
            arr.pop_front();
            }
            else cout<<"-1"<<endl;
        }
        else if(str=="pop_back"){
            if(arr.size()!=0){
            cout<<arr.back()<<endl;
            arr.pop_back();
            }
            else cout<<"-1"<<endl;
        }
        else if(str=="size"){
            cout<<arr.size()<<endl;
        }
        else if(str=="empty"){
            if(arr.size()!=0) cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        else if(str=="front"){
            if(arr.size()!=0)
            cout<<arr.front()<<endl;
            else cout<<"-1"<<endl;
            
        }
        else if(str=="back"){
            if(arr.size()!=0)
            cout<<arr.back()<<endl;
            else cout<<"-1"<<endl;
            
        }
        
    }
    return 0;
}
