//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    string str;
   
    int cnt  = 0;
    cin >> str;
    
    for( int i=0;i<str.size();i++) {
        char c;
        c = str[i];
        
        if (c == 'A'|| c == 'B'|| c == 'C' ) {
            cnt += 3;
        }else if (c == 'D'|| c == 'E'|| c == 'F' ) {
            cnt += 4;
        }else if (c == 'G'|| c == 'H'|| c == 'I' ) {
            cnt += 5;
        }else if (c == 'J'|| c == 'K'|| c == 'L' ) {
            cnt += 6;
        }else if (c == 'M'|| c == 'N'|| c == 'O' ) {
            cnt += 7;
        }else if (c == 'P'|| c == 'Q'|| c == 'R' || c == 'S' ) {
            cnt += 8;
        }else if (c == 'T'|| c == 'U'|| c == 'V' ) {
            cnt += 9;
        }else if (c == 'W'|| c == 'X'|| c == 'Y' || c=='Z' ) {
            cnt += 10;
        }
    }
    cout << cnt <<endl;
}
