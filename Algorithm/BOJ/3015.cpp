#include <iostream>
#include <stack>
using namespace std;

struct e {
    int h, cnt;
};

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int n;cin >> n;
    stack<e> st;
    
    long long ans = 0;
    
    while (n--) {
        int x;cin >> x;
        int cnt = 1;
        
        while(!st.empty() && st.top().h <= x) {
            ans += st.top().cnt; // t보다 크거나 같은 사람(k)
            
            if (st.top().h == x) {
                cnt += st.top().cnt;
            }
            
            st.pop();
        }
        
        if(!st.empty()) {
            ans++; // x앞에 x보다 큰 사람
        }
        st.push({x, cnt});
    }
    cout << ans;
}
