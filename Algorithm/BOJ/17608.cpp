#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    
    stack<int> st;
    vector<int> v;
    
    for(int i=0;i<testCase;i++){
        int num;
        cin>>num;
        st.push(num);
    }
    
    v.push_back(st.top());
    st.pop();
    int size = st.size();
    
    for(int i=0;i<size;i++){
        
        if (st.top() > v.back()){
            v.push_back(st.top());
            
            st.pop();
        }else{
            st.pop();
        }
    }
    cout<<v.size()<<endl;
}
