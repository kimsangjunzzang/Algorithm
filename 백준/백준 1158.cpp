#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    int total;
    cin>>total;
    
    int num;
    cin>>num;
    

    queue<int>q;
    
    for(int i=1;i<=total;i++){
        q.push(i);
    }
    
    cout<<"<";
    while(1){
    for(int j=1;j<num;j++){
        q.push(q.front());
        q.pop();
    }
    cout<<q.front();
    q.pop();
        if(q.size()==0){
            break;
        }
        cout<<", ";
        
    
    
    
    }
    cout<<">"<<endl;
    return 0;
    
}

