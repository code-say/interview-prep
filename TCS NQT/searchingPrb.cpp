//Find the given element in sorted and rotated array
#include<iostream>

using namespace std;

int findOne(int a[], int start, int end) {
    if(start>end)
        return -1;
    
    int mid = start + (end-start)/2;

    if(a[mid] == 1 && (mid == 0 || a[mid-1] == 0)) 
        return mid;
    else if(a[mid] == 0)
        return findOne(a, mid+1, end);
    else
        return findOne(a, start, mid-1);
}

int main() {
    int n,t;
    cin>>t;

    while(t--) {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int index = findOne(a, 0, n-1);

        cout<<index<<endl;
    }
return 0;
}