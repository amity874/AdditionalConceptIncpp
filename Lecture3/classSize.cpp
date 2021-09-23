#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int x;//already in 2's power
    int y;
    // long long int m;
    char ch;//need a padding so 8 will be the size
};
class B:public A{
    public:
    int z;
};
int main(int argc, char const *argv[])
{
    cout<<sizeof(A)<<" "<<sizeof(B)<<"\n";
    cout<<alignof(char)<<alignof(int);
return 0;
}