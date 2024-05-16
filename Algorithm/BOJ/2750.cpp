#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    int num;
    cin>> num;
    
    vector<int>v(num);
    for(int i=0;i<num;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    
    for(int i=0;i<num;i++){
        cout<<v[i]<<endl;
    }
    
}
