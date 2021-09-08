#include<iostream>
using namespace std;

void reverse(node* head) {
    node* C = head;
    node* P = NULL;
    node*N;
    while(C != NULL) {
        N = C->next;
        C->next = P;

        P = C;
        C = N;
    }
    head = P;
}

int main(){
    node* head;
    cin>>head;
    cout<< head;
    reverse(head);
    cout<<head;
}