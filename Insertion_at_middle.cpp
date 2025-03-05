

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
int main(){
    
int arr[]={1,2,3,4,5};

Node * head = createLL(arr,0,5,NULL);
// list created 

int x =3;
int value = 567;

x--;
Node *temp = head;

while(x--){
    temp = temp->next;
}

Node *temp2 = new Node(value);

temp2->next = temp->next;
temp->next = temp2;

    
  // printing
  Node *temp1;
  temp1=head;
  while(temp1){
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
  }
  
    return 0;
}