#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool vps(string ps) {
    stack<char> st;
    bool tf = true;
    for (int i = 0; i < ps.size(); ++i) {
        if (ps[i] == '(')
            st.push(ps[i]);
        else if (!st.empty() && ps[i] == ')')
            st.pop();
        
        else if (st.empty() && ps[i] == ')') {
            tf = false;
            break;
        }
    }
    if (st.empty() && tf) return true;
    else return false;
}
int main() {
    int num;
    string ps;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> ps;
        if (vps(ps)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
