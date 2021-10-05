

#include<iostream>
using namespace std;

struct NOde{
  int data;
  struct Node* next;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};
