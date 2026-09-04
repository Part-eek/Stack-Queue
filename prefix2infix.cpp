#include<bits/stdc++.h>
using namespace std;

string pre2inf(string s){
    int n = s.length();
    int i = n-1;
    stack<string>st;

    while(i>=0){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) st.push(string(1,s[i]));
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string ans = '('+t1+s[i]+t2+')';
            st.push(ans);
        }
        i--;
    }
    return st.top();
}

int main(){
    string s = "*+PQ-MN";
    cout<<pre2inf(s);
}