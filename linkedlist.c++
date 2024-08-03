// Singly Linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class linkedList{
//     private:
//     Node* head;
//     public:
//     linkedList(){
//         this->head=NULL;
//     }
//     ~linkedList() {
//         Node* current=head;
//         while(current!=NULL){
//             Node* next=current->next;
//             delete current;
//             current = next;
//         }
//         head = NULL;
//     }
//     void insert(int element){
//         Node* n=new Node(element);
//         if(head==NULL)
//             head=n;
//         else{
//             Node* temp=head;
//             while(!(temp->next==NULL)){
//                 temp=temp->next;
//             }
//             temp->next=n;
//         }
//     }
//     void printNodes(){
//         Node* temp=head;
//         while(!(temp==NULL)){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }cout<<endl;
//     }
//     void del(string a){
//         if(a=="start")
//             head=head->next;
//         else{
//             Node* temp=head;
//             while (temp->next->next!=NULL)
//             {
//                 temp=temp->next;
//             }
//             temp->next=NULL;
//         }
//     }
//     void search(int data) {
//     Node* current = head;
//     bool found = false;
//     while (current != nullptr) {
//         if (current->data == data) {
//             found = true;
//             break;  // Exit the loop once the element is found
//         }
//         current = current->next;
//     }
//     if (found) {
//         cout << "Element " << data << " found." << endl;
//     } else {
//         cout << "Element " << data << " not found." <<endl;
//     }
//     }
//     void insertAfterData(int data,int element){
//         Node* current=head;
//         while(current!=NULL){
//             if(current->data==data){
//                 Node* n=new Node(element);
//                 n->next=current->next;
//                 current->next=n;
//                 break;
//             }
//             current=current->next;
//         }
//     }
//     void del(int element){
//         Node* temp=head;
//         if (temp == NULL) {
//             return;
//         }
//         if (temp->data == element) {
//             Node* delNode = temp;
//             head = temp->next;
//             delete delNode;
//             return;
//         }
//         while(temp!=NULL){
//             if(temp->next->data==element){
//                 Node* delNode=temp->next;
//                 temp->next=temp->next->next;
//                 delete delNode;
//                 return;
//             }
//             temp=temp->next;
//         }
//     }
// };
// int main(){
//     linkedList l;
//     l.insert(10);
//     l.insert(20);
//     l.insert(30);
//     l.printNodes();
//     l.del("start");
//     l.printNodes();
//     l.search(30);
//     l.del(30);
//     l.printNodes();
//     l.insertAfterData(20,50);
//     l.printNodes();
//     return 0;
// }



//Doubly Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DlinkedList{
    public:
    int size;
    Node* head;
    Node* last;
    DlinkedList(){
        this->size=0;
        this->head=NULL;
        this->last=NULL;
    }
    ~DlinkedList() {
        Node* temp=head;
        while (temp!=NULL)
        {
            Node* current=temp->next;
            delete temp;
            temp=current;
        }
        head = last = NULL;
        size = 0;
    }
    void insert(int element){
        Node* n=new Node(element);
        if(head==NULL){
            head=last=n;
            size++;
        }
        else{
            last->next=n;
            n->prev=last;
            last=n;
            size++;
        }
    }
    void forward(){
        cout<<"Forward linked list: ";
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
    void reverse(){
        cout<<"Reversed linked list:";
        Node* temp=last;
        while(last!=NULL){
            cout<<last->data<<" ";
            last=last->prev;
        }cout<<endl;
    }
    int siz(){
        cout<<"Size of the linked list is "<<size<<endl;
        return size;
    }
    void insertAfterData(int data,int element){
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==data){
                Node* n=new Node(element);
                n->next=temp->next;
                n->prev=temp;
                if(temp->next!=NULL){
                    temp->next->prev=n;
                }
                temp->next=n;
                if(n->next==NULL){
                    last=n;
                }
                size++;
                break;
            }
            temp=temp->next;
        }
    }
    void remove(string a) {
        if (a == "start") {
            if (head != NULL) {
                Node* temp = head;
                if (temp->next != NULL) {
                    temp->next->prev = NULL;
                }
                head = temp->next;
                delete temp;
                if (head == NULL) {
                    last = NULL;  // If the list is now empty, update the last pointer
                }
            }
        } if(a=="end") {
            if (last != NULL) {
                Node* temp = last;
                if (temp->prev != NULL) {
                    temp->prev->next = NULL;
                }
                last = temp->prev;
                delete temp;
                if (last == NULL) {
                    head = NULL;
                }
            }
        }
    }
    void del(int element){
        Node* temp=head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->next->data == element) {
                Node* target = temp->next;
                temp->next = target->next;
                if (target->next == NULL) {
                    last = temp;
                }
                delete target;
                return;
            }
            temp = temp->next;
        }
    }
};  
int main(){
    DlinkedList l;
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.forward();
    l.reverse();
    l.siz();
    l.insertAfterData(20,40);
    // l.remove("end");
    l.del(20);
    l.forward();
    return 0;
}