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

void insertAtTail(Node* &tail, int d){
  //created a new node
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = tail -> next;
}

void insertAtPosition(Node* &tail,Node* &head,int pos, int data){

  if(pos == 1){
    insertAtHead(head, data);
    return;
  }
  
  
  Node* temp = head;
  int cnt = 1;
  while(cnt < pos - 1){
    temp = temp -> next;
    cnt++;
  }

  if(temp -> next == NULL){
    insertAtTail(tail, data);
    return;
  }
  Node* nodeToInsert = new Node(data);
  nodeToInsert -> next = temp -> next;
  temp -> next = nodeToInsert;
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
  Node* tail = node1;
  print(head);

  insertAtTail(tail, 12);
  print(head);

  insertAtTail(tail, 15);

  insertAtPosition(tail,head, 3, 22);
  print(head);
  return 0;
}

