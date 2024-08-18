//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
using namespace std;

int nthPrime(int n) {
    const int LIMIT = 1000000;
    vector<bool> isPrime(LIMIT, true);
    vector<int> primes;
    
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i < LIMIT; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return primes[n - 1];
}

int main() {
    int n;
    cin >> n;
    cout << nthPrime(n) << std::endl;
    return 0;
}
