#include<bits/stdc++.h>
using namespace std;

string po2pre(string s){
    int i = 0;
    stack<string>st;
    int n = s.length();

    while(i<n){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) st.push(string(1,s[i]));
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            st.push(s[i] + t2 + t1);
        }
        i++;
    }
    return st.top();
}

int main(){
    string s = "AB-DE+F*/";
    cout<<po2pre(s);
}