#include<iostream>
using namespace std;

int main(){
    int num;
    int odd[7];
    int even=0;
    int sum=0;
    int lss=100;
   
    for(int i=0;i<7;i++){
        cin>>num;
        if(num%2!=0){
            odd[i]=num;
            sum +=num;
            
            if(lss>odd[i]){
                lss=odd[i];
            }
        }
        else even+=1;
    }
    
    if(even==7){
        cout<<"-1"<<endl;
    }
    
    else{
    cout<<sum<<endl;
    cout<<lss<<endl;
    }
    
}
