#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string new_id;
    cin>>new_id;
    
    for(int i=0;i<new_id.length();i++){
        if(new_id[i]>=65 && new_id[i]<=90){
            new_id[i]=(char)new_id[i]+32;
        }
    }
  
    for(int i = 0; i < new_id.length();) {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9')
            || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            i++;
            continue;
        }
        
            new_id.erase(new_id.begin()+i);
    }
        
    for(int i=1;i<new_id.length();){
        if(new_id[i] == '.' && new_id[i - 1] == '.'){
            new_id.erase(new_id.begin()+i);
            continue;
            }
        else i++;
        }
        
        if (new_id.front() == '.') new_id.erase(new_id.begin());
        if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
        
        if(new_id.length()==0) new_id="a";
        
        if(new_id.length()>=16){
            for(int i=15;i<=new_id.length();i++){
                new_id.erase(i);
            }
            
        }
       
        if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
        
        if (new_id.length() <= 2){
                while(new_id.length() != 3){
                    new_id += new_id.back();
                }
            }
            
    
    cout<<new_id<<endl;
}
