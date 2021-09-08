#include<iostream>
using namespace std;

int main()
{
    int n=10, k=5;
    int num;
    cin >> num;
    if(num>=1 && num<= 5)
    {
        cout << "NUMBER OF CANDIES SOLD : " << num <<"\n";
        cout << "NUMBER OF CANDIES LEFT : "<< n-num ;
    }else {
        cout<< "INVALID INPUT\n";
        cout << "NUMBER OF CANDIES LEFT : "<<n;
    }
    return 0;
}