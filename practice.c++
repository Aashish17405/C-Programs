// #include <iostream>

// int main() {
//     std::cout<<"HELLO WORLD!!";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int fsum=0,a;
//     cout<<"Enter a number:";
//     cin>>a;
//     while(a>0){
//         int x=a;
//         int sum=1;
//         while(x>0){
//             sum=sum*x;
//             x=x-1;
//         }
//         a=a-1;
//         cout<<sum<<endl;
//         fsum=fsum+sum;
//     }
//     cout<<"Arithmetic Sum=";
//     cout<<fsum;
// }

/*#include<iostream>
using namespace std;
int prime(int x){
    int c=0;
    for (int i=1;i<x;i++){
        if (x%i==0){
            c=c+1;
        }
    }
    if(c==1){
        int s=0;
        int f=x;
        while(f>0){
            int b=f%10;
            s=s*10+b;
            f=f/10;
        }
        if(s==x){
            cout<<x<<endl;     
        }
    }
}
int main(){
    for(int x=1;x<1000;x++){
        prime(x);
    }
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    };
    //mathematical induction
    cout<<n<<endl;
    int k=sum(n-1);
    cout<<k<<endl;
    return n+k;
}
int main(){
    cout<<sum(5)<<endl;
    return 0;
}
*/

/*#include<iostream>
using namespace std;
int fib(int n){
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    int i=fib(n-1);
    int j=fib(n-2);
    return i+j;
}
int main(){
    cout<<fib(5)<<endl;
    return 0;
}*/

// #include<iostream>
// using namespace std;
// int printN(int n){
//     if(n==1)
//         return 1;
//     int i= printN(n-1);
//     cout<<i<<endl;
//     return i+1;
// }
// int main(){
//     cout<<printN(20)<<endl;
//     return 0;
// }                       


/*
#include<iostream>
using namespace std;
void printN(int n){
    if(n==20)
        return;
    cout<<n<<endl;
    printN(n+1);
    return;
}
int main(){
    printN(1);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int sort(int ar[],int n){
    if(n==1)
        return true;
    bool s=sort(ar+1,n-1);
    return ar[0] < ar[1] && s;
}
int main(){
    int a[]={1,10,3,4,5};
    if(sort(a,5))
        cout<<"true";
    else
        cout<<"False";
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int sort(int ar[],int n){
    if(n==1)
        return 0;
    bool s=sort(ar+1,n-1);
    return ar[n-1];
}
int main(){
    int a[]={12,13,14,16};
    cout<<sort(a,4)<<endl;;
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int firstOccurernce(int ar[],int n,int key,int i){
    if(i==n)
        return -1;
    if(key==ar[i])
        return i;
    firstOccurernce(ar,n,key,i+1);
    cout<<ar[i]<<endl;
}
int main(){
    int a[]={1,4,6,8};
    cout<<firstOccurernce(a,4,6,0);
    return 0;
}
*/

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<s.length()<<endl;
    
    /*
    string s1="hello";
    cout<<s1.length()<<endl;
    cout<<int(s1[0])<<endl;
    string a="";
    for(int i=0;i<s1.length();i++){
        int k=s1[i]-32;
        char b=char(k);
        a=a+b;
    }
    cout<<a<<endl;
*/

    // cout<<s.append(" is super")<<endl;
    // cout<<s.assign()<<endl;
    // cout<<s.at()<<endl;
    // cout<<s.clear()<<endl;
    // cout<<s.begin()<<endl;
    // cout<<s.compare()<<endl;
    // cout<<s.c_str()<<endl;
    // cout<<s.empty()<<endl;
    // cout<<s.end()<<endl;
    // cout<<s.erase()<<endl;
    // cout<<s.insert()<<endl;
    // cout<<s.find()<<endl;
    // cout<<s.resize()<<endl;
    // cout<<s.length()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s1.substr()<<endl;
    // cout<<s.stoi()<<endl;
//}

// #include<iostream>
// using namespace std;
// void reverse(string s){
//     if(s=="")
//         return;
//     reverse(s.substr(1));
//     cout<<s[0];
// }
// int main(){
//     string s;
//     getline(cin,s);
//     reverse(s);
//     return 0;
// }













// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     Node* next;
//     int data;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class linkedlist{
//     public:
//     Node* head;
//     linkedlist(){
//         this->head=NULL;
//     }
//     void insert(int element){
//         Node* n=new Node(element);
//         if(head==NULL){
//             head=n;
//         }else{
//             Node* temp=head;
//             while(temp->next!=NULL){
//                 temp=temp->next;
//             }
//             temp->next=n;
//         }
//     }
//     void print(){
//         cout<<"Linked list elements are: ";
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }cout<<endl;
//     }
//     void insertbegin(int element){
//         Node* n=new Node(element);
//         if(head==NULL){
//             head=n;
//         }else{
//             n->next=head;
//             head=n;
//         }
//     }
//     void pos(int x,int element){
//         Node* temp=head;
//         for(int i=1;i<x;i++){
//             temp=temp->next;
//         }
//         Node* n=new Node(element);
//         n->next=temp->next;
//         temp->next=n;
//     }
//     void deleteNode(int x){
//         Node* temp=head;
//         if(head->data==x){
//             head=temp->next;
//         }
        
//         while(temp!=NULL && temp->next!=NULL){
//             if(temp->next->data==x){
//                 Node* tmep=temp->next;
//                 temp->next=tmep->next;
//                 delete tmep;
//                 return;
//             }
//             temp=temp->next;
//         }
//         cout<<"CAnt delete the element"<<endl;
//     }
// };
// int main(){
//     linkedlist l;
//     l.insert(10);
//     l.insert(20);
//     l.insert(30);
//     l.insertbegin(0);
//     l.pos(2,50);
//     l.deleteNode(20);
//     l.print();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int dara){
//         this->data=dara;
//         this->prev=NULL;
//         this->next=NULL;
//     }
// };
// class dlinkedlist{
//     public:
//     Node* head=NULL;
//     Node* tail=NULL;
//     void insert(int element){
//         if(head==NULL){
//             head=tail=new Node(element);
//             return;
//         }
//         Node* n=new Node(element);
//         tail->next=n;
//         n->prev=tail;
//         tail=n;
//     }
//     void printf(){
//         cout<<"Forward linked list: ";
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }cout<<endl;
//     }
//     void insertb(int element){
//         if(head==NULL){
//             head=tail=new Node(element);
//             return;
//         }
//         Node* n=new Node(element);
//         head->prev = n;
//         n->next=head;
//         head=n;
//     }
//     void searchin(int x,int element){
//         Node* temp=head;
//         while(temp!=NULL){
//             if(temp->data==x){
//                 Node* n=new Node(element);
//                 n->next=temp->next;
//                 temp->next=n;
//                 return;
//             }
//             temp=temp->next;
//         }
//         cout<<"Element not found in the linked list."<<endl;
//     }
//     void del(int x){
//         if(head->data==x){
//             Node* temp=head;
//             temp->next->prev=NULL;
//             head=temp->next;
//             return;
//         }
//         else if(tail->data==x){
//             Node* temp=tail;
//             temp->prev->next=NULL;
//             tail=temp->prev;
//             return;
//         }else{
//             Node* temp=head;
//             while (temp!=NULL)
//             {
//                 if(temp->next->data==x){
//                     Node* del=temp->next;
//                     temp->next=del->next;
//                     del->next->prev=temp;
//                     return;
//                 }
//                 temp=temp->next;
//             }
//         }
//     }
// };
// int main(){
//     dlinkedlist l;
//     l.insert(10);
//     l.insert(20);
//     l.searchin(10,90);
//     l.insert(30);
//     l.insertb(0);
//     l.del(30);
//     l.printf();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int sa){
//         this->next=NULL;
//         this->data=sa;
//     }
// };
// class circular{
//     public:
//     Node* head=NULL;
//     void insert(int value) {
//         Node* newNode = new Node(value);
//         if (head == nullptr) {
//             head = newNode;
//             head->next = head;  // Point to itself to make it circular
//         } else {
//             Node* temp = head;
//             while (temp->next != head) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//             newNode->next = head;
//         }
//     }
//     void printf() {
//         if (head == nullptr) {
//             cout << "Circular Linked List is empty." << endl;
//             return;
//         }
//         Node* temp = head;
//         do {
//             cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != head);
//         cout << endl;
//     }
// };
// int main(){
//     circular c;
//     c.insert(10);
//     c.insert(20);
//     c.insert(30);
//     c.insert(40);
//     c.printf();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class queue{
//     public:
//     int front,rear;
//     int* a;
//     int size;
//     queue(int size){
//         this->front=-1;
//         this->rear=-1;
//         this->a=new int[size];
//         this->size=size;
//     }
//     void enqueue(int c){
//         if(rear==size-1){
//             cout<<"ELements cant be added"<<endl;
//             return;
//         }
//         if(front==-1 && rear==-1){
//             rear++;
//             a[rear]=c;
//             front++;
//             return;
//         }
//         else{
//             rear++;
//             a[rear]=c;
//             return;
//         }
//     }
//     void dequeue(){
//         if(front==-1){
//             cout<<"Cant remove any item"<<endl;
//             return;
//         }
//         a[front]=0;
//         front++;
//         if(front>rear){
//             front=-1;
//             rear=-1;
//         }
//     }
//     void display(){
//         if(front==-1){
//             cout<<"No elements to show!"<<endl;
//             return;
//         }
//         for(int i=0;i<rear+1;i++){
//             cout<<a[i]<<" ";
//         }cout<<endl;
//     }
// };
// int main(){
//     queue s(5);
//     s.enqueue(1);
//     s.dequeue();
//     s.enqueue(2);
//     s.enqueue(3);
//     s.enqueue(2);
//     s.enqueue(3);
//     s.enqueue(2);
//     s.enqueue(3);
//     s.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class queue{
    public:
    // Node* front=NULL;
    // Node* rear=NULL;
    // void enqueue(int a){
    //     if(front==NULL){
    //         Node* n=new Node(a);
    //         front=rear=n;
    //         return;
    //     }
    //     Node* n=new Node(a);
    //     rear->next=n;
    //     rear=n;
    // }
    // void dequeue(){
    //     front=front->next;
    //     if(front==NULL){
    //         rear=NULL;
    //     }
    // }
    // void display(){
    //     Node* temp=front;
    //     while(temp!=NULL){
    //         cout<<temp->data<<" ";
    //         temp=temp->next;
    //     }
    // }
    int a[5];
    int rear;
    int front;
    int itemCount;
    queue(){
        this->rear=-1;
        this->front=-1;
        this->itemCount=0;
        for(int i=0;i<5;i++){
            a[i]=0;
        }
    }
    void enqueue(int c){
        if(itemCount==5){
            cout<<"Sorry!"<<endl;
            return;
        }
        if(front==-1 && rear==-1){
            front++;
            rear++;
            a[rear]=c;
        }else{
            rear=(rear+1)%5;
            a[rear]=c;
        }
    }
    void dequeue(){
        if(front==rear){
            a[front]=0;
            front=-1;
            rear=-1;
            return;
        }
        a[front]=0;
        front=(front+1)%5;        
    }
    void display(){
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
    }
};
int main(){
    queue s;
    s.enqueue(1);
    s.dequeue();
    s.enqueue(2);
    s.enqueue(3);
    s.enqueue(4);
    s.dequeue();
    s.display();
    return 0;
}