#include<bits/stdc++.h>
class Complex{
    public:
    int real;
    int img;
    Complex(){}
    Complex(int r,int i):real(r),img(i){}
    void Display()const{
        std::cout<<this->real<<" + i"<<this->img<<"\n";
    }
    //overloading prefix
    void operator ++(){
        ++this->real;
        ++this->img;
    }
    //overloading postfix
    Complex operator ++(int){
        Complex temp(this->real,this->img);
        this->real++;
        this->img++;
        return temp;
    }
    //airthmetic operator
    Complex operator +(Complex const &c){
        return Complex(this->real+c.real,this->img+c.img);
    }
    //comparison
    bool operator <(Complex const &c){
        return this->real<c.real;
    }
    //assignment perator
    void operator +=(Complex const &c){
        this->real+=c.real;
        this->img+=c.img;
    }
};
int main(int argc, char const *argv[])
{
    Complex c1(5,3);
    ++c1;
    Complex c2=c1++;
    c1.Display();
    c2.Display();
    Complex c3=c1+c2;
    c3.Display();
return 0;
}