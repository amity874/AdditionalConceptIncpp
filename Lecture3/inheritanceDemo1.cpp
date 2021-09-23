#include<bits/stdc++.h>
// --===Amit pandey--===
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				make_pair
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define bitc(n) 		__builtin_popcount(n)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;
template <typename T> T gcd(T a, T b) {if (a % b) return gcd(b, a % b); return b;}
template <typename T> T lcm(T a, T b) {return (a * (b / gcd(a, b)));}
class Counter{
protected:
int x;
 int count;
     public:
    Counter():count(0){
        std::cout<<"Base class constructor 1 called"<<"\n";
    };
    Counter(int c):count(c){
        std::cout<<"Base class constructor 2 called"<<"\n";
    };
     int get_Count() const{
         return this->count;
     }
     Counter operator ++(){
         return Counter(this->count++);
     }
     ~Counter(){
         std::cout<<"Base  class Distructor1"<<"\n"; 
     }
};
class CountDn:public Counter{//by default it is private
public:
int count1;
int x;
CountDn(){
    std::cout<<"Derived class constructor1 called"<<"\n";
}
CountDn(int c):Counter(c){
    cout<<"Derived class Constructor2 called"<<"\n";
}
Counter operator --(){
    return Counter(--this->count);
}
 ~CountDn(){
         std::cout<<"Derived  class Distructor1"<<"\n"; 
     }
};
class CountIncr:public CountDn{
    public:
    void operator--(){
        --this->count;
    }
};
int main(int argc, char const *argv[])
{
    CountDn c1;
    // cout<<(c1.get_Count())<<"\n";
    // ++c1;++c1;
    // cout<<(c1.get_Count())<<"\n";
    CountDn(2);  
    CountIncr c2;
    c2.x;
return 0;
}