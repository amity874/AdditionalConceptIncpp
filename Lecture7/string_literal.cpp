#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define nl				"\n"
#define pb 				push_back
#define eb				emplace_back
#define vi              std::vector<ll>
#define vs				std::vector<std::string>
#define pii             std::pair<ll,ll>
#define ump				std::unordered_map
#define mp 				std::make_pair
#define pq_max          std::priority_queue<ll>
#define pq_min          std::priority_queue<ll,vi,std::greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define bitc(n) 		__builtin_popcount(n)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...) 	{ std::string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); std::stringstream _ss(_s); std::istream_iterator<std::string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) std::cout<<(arr[z])<<" ";std::cout<<std::endl;	
template <typename T> T gcd(T a, T b){if(a%b) return gcd(b,a%b);return b;}
template <typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
vs tokenizer(std::string str,char ch) {std::istringstream var((str)); vs v; std::string t; while(std::getline((var), t, (ch))) {v.pb(t);} return v;}


void err(std::istream_iterator<std::string> it) {}
template<typename T, typename... Args>
void err(std::istream_iterator<std::string> it, T a, Args... args) {
    std::cout << *it << " = " << a << std::endl;
    err(++it, args...);
}
int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    // std::string s1 = "nm" + "io"; // this will throw an error
    std::string s1 = std::string("nm") + "io";
    s1 = s1 + " Is OP!!";
    s1 += " Everyone knows this !";
    const char s2[20] = "op"; // 8 bit character
    const char* s3 = u8"op"; // 8 bit -> UTF-8
    const char16_t* s4 = u"op"; // 16 bit -> UTF-16
    const char32_t* s5 = U"op"; // 32 bit -> UTF-32
    char16_t ch1 = 'a';
    char32_t ch2 = 'b';
    const wchar_t* wstr = L"Amit";//bytes depend on compiler
    std::wstring strw = L"op Singh";
    std::cout<<(char)s5[0]<<"\n";
    log(s1, s2, s3, s4);
    log(sizeof(s1), sizeof(s2), sizeof(s3), sizeof(s4), sizeof(ch1), sizeof(ch2));
    std::cout<<wstr<<"\n";
    std::wcout<<wstr<<"\n";
    // std::cout<<strw<<"\n";
    std::wcout<<strw<<"\n";
    using namespace std::string_literals;//now problem solved
    std::string s7 = "op"s + "Singh";
 std::string s1="dfjhb";
s1[0]='k';
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}