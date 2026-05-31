#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& st, int x) {
    if(st.empty()) {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(top);
}

void reverseStack(stack<int>& st) {
    if(st.empty()) return;

    int top = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, top);
}

int main() {
    stack<int> st;

    for(int x : {4,1,3,2}) {
        st.push(x);
    }

    reverseStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
