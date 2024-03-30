//Author : nishj347 @github
/*Create a class Stack with one array of size 10 and top as data member. Set t=-1
in constructor. Create push and pop operation and handle overflow and underflow.*/
#include <iostream>
using namespace std;
class stack{
    int arr[10];
    int top;

    public:
    stack(){
    top=-1; //intialization
    }

    void push(int value){
        if (top==9){
            cout<<"stack overflow:cannot push more elements"<<endl;
            return;
        }
    arr[++top]=value;
    cout<<"pushed\t"<<value<<"\tinto the stack\n"<<endl;
    }

    int pop(){
        if (top==-1){
            cout<<"stack underflow:cannot pop more elements"<<endl;
            return -1;
        }
    int popped=arr[top--];
    cout<<"popped\t"<<popped<<"\tthe element"<<endl;
    return popped;
    }
};
int main(){
    stack s;
    s.push(7);
    s.push(98);
    s.push(67);
    s.push(78);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
return 0;
}
