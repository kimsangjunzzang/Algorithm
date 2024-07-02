//17425 약수의 합 Gold 4

//1st Try -> 함수를 통한 루프문 처리
/*
 #include<iostream>
 using namespace std;
 
 int fxCheck(long long num) {
 long long sum = 0;
 for(long long i=1;i<=num;i++) {
 if(num % i == 0 ) {
 sum += i;
 }
 }
 return sum;
 }
 
 int main() {
 
 cin.tie(NULL);
 cout.tie(NULL);
 ios_base::sync_with_stdio(false);
 
 int testCase;
 cin>>testCase;
 
 for(int i=0;i<testCase;i++) {
 long long num;
 long long sum =0;
 cin>>num;
 
 for(long long j=1;j<=num;j++){
 sum += fxCheck(j);
 }
 cout<< sum<<endl;
 
 }
 
 }
 */

//2nd Try -> 누적합 접근

#include <iostream>

using namespace std;

long long dp[1000001];

void makeDp() {
    for(int i=1; i<1000001; i++){
        for(int j=i; j<1000001; j+=i){
            dp[j]+=i;
        }
        dp[i]+=dp[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    makeDp();
    
    int testCase;
    cin >> testCase;
    for(int i=0; i<testCase; i++){
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}
