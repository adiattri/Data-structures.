#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
  

};

void insertAtHead(Node* &head, int d){
  //create a new node
  Node* temp = new Node(d);
  //Change address of new from null to head
  temp -> next = head;
  // change head to new node
  head = temp;  
}

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp -> data<<" ";
    temp = temp -> next;
  }
  cout<<endl;
}



int main() {
  //created a new node
  Node* node1 = new Node(10);

  //head pointed to node1
  Node* head = node1;
  print(head);

  insertAtHead(head, 12);
  print(head);
  return 0;
}

