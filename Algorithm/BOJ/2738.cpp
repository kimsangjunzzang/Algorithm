#include <iostream>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    
    int arr[N][M];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int k;
            cin>> k;
            arr[i][j] += k;
            
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<< arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
