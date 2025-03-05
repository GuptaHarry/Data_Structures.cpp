

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


Node * createLL(int arr[],int index,int size , Node * prev){

    // base case 
    if( index == size){
        return prev;
    }

    Node * temp = new Node(arr[index]);
    temp->next=prev;
    return createLL(arr,index+1,size,temp);

}

Node * insert_Middle( int arr[], int index , int x , Node * prev , Node * inserted ,Node * head){
    // base case 
    if( index == x){
        inserted->next = prev->next;
        prev->next=inserted;
         return head;

    }

    Node * temp = prev;
   return  insert_Middle(arr,index+1,x ,temp->next,inserted,head);
}
int main(){
    
int arr[]={1,2,3,4,5};

Node * head = createLL(arr,0,5,NULL);
// list created 
int x =3;
int value=567;
Node *inserted = new Node(value);

head = insert_Middle(arr,0,x-1,head,inserted,head);







    
  // printing
  Node *temp1;
  temp1=head;
  while(temp1){
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
  }
  
    return 0;
}




