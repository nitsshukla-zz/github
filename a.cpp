
#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main() {
LinkedList<int>* ll = new LinkedList<int>();
ll->add(12);
cout<<(ll->getFirst());
//ll->add(14);
//ll->add(23);ll->add(33);ll->add(103);ll->add(123);ll->add(131);

return 0;
//ll.getFirst()->next=new Node<int>;
//ll.getFirst()->next->val=12;
//ll.deleteByIndex(1);

/*    Node<int>* head;
    int in;cin>>in;
    Node<int>* temp = head;
    while(in!=0){

        temp->val=in;
        cin>>in;
        if(in==0)
            temp->next=NULL;
        else temp->next = new Node<int>;
        temp=temp->next;
    }
    cout<<"Search index for:  ";
    cin>>in;temp=head;
    while(temp!=NULL){
        if(temp->val==in)
            break;
        //cout<<temp->val<<endl;
        temp=temp->next;
    }
    cout<<temp->val;*/
   return 0;
}
