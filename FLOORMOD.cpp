#include<iostream>
#include<map>
using namespace std;

map<unsigned long long int,unsigned long long int> map1;
unsigned long long int pow(unsigned long long int a,unsigned long long int b){
if(b==1) return a;
if(map1.find(a)->second!=0) return map1.find(a)->second;
  if(b==4){
        unsigned long long int b1= a*pow(a,b-1);map1[a]=b1; return b1;} return a*pow(a,b-1);
}
int main(){
int T;cin>>T;
for(int i1=0;i1<T;i1++){
    unsigned long long int N,M,ans=0;cin>>N>>M;
    for(int i=1;i<=N;i++)
      ans +=(pow(i%M,4)*((N/i)%M))%M;ans=ans%M;
    map1.clear();
    cout<<ans<<endl;
} //map1[12]=90;cout<<map1.find(12)->first<<endl;
}
