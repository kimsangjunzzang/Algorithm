#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> v(10);  // 0~9까지의 카운트를 저장할 벡터

    while (true) {
        string str;
        cin >> str;

        // "0"이 입력되면 반복을 종료
        if (str == "0") {
            break;
        }

        int num;
        if (str.length() == 2) {  // 길이가 2인 경우 첫 번째 문자를 숫자로 변환
            num = str[0] - '0';   // '0'의 아스키 값을 빼서 숫자로 변환
        } else {                  // 그 외의 경우 0으로 처리
            num = 0;
        }

        // 입력된 숫자의 카운트를 증가
        v[num]++;
    }

    // 1~9까지의 숫자 카운트 출력
    for (int i = 1; i < 10; i++) {
        cout << i << " - " << v[i] << endl;
    }

    return 0;
}