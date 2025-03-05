

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
   Node * head = NULL;

 
 // M-1  T.C. high

//    for(int i=0 ; i<5;i++){

//     if(head == NULL){
//         head = new Node(arr[i]);
//    }
//    else{
//     // traverse till end;
//     Node * tail ;
//     tail = head;
    
//     while(tail->next!= NULL){
//         tail = tail->next;
//     }

//     Node * temp = new Node(arr[i]);
//     tail->next =temp;
    
//    }
//    }



  // M-2 using two pointers
  Node *tail = NULL;
  for(int i=0 ; i<5;i++){

    if(head == NULL){
        head = new Node(arr[i]);
        tail=head;
    
    }
    else{
         
       Node *temp = new Node(arr[i]);
       tail->next = temp; 
       tail= tail->next;
    }
  }





   // printing
   // output => 1 2 3 4 5
   Node *temp1;
  temp1=head;
  while(temp1){
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
  }
  


   
    return 0;
}