#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int arr[26];
    cin>>str;
    
    for(int i=0;i<26;i++){
        arr[i]=-1;
    }
    
    for(char a='a';a<='z';a++){
        
        for(int i=0;i<str.length();i++){
            if(a==str[i]) {
                arr[(int)a-97]=i;
                break;
        
        }
    }
    
   
}
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
    
    
}
