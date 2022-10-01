#include<bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int main(){
    Stack <float> st;
    st.push(1.5);
    st.push(2.9);
    st.push(3.1);
    st.push(4.5);
    st.push(5.3);

     st.pop();
    cout<<st.mid()<<endl;
}