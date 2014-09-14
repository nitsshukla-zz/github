#include<iostream>
using namespace std;

bool next_combination(unsigned long& x) {
  unsigned long u = x & -x;
  unsigned long v = u + x;
  if (v==0)
    return false;
  x = v +(((v^x)/u)>>2);
  return true;
}
class B{
public: int a;
};

int main(){
unsigned long a=(1);

for(int i=1;i<24;i++){

cout<<"seed"<<" "<<a<<endl;
unsigned long x1=a;
while(!next_combination(x1) && x1<(1<<24))
        cout<<x1<<endl;
a+=(1<<i);
}
B b;
b.a=0;
}

