// Queue using array:
// #include<iostream>
// using namespace std;
// class Queue {
// private:
//     int front;
//     int rear;
//     int capacity;
//     int* arr;
// public:
//     Queue(int capacity) {
//         this->front=0;
//         this->rear=0;
//         this->capacity=capacity;
//         this->arr=new int[capacity];
//     }
//     ~Queue() {
//         delete[] arr;
//     }
//     bool isFull() {
//         return rear==capacity;
//     }
//     bool isEmpty() {
//         return rear==front;
//     }
//     void enqueue(int element) {
//         if (isFull()) {
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         else {
//             arr[rear]=element;
//             rear++;
//         }
//     }
//     void dequeue() {
//         if (isEmpty()) {
//             cout<<"Queue is empty."<<endl;
//         }
//         else {
//             arr[front]=-1;
//             front++;
//             if (front==rear) {
//                 front=0;
//                 rear=0;
//             }
//         }
//     }
//     void show() {
//         cout<<"Elements of the queue are: ";
//         for (int i=front; i<rear; i++) {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main() {
//     Queue q1(2);
//     q1.enqueue(5);
//     q1.enqueue(10);
//     q1.dequeue();
//     q1.show();
//     return 0;
// }


// Queue  using linked list
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
class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){
        this->front=NULL;
        this->rear=NULL;
    }
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
    }
    bool isEmpty(){
        return front==NULL;
    }
    void enqueue(int element) {
        Node* newNode = new Node(element);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    void show(){
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp=front;
        cout<<"Elements of the queue are: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty."<<endl;
            return;
        }
        Node* temp = front;
        front=temp->next;
        delete temp;
        if(front==NULL){
            rear=NULL;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.show();
    return 0;
}



//Queue using stack
// #include<iostream>
// using namespace std;
// class NODE {
// public:
//     int data;
//     NODE* next; 

//     NODE(int data) {
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class Stack {
// private:
//     NODE* head;
//     int stackSize;
// public:
//     Stack() {
//         head=NULL;
//     }

//     bool isEmpty() {
//         return head==NULL;
//     }

//     void push(int data) {
//         NODE* newNODE=new NODE(data);
//         newNODE->next=head;
//         head=newNODE;
//         stackSize++;
//     }

//     int pop() {
//         if(isEmpty()) {
//             return -1;
//         }
//         int poppedItem=head->data;
//         NODE* temp=head;
//         head=head->next;
//         delete temp;
//         stackSize--;
//         return poppedItem;
//     }
// };
// // Enqueue is expensive
// // 1.Empty the stack s1 and push each element of stack s1 to stack s2
// // 2.Push the data into the stack s1.
// // 3.Empty the stack s2 and push each element of stack s2 to stack s1.
// class Queue{
//     public:
//     Stack s1,s2;
//     void enqueue(int data){
//         while(!s1.isEmpty()){
//             s2.push(s1.pop());
//         }
//         s1.push(data);
//         while(!s2.isEmpty()){
//             s1.push(s2.pop());
//         }
//         cout<<data<<" added to the queue"<<endl;
//     }
//     int dequeue(){
//         cout<<s1.pop()<<" removed from queue"<<endl;
//         return s1.pop();
//     }
// };


// // Dequeue is expensive
// // 1.Check whether stack s1 and stack s2 are empty.If both are empty, then return -1
// // 2.Empty the stack s1 and push each element of stack s1 to stack s2
// // 3.Pop the elements from stack s2.
// class Queue{
//     public:
//     Stack s1,s2;
//     void enqueue(int data){
//         s1.push(data);
//         cout<<data<<" added to the queue"<<endl;
//     }
//     int dequeue(){
//         int poppedItem;
//         if(s1.isEmpty() && s2.isEmpty()){
//             cout<<"Queue is empty!Dequeue can't be performed"<<endl;
//             return -1;
//         }
//         while(!s1.isEmpty()){
//             s2.push(s1.pop());
//         }
//         poppedItem=s2.pop();
//         cout<<poppedItem<<" removed form queue"<<endl;
//         return poppedItem;
//     }
// };

// int main(){
//     Queue q1;
//     q1.enqueue(15);
//     q1.enqueue(25);
//     q1.enqueue(30);
//     q1.dequeue();
//     q1.dequeue();
//     return 0;
// } 