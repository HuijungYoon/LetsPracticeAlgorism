#include <bits/stdc++.h>
using namespace std;


stack<string> st;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    st.push("엄");
    st.push("준");
    st.push("식");
    st.push("화");
    st.push("이");
    st.push("팅");
    st.push("!");

    while(st.size())
    {
        cout<< st.top() <<"\n";
        st.pop();

    }
}