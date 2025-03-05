

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;


    Node(int value){
        data= value;
        next = NULL;
    }
};


int main(){
  int arr[] = {1,2,3,4,5};
  
  Node * head;
  head = NULL;

  for(int i=0 ; i<5 ;i++){
     
  if(head == NULL){
    head = new Node(arr[i]);
  }
  else{
    Node * temp;
    temp = new Node(arr[i]);
    temp->next  = head;
    head = temp;
  }

  }


  //o/p linked list -> 5 4 3 2 1.


  // printing
  Node *temp1;
  temp1=head;
  while(temp1){
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
  }
  




    return 0;
}
