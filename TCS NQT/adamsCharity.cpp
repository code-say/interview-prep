#include<bits/stdc++.h>
using namespace std;

int total(int n) {
    return (n*(n+1)*(2*n+1))/6;
}

int main() {
    int n = 2;
    cout<<total(n);
}