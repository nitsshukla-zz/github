#include<iostream>
using namespace std;

int main(){
int T;
cin>>T;
for(int i1=0;i1<T;i1++){
    string s;
    cin>>s;
    long long unsigned int ans=1;
    for(int i=0;i<s.size();i++){
        ans = ans<<1;
        //cout<<ans<<endl;
        if(s[i]=='r')
            ans+=2;
        if(i%2==1)
            ans-=1;
    ans = ans % 1000000007;
    }
    cout<<ans<<endl;
}
}
