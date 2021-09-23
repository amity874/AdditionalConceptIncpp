#include<bits/stdc++.h>
class Stack{
    protected:
    int top;
    int st[5];
    Stack(){
        this->top=0;
    }
    void push(int x){
        this->st[++this->top]=x;
    }
    int pop(){
        return this->st[this->top--];
  
  }
  int pop(){
      if(this->top<0){
          std::cout<<"stack is empty"<<"\n";
          return -1;
      }
      return this->st[this->top--];
  }
};
class Stack2:public Stack{
public:
void push(int el){
    if(this->top>5){
        std::cout<<"Stack is full"<<"\n";
        return;
    }
    // this->st[++this->top];
    return Stack::push(el);
}
int pop(){
return Stack::pop();
}
int peek();
};
int Stack2::peek(){
    return this->st[this->top];
}
int main(int argc, char const *argv[])
{
    
return 0;
}