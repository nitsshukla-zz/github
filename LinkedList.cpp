#include "Node.cpp"
template <class T>
class LinkedList
{
    public:
        LinkedList(){
            head->val=-(1<<31);
            last=head;
            size=0;
        }
        T getFirst(){
            return head->val;
        }
        void add(T a){
        last->val=a;
        last->next=new Node<T>;
        last=last->next;
        size++;
        }
        void deleteByIndex(int a){
            Node<T>* temp;
            if(a>=size)
                throw new exception;
                Node<T>* prev=head;
        while(a!=0){
            a--;
            prev=temp;
            temp = temp->next;
        }
        prev->next=temp->next;
        }
        void deleteByVal(T a);
    protected:
    private:
        Node<T>* head, last;
        int size;
};
