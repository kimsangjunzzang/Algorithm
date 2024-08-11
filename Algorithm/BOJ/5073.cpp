//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    while (1){
        
        int triangle[3];
        
        for (int i = 0; i < 3; i++){
            cin >> triangle[i];
        }
        if (triangle[0] == 0 && triangle[0] == triangle[1]
            && triangle[0] == triangle[2]){
            break;
        }
        sort(triangle, triangle + 3);
        
        if (triangle[2] >= triangle[1] + triangle[0]){
            cout << "Invalid" << '\n';
        } else if (triangle[0] != triangle[1] && triangle[1] != triangle[2]
                   && triangle[0] != triangle[2]) {
            cout << "Scalene" << '\n';
        }
        else {
            if (triangle[0] == triangle[1] && triangle[1] == triangle[2]) {
                cout << "Equilateral" << '\n';
            }
            else {
                cout << "Isosceles" << '\n';
            }
        }
    }
}
