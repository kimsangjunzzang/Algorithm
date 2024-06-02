//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int n;
//    while (cin>>n) {
//        
//        long long i=1;
//        
//        long long num = 0;
//        while(1){
//            
//            num += pow(10, i-1);
//            
//            if(num % n ==0) {
//                
//                break;
//            }
//            i++;
//        }
//        cout<< i<<"\n";
//    }
//    return 0;
//}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    
    while (cin>>n) {
        long long i=1;
        long long num = 1;
        while(1){
            if(num % n ==0) {
                
                break;
            }
            i++;
            num = num * 10 + 1;
            num %= n;
        }
        cout<< i<<"\n";
    }
    return 0;
}
