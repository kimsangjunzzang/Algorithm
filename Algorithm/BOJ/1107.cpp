//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <string>

using namespace std;

int broken_btn[10] = {0,};


bool btn_set(int n) {
    string str_n = to_string(n);
    
    for (int i = 0; i < str_n.length(); i++) {
        if (broken_btn[str_n[i] - '0'] == 1)
            return false;
    }
    return true;
}

int main() {
    int N;
    int M;
    cin >> N;
    cin >> M;

    int ch = 100;
    int ans;

    for (int i = 0; i < M; i++) {
        int btn_number;
        cin >> btn_number;
        broken_btn[btn_number] = 1;
    }
    // 1번 방법: ch 100 번에서 +, - 를 통해 직접 움직이는 방법
    int cnt = abs(ch - N);
    
    // 2번 방법: 버튼 조작을 통해 채널로 이동 -> 만약 해당 채널로 한번에 가지 못할 경우 +, - 로 이동
    for (int i = 0; i <= 1000000; i++){
        if (btn_set(i) == true){
            int second_cnt = abs(N - i) + to_string(i).length();
            cnt = min(cnt, second_cnt);
        }
    }
    cout << cnt;

    return 0;
}
