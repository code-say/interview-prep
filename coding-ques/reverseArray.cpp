Given an array (or string), the task is to reverse the array/string.
  
  
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
  while(start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void printArray(int arr[], int size)
{
  for( int i = 0; i < size; i++)
    cout << arr[i] << " ";
  
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  printArray(arr, n);
  
  reeverseArray(arr, 0, n-1);
  cout <<< "reversed array is" << endl;
  
  printArray(arr, n);
  
  return 0;
}
