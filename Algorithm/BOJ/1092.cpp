//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    int N, M;
    int ans =0;

    // 크레인 배열
    cin >> N;
    vector<int> crane(N);
    for(int i = 0; i < N; i++){
        cin >> crane[i];
    }
    sort(crane.begin(), crane.end(), greater<int>());
    
    // 박스 배열
    cin >> M;
    vector<int> box(M);
    for(int i = 0; i < M; i++){
        cin >> box[i];
    }
    sort(box.begin(), box.end(), greater<int>());

    //문제 풀이
    
    // 크레인이 나를 수 없는 경우
    if(box[0] > crane[0]){
        cout << -1 << endl;
        return 0;
    }
    // 크레인이 나를 수 있는 경우
    while(!box.empty()){
        ans++;
        
        for(int i = 0; i < crane.size(); i++){
            for(int j = 0; j < box.size(); j++){
                if(crane[i] >= box[j]){
                    box.erase(box.begin()+j);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
