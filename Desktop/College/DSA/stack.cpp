#include <iostream>
#include<conio.h>
using namespace std;

class stack{
    int *mystack;
    int size,top;
    public:
    stack(){
        top=-1;
        cout<<"Enter the size of stack:"<<endl;
        cin>>size;
        mystack = new int[size];
    }
    void push(){
        if(top==(size-1)){
            cout<<"stack is full"<<endl;
        }else{
            cout<<"Enter the value to be pushed"<<endl;
            top++;
            std::cin >> mystack[top];
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
        }else{
            cout<<mystack[top]<<" is deleted from ur stack."<<endl;
            mystack[top] = 0;
            top--;
        }
    }

    void show() {
        for(int j=0;j<=top;j++){
            cout<<'\n'<<mystack[j];
        }
    }
};


int main()
{
    int ch;
    stack obj;
    do{
        cout<<"press 1 for push"<<endl;
        cout<<"Press 2 for pop"<<endl;
        cout<<"Press 3 for display"<<endl;
        cout<<"Press 4 for exit"<<endl;


        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch){
            case 1:
            obj.push();
            break;
            case 2 :
                obj.pop();
                break;
            case 3 :
                obj.show();
                break;
            case 4:
                break;
            }
    }
            while(ch!=4);

    return (0);
}
