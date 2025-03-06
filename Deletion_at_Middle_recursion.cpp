
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


Node * createLL(int arr[],int index,int size ){

    // base case 
    if( index == size){
        return NULL;
    }

    Node * temp = new Node(arr[index]);
    temp->next = createLL(arr,index+1,size);
    return temp;
}


Node * deleteMiddle(Node * curr ,int x){
   
 if(x==1){
    Node *temp = curr->next;
    delete curr;
    return temp;
 }
 
   curr->next= deleteMiddle(curr->next,x-1);
   return curr;

}
int main(){

int arr[]={1,2,3,4,5};
 
   Node * head;
   head = createLL(arr,0,5);



  // printing
  Node *temp1;
  temp1=head;
  while(temp1){
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
  }
  

  head  = deleteMiddle(head,2);
  head = deleteMiddle(head,1);

  
  Node *temp2;
  temp2=head;
  while(temp2){
    cout<<temp2->data<<" ";
    temp2 = temp2->next;
  }


    return 0;
}