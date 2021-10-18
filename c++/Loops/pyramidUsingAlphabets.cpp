// To build a pyramid using alphabets

#include<iostream>
using namespace std;

int main()
{
  char input, alphabet = 'A';
  
  cout<<"Enter the uppercase character you want to print int the last row: "<<endl;
  cin>>input;
  
  for(int i=1; i<= (input- 'A'+1); ++i)
  {
    for(int j=1; j<=i; ++j)
    {
      cout<<alpbhabet<<" ";
      ++alphabet;
    }
    cout<<endl;
  }
  return 0;
}
