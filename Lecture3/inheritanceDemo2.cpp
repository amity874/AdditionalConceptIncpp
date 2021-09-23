#include<bits/stdc++.h>
using namespace std;
class Counter{
protected:
int count;
public:
Counter():count(0){
        std::cout<<"Counter constructor1 called"<<"\n";
}
Counter(int c):count(c){
        std::cout<<"Counter constructor2 called"<<"\n";
}
void operator ++(){
++this->count;
}
};
class Timer{
    protected:
    int ms=0;
    public:
    Timer():ms(0){
        std::cout<<"Timer constructor1 called"<<"\n";
    };
    Timer(int m):ms(m){
        std::cout<<"Timer constructor2 called"<<"\n";
    }
    int getms(){
        return this->ms;
    }
    void operator ++(){
        +this->ms;
    }
};
class StopWatch:public Counter,public Timer{
public:
    StopWatch (){
        std::cout<<"StopWatch constructor1 called"<<"\n";
    }
};
int main(int argc, char const *argv[]){
StopWatch s;
// ++s;//ambuiguity 
// ++s;
// std::cout<<s.getms()<<"\n";
return 0;
}