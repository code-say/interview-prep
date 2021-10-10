// Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 

#include<bits/stdc++.h>
using namespace std;

/* function to left Roatate arr[] of size n by 1*/

void leftRoatatebyOne(int arr[], int n)
{
  int temp = arr[0], i;
  for (i=0; i< n; i++)
     arr[i] = arr[i+1];
  
  arr[n-1] = temp;
}

/* function to left Roatate arr[] of size n by d*/
void leftRoatae(int arr[], int d, int n)
{
  for(int i=0;i < d; i++)
    leftRotatebyOne(arr, n);
}

/*utility function to print an array */
void printArray(int arr[], int n)
{
  for(int i = 0; i< n; i++)
    cout << arr[i] << " ";
}

int main()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
  int n = sizeof(arr) / sizeof(arr[0]);
  
  //Function calling
  leftRoatate(arr, 2, n);
  printArray(arr, n);
  
  return 0;
}
