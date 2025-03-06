
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


Node * deleteEnd(Node * head){
   
    if(head !=NULL){
         
        if(head->next ==NULL){
            Node *temp = head;
            delete temp;
            return NULL;
        }
        else{
            Node *curr=head;
            Node * prev = NULL;

            while(curr->next !=NULL){
                prev=curr;
                curr=curr->next;
            }

            prev->next = NULL;
            delete curr;
            return head;
        }
    }
    else{
        return NULL;
    }
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
  

  head  = deleteEnd(head);

  
  Node *temp2;
  temp2=head;
  while(temp2){
    cout<<temp2->data<<" ";
    temp2 = temp2->next;
  }


    return 0;
}