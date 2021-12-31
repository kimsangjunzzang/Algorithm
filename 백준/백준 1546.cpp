#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    double sum=0;
    double score[num];
    double max=0;
    
    for(int i=0;i<num;i++){
        cin>>score[i];
        
        if(max<score[i])
            max=score[i];
    }
    
    for(int i=0;i<num;i++){
        score[i]=score[i]/max*100;
        sum+=score[i];
    }
    
    cout<<(double)sum/num<<endl;
}
