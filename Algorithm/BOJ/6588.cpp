#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime(1000001,true); // 소수 전체 배열 true 초기화

// 소수가 아닌 숫자 false로 전환
void PrimeCheck() {
    for (long long i = 2; i * i <= 1000000; i++) {
        for (long long j = i * i; j <= 1000000; j += i) {
            prime[j] = false;
        }
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    long long n;
    PrimeCheck(); // 함수 실행으로 배열 셋업
    
    while (cin>>n) {
        
        if (n == 0 || n == 1) {
            break;
        }
        // prime 배열 중 주어진 수보다 작은 수 중에 가장 큰 수와 가장 작은 수 구함.
        
        for (long long i = 2; i <= n; i++) {
            if ((prime[i] == true) && (prime[n - i] == true)) {
                cout << n << " = " << i << " + " << n - i <<"\n";
                break;
            }
        }
        
    }
}
