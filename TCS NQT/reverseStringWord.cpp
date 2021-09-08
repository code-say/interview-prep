#include<bits/stdc++.h>
using namespace std;

string reverseString(string s)
{
    if(s.size() == 0)
        return s;
    string result;
    stack<string> st;
    for (int i=0; i<s.size(); i++){
        string word;
        if(s[i]== ' ')
            continue;
        while(i<s.size() && s[i]!= ' '){
            word+= s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        result += " ";
    }
    return result;
}

int main(){
    string s =" Welcome to Nagarro" ;
    cout<<reverseString(s);

}