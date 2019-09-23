#include <iostream>
//#include<bits/stdc++.h>
#define ll unsigned int
#define MAX 100000000+5
#define pb push_back
using namespace std; // consider removing this line in serious projects
ll prime[MAX/32];
ll prime_number[10000000];
bool check_bit(ll n, ll pos){
    if(n & (1<<pos)) return false;
    else return true;
}
ll set_bit(ll n, ll pos){
    return n|(1<<pos);
}
void sieve(){
    ll i,j,k=0;
    //memset(prime,0,MAX);
    for(i=2;i<MAX;i++){
        if(check_bit(prime[i>>5],i&31)){
            prime_number[k++]=i;
            for(j=i*i;j<MAX;j+=2*i) prime[j>>5]= set_bit(j>>5,j&31) ;
        }
    }
    cout<<k<<endl;
}
/*
 bool is_prime(ll n){
 if(n<MAX) return prime[n];
 ll sq=ceil(sqrt(n));
 for(ll i=0;prime_number[i]<=sq;i++) {
 if(n%prime_number[i]==0) return false;
 }
 return true;
 }
 
 ll lcm_n(ll n){
 ll lcm=1;
 //cout<<is_prime(2)<<endl;
 if(is_prime(n)) lcm=n;
 ll i,j,k;
 //ll sq=sqrt(n);
 for(i=0;prime_number[i]<n;i++){
 k=prime_number[i];
 while(k<=n) k*=prime_number[i];
 k/=prime_number[i];
 lcm*=k;
 }
 return lcm;
 }
 */
int main() {
    
    sieve();
    //ll i = 31;
    //    cout<<check_bit(i,3)<<endl;
    /*
     ll n;
     ll test;
     cin>>test;
     ll i;
     for(i=1;i<=test;i++){
     cin>>n;
     //printf("Case %u: %u\n",i,lcm_n(n));
     }
     */
    return 0;
}
