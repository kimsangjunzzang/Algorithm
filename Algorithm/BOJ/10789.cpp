//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

char arr[5][15];

int main() {
    
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 15; i++) {
        for (int k = 0; k < 5; k++) {
            if(arr[k][i] != NULL)
                cout << arr[k][i];
        }
    }

    return 0;
}
