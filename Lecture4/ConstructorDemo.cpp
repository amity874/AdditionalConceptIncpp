#include<bits/stdc++.h>
class Product{
public:
int price;
std::string name;
//default cons
Product(){}//not mendatory to write
//Parametarized cons'
Product(int p,std::string n):price(p),name(n){}
Product(std::string name){
    this->name=name;
}
~Product(){
std::cout<<"Destructure";
}
};
int main(int argc, char const *argv[]){
    Product p1;//init in stack
    Product *p2=new Product;//init in heap
    Product *p3=new Product();//init in heap
    Product p4;//init in stack;
    Product p5(100000,"Iphone");
    Product p7("Redmi");
return 0;
}