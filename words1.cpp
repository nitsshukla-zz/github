#include<iostream>
#include "Node.cpp"
using namespace std;

int main(){
string st[] = {"nitin","anil","abhi","naman","pooja","anil"};
Node* root = new Node(1);
for(int i=0;i<6;i++)
    putInTree(st[i],*root); //giving random line number

cout<<"anil's freq is: "<<search1("anil",*root).freq<<endl<<endl;
cout<<"Ascending lexico Order"<<endl;
printOrder(root);
}
