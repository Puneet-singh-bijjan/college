#include <iostream>
#include <conio.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(){
        data = 0;
    }

    node(int d){
        data = d;
        next =NULL;
    }

};

class LinkedList{
    public:
    node *head;

    LinkedList(){
        head = NULL;
    }

    void insertNode(int data , int position = 0){
        int i;
        node *toAdd = new node(data);

        if(head == NULL){
            head = toAdd;
            return;
        }

        if(position == 1){
            toAdd->next = head;
            head = toAdd;
            return;
        }

        node *temp = head;
        for(i=1;i<position;i++){
            temp = temp->next;
        }
        toAdd->next = temp->next;
        temp->next = toAdd;
    }

    void deleteNode(int position){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
        }
        if(position==1){
            head = head->next;
        }
        int listLen = 0,i;
        node *temp = head;
        while(temp!=NULL){
            listLen++;
            temp=temp->next;
        }
        if(listLen<position){
            cout<<"Index out of range."<<endl;
        }
        temp = head;
        for(int i=0;i<position;i++){
            temp=temp->next;
        }
        temp->next = temp->next->next;
    }

    void display(){
        node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};
int main(){
    int ch;
    LinkedList List;
    do{
        cout<<"Enter 1 to insert data\nEnter 2 to delete data\nEnter 3 to display data\nEnter 4 to exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1 :
                cout<<"\nEnter the data you want to insert  :";
                int data,position;
                cin>>data;
                cout<<"Enter the position where you want to insert data or enter 0 to enter at the end of list : ";
                cin>>position;
                List.insertNode(data,position);
                break;
            case 2 :
                cout<<"Enter the position of node you want to delete  :";
                cin>>position;
                List.insertNode(position);
                break;
            case 3 :
                List.display();
                break;
            case 4 :
                break;
        }

    }while(ch!=4);
}
