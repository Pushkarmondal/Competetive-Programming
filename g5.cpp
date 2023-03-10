#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <numeric>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <cmath>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <math.h>
#include <ctype.h>
#include <fstream>
 
using namespace std;
 
 
 
// MACROS::>>>>>>>>>>>>* 
 
//#define debug(x) cout << #x << " " << x <<endl;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define pb1 pop_back;
#define vi vector<int>
#define vintt vector<intt>
#define vpi vector<pair<int,int>>
#define vpl vector<pair<intt,intt>>
#define getl(s) getline(cin,s)
#define fi first
#define se second
#define PI 3.141592653589793238462
#define bp __builtin_popcount
#define sz(x) (x.size())
#define fr(i,a,b)       for(ll i=a;i<b;i++)
#define all(x)  (a).begin(),(a).end()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define fast ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
//#define ld long double
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds; 
//  #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(x)
// #endif
#ifdef nishit
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 // ***********************************************************************************************************************************************************************************************************
//  vector<bool> SieveOfEratosthenes(ll num) {vector<bool>pno;pno.assign(num+1, true);pno[0]=false;pno[1]=false;for (ll i=2;i*i<=num;i++){if(pno[i]==true){for(ll j=i*2;j<=num;j+=i)pno[j]=false;}}return pno;}
 
// vector<ll> SieveOfEratosthenesExtended(ll num) {vector<ll>pno(num+1);fr(i,0,num+1){pno[i]=i;}for(ll i=2;i*i<=num;i++){if(pno[i]==i){for(ll j=i*2;j<=num;j+=i)if(pno[j]==j)pno[j]=i;}}return pno;}
 
// vector<ll> PrimeFactorize(ll num){vector<ll>spf;spf=SieveOfEratosthenesExtended(num);set<ll>pf;while(num!=1){
//         pf.insert(spf[num]);num=num/spf[num];}vector<ll>v;for(auto it:pf){v.pb(it);}return v;}
 
 ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
 // ***********************************************************************************************************************************************************************************************************
/*PUSHKAR MONDAL
VELLORE INSTITUTE OF TECHNOLOGY*/
 
 // BINARY SEARCH>>
 // int n;
 //    cin>>n;
 //    int s=1;
 //    int e=n;
 //    while(s<=e){
 //        int mid=(s+e)/2;
 //        cout<<mid<<endl;
 //        if(mid*mid<n){
 //            s=mid+1;
 //        }else if(mid*mid>n){
 //            e=mid-1;
 //        }else{
 //            cout<<mid<<endl;
 //            return 0;
 //        }
 //    }
 
 
/*const int N=1e7+10;
vector<ll> isprime(N,1);
 
 int main(){
    int t;
    cin>>t;
    while(t--){
        isprime[0]=isprime[1]=false;
        for (int i = 2; i < N; ++i)
        {
            if(isprime[i]==true){
                for (int j = 2*i; j <N ; j+=i)
                {
                    isprime[j]=false;
                }
            }
        }
      for(int i=1;i<100;i++){
        cout<<isprime[i]<<endl;
      }
    }
 }*/
/*********
int min=*min_element(all(a));
    int max=*max_element(all(a));
    cout<<min<<" "<<max<<endl;
    int sum=accumulate(a.begin(),a.end(),0);
    cout<<sum<<endl;
    int cnt=count(a.begin(),a.end(),2);
    cout<<cnt<<endl;
    int fnd=*find(a.begin(),a.end(),2);
    cout<<fnd<<endl;
    string c=a.substr(3,4);
    reverse(a.begin(),a.end());
    for(auto value:a){
        cout<<value<<" ";
 
 
        int t;
    cin>>t;
     while(t--){
        ll n;
        cin>>n;
        if(n%2){
            cout<<"7"<<endl;
        }
     }
***********/
 
 
 
//int main(){
//     queue<double> q;
//     q.push(3.9);
//     q.push(5.11111);
//     q.push(9.3);
//    // q.pop();
//     while(!q.empty()){
//     cout<<q.front()<<endl;
//     q.pop();
// }
//     int n;
//     cin>>n;
//     vector<int> is_prime;
//     for(int i=2;i*i<=n;i++){
//         while(n%i==0){
//             //cout<<i<<" ";
//             is_prime.pb(i);
//              n/=i;
//         }
//     }
//     if(n>1){
//         is_prime.pb(n);
 
//     }
//     for(int prime: is_prime){
//         cout<<prime<<endl;
//     }
 
    
// }
               
// /*int main(){
//     int t;
//         cin>>t;
//         while(t--){
//             solve();
//         }
// }
 
 
// */
// void printBinary(int n){
//     for (int i = 10; i>=0; i--)
//     {
//         cout<<((n>>i)&1);
//     }
//     cout<<endl;
// }
// void bin(unsigned n){
//    //cin>>n;
//    if(n>1)
//     bin(n/2);
//     cout<<n%2;
//     }
//  int main(){
//     // for (int i = 0; i <8; ++i)
//     // {
//     //     printBinary(i);
//     //     if(i&1){
//     //         cout<<"ODD"<<endl;
//     //     }else{
//     //         cout<<"EVEN"<<endl;
//     //     }
//     // }
//     //UPPERCASE TO LOWERCASE
//     // char B='B';
//     // char b=B | ' ';
//     // cout<<b<<endl;
//     // //LOWERCASE TO UPPERCASE
//     // char d='d';
//     // char D=(d & '_');
//     // cout<<D<<endl;
//     int n;
//     cin>>n;
//     bin(n);
   
   
//    }
 
// BINPOW>>>EASY>>>@@@@@@@@@@@@@@@@@@@@@@@@@@@
// const int m=1e9+7;
//   int binp(int a,int b){
//     if(b==0) return 1;
//     ll res=binp(a,b/2);
//     if(b&1){
//         return (a*((res*1ll*res)%m))%m;
//     }else{
//         return (res*1ll*res)%m;
//     }
//   }
 
 
// int main(){
//     int n,m;
//     cin>>n>>m;
//      vector<int> a(n);
//     for (int i = 0; i <n; ++i)
//     {
        
//         for(int j=i+1;j<n;j++){
//             if(a[i]+a[j]==m){
 
                
//    int arr[]={-2,-1,0,3,6,8,11,12};
    /*int x;
    cin>>x;
    int n=8;
    int i=0;
    int j=1;
    bool found=false;
    while(i<j){
        if(arr[i]+arr[j]==x){
            found=true;
            break;
 
        }else if(arr[i]+arr[j]<x){
            i++;
        }else{
            j--;
 
        }
 
    }
    if(found==true){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }*/
 
//REMOVE ZERO CODE>>************ 
// int remove(int n){
//     //int n;
//     //cin>>n;
//     if(n<10) return n;
//     else if(n%10==0) return remove(n/10);
//     else return remove(n/10)*10+n%10;
    
// }
// int gcd(int a,int b){
//     if(b==0)return a;
//     else return gcd(b,a%b);
// }
// int lcm(int a,int b){
//     return a*b/gcd(a,b);
 
// BINPOW>>>*****************
// int pw(int a,int b,int m){
//     if(b==0){
//         return a%m;
//     }
//     if(b%2==0){
//         int t=pw(a,b/2 ,m);
//         return(1ll*t*t%m);
//     }else{
//         int t=pw(a,(b-1)/2,m);
//         t=(1ll* t*t)%m;
//         return(1ll*a*t%m);
//     }
// }
// int n=0;
// void f(){
    
//     if(n==3){
//         return;
//     }
//     cout<<n<<endl;
//     n++;
//     f();


// }
// SUBSET PROBLEM USING RECURSION

// void func(int ind,vector<int>&ds,int arr[],int n){
//     if(ind==n){
//         for(auto it :ds){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     ds.push_back(arr[ind]);
//     func(ind+1,ds,arr,n);
//     ds.pop_back();
//     func(ind+1,ds,arr,n);

//
// 2D RECURSION RAT IN A MAZE STARTING***********
// int n,m;
// void findpath(int i,int j,string s){
//     // BASE CASE FOR BOUNDARY.
//     if(i>=n || i>=m)
//         return;

// // IF WE FIND ANSWER WE CAN RETURN ONE OF ANSWER.
//     if(i==n-1 && j==m-1){
//         cout<<s<<endl;
//         return;
//     }
//     //MOVING DOWNSIDE.
//     s+='D';
//     findpath(i+1,j,s);
//     s.pop_back();

//     //MOVING RIGHTSIDE.
//     s+='R';
//     findpath(i,j+1,s);
//     s.pop_back();

// } 
// int main(){
//     cin>>n>>m;
//     findpath(0,0,"");
// }


// const int m=1e9+7;

/* COUNT ALL NUMBER FROM 1 T0 N.
       
       ll n;
    cin>>n;
    ll ans=0;
    for (ll i =1; i <=n; i*=10)
    {
        ans+=(n-i+1);
    }
*/



(Q) CHARACTER HASHING >>>>>>>>>>> USING ASCII VALUE

int main(){
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;

    }

} 


(Q)COUNT NO OF OCCURANCE IN AN ARRAY >>>>>>

nt main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; ++i)
    {
        cin>>a[i];
    }
    map<ll,int> map;
    for (int i = 0; i <n; ++i)
    {
        map[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int ans;
        cin>>ans;
        cout<<map[ans]<<endl;
    }

} 
  
