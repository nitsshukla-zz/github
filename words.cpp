#include<iostream>
#include <algorithm>
using namespace std;

class node{
public:
node *  left;
node * right;
string name;
}root;

put(string s, node* node){
    if(node==NULL)
        return;
    if((node->name)>s)

}

void put(string s){
if(root.left==NULL && s<root.name)
{
    node node1;node1.name=s;node1.left=NULL;node1.right=NULL;root.left=&node1;
}
else if(root.right==NULL && s>root.name){
    node node1;node1.name=s;node1.left=NULL;node1.right=NULL;root.right=&node1;
}
else if(s>root.name)
    put(s,root.right);
else if(s<root.name)
    put(s,root.left);
}

int main(){
string st[] = {"nitin","anil","abhi","naman","pooja"} ;

root.name=st[0];
root.left=NULL;
root.right=NULL;
    for(int i=1;i<5;i++){
        put(st[i]);
    }
    cout<<(root.right->name);
}
