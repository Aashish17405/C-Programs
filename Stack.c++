#include <iostream>
#include <math.h>
// #include <string>
using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int data) {
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class Stack {
// private:
//     Node* head;
//     int stackSize;
// public:
//     Stack() {
//         head=NULL;
//     }
//     bool isEmpty() {
//         return head==NULL;
//     }
//     void push(int data) {
//         Node* newNode=new Node(data);
//         newNode->next=head;
//         head=newNode;
//         cout<<"Pushed "<<data<<" onto the stack."<< endl;
//         stackSize++;
//     }
//     int pop() {
//         if(isEmpty()) {
//             cout<<"Stack is empty. Cannot pop."<<endl;
//             return -1;
//         }
//         int poppedItem=head->data;
//         head=head->next;
//         cout<<"Popped "<<poppedItem<<" from the stack."<<endl;
//         stackSize--;
//         return poppedItem;
//     }
//     int peek() {
//         if (isEmpty()) {
//             cout<<"Stack is empty. Nothing to peek."<<endl;
//             return -1;
//         }
//         return head->data;
//     }
//     void print(){
//         if(isEmpty()){
//             cout<<"Stack is empty."<<endl;
//         }
//         cout<<"Elements of stack are ";
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void size(){
//         cout<<"The size of the stack is "<<stackSize<<endl;
//     }
// };
#include<stack>
#include<string>
bool isPalindrome(string s){
    stack<char> ps;
    int length=s.size();
    for(int i=0;i<length;i++){
        ps.push(s[i]);
    }
    string a="";
    for(int i=0;i<length;i++){
        a+=ps.top();
        ps.pop();
    }
    if(s==a){
        cout<<"The given string is a palindrome."<<endl;
        return true;
    }
    else{
        cout<<"The given string is not a palindrome."<<endl;
        return false;
    }
}
bool BalancedBraces(string s){
    stack<char> ps;
    for(int i=0;i<s.length();i++){
        if(ps.empty())
            ps.push(s[i]);
        else if((ps.top()=='{' && s[i]=='}') || (ps.top()=='(' && s[i]==')') || (ps.top()=='[' && s[i]==']')){
            ps.pop();
        }
        else{
            ps.push(s[i]);
        }
    }
    if(ps.empty()){
        cout<<"The given string is a balancedbrace."<<endl;
        return true;
    }
    else{
        cout<<"The given string is not a balancedbrace."<<endl;
        return false;
    }
}
int main(){
    BalancedBraces("{}[]()");
    return 0;
}
// int main(){
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.print();
//     s.pop();
//     s.print();
//     return 0;
// }

// int PrefixEvaluator(string exp) {
//     Stack s;
//     for (int i=exp.length()-1;i>0;i--) {
//         if (exp[i] >= '0' && exp[i] <= '9') {
//             s.push(exp[i] - '0');
//         }
//         else {
//             int op1=s.pop();
//             int op2=s.pop();
//             int ans=0;
//             switch (exp[i]) {
//                 case '*':
//                     ans=op1*op2;
//                     s.push(ans);
//                     break;
//                 case '/':
//                     ans=op1/op2;
//                     s.push(ans);
//                     break;
//                 case '+':
//                     ans=op1+op2;
//                     s.push(ans);
//                     break;
//                 case '-':
//                     ans = op1 - op2;
//                     s.push(ans);
//                     break;
//                 case '^':
//                     ans = pow(op1,op2);
//                     s.push(ans);
//                     break;
//             }
//         }
//     }
//     return s.peek();
// }

// // int PostfixEvaluator(string exp) {
// //     Stack s;
// //     for (int i=0;i<exp.length();i++) {
// //         if (exp[i]>='0' && exp[i]<='9') {
// //             s.push(exp[i] - '0');
// //         }
// //         else {
// //             int op1=s.pop();
// //             int op2=s.pop();
// //             int ans=0;
// //             switch(exp[i]) {
// //                 case '*':
// //                     ans=op1*op2;
// //                     s.push(ans);
// //                     break;
// //                 case '/':
// //                     ans=op1/op2;
// //                     s.push(ans);
// //                     break;
// //                 case '+':
// //                     ans=op1+op2;
// //                     s.push(ans);
// //                     break;
// //                 case '-':
// //                     ans=op1-op2;
// //                     s.push(ans);
// //                     break;
// //                 case '^':
// //                     ans=pow(op1,op2);
// //                     s.push(ans);
// //                     break;
// //             }
// //         }
// //     }
// //     return s.peek();
// // }
// int precendence(char op){
//     if(op=='+'|| op=='-'){
//         return 1;
//     }
//     if(op=='*'|| op=='/'){
//         return 2;
//     }
//     if(op=='^'){
//         return 3;
//     }
//     return 0;
// }
// int infix_Postfix(string exp){
//     Stack s;
//     string ans="";
//     for (int i=0;i<exp.length();i++){
//         if((exp[i]>='0' && exp[i]<='9') ){
//             ans+=exp[i];
//         }
//         else{
//             while((!s.isEmpty()) && (precendence(exp[i]))<=precendence(s.peek())){
//                 s.pop();
//             }
//             s.push(char(exp[i]));
//         }
//     }
//     while (!s.isEmpty())
//     {
//         ans+=char(s.pop());
//     }
    
//     cout<<"The postfix conversion is "<<ans;
//     return 0;
// }

// int main() {
//     // cout<<"Answer uisng PrefixEvaluator: "<<PrefixEvaluator("+4-53")<<endl;
//     // cout<<"Answer using PostfixEvaluator: "<<PostfixEvaluator("45-3+")<<endl;
//     int b=infix_Postfix("(9*7)/8-2+3");
//     return 0;
// }


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
// class stack{
//     public:
//     Node* head;
//     int stackSize;
//     stack(){
//         this->head=NULL;
//         this->stackSize=0;
//     }
//     bool isEmpty(){
//         return head==NULL;
//     }
//     void push(int element){
//         if(isEmpty()){
//             Node* n=new Node(element);
//             head=n;
//             stackSize++;
//             cout<<element<<" pushed into the stack"<<endl;
//         }
//         else{
//             Node* n=new Node(element);
//             n->next=head;
//             head=n;
//             stackSize++;
//             cout<<element<<" pushed into the stack"<<endl;
//         }
//     }
//     void print(){
//         Node* temp=head;
//         cout<<"Elements of the stack are: ";
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }cout<<endl;
//     }
//     int peek(){
//         cout<<"Top most element is "<<head->data<<endl;
//         return head->data;
//     }
//     int pop(){
//         int poppedItem=head->data;
//         Node* temp=head;
//         head=temp->next;
//         delete temp;
//         cout<<poppedItem<<" Popped out of the stack"<<endl;
//         return poppedItem;
//     }
// };
// int main(){
//     stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.print();
//     s.peek();
//     s.pop();
//     s.print();
//     return 0;
// }


//Stack using an array
// #include <iostream>
// using namespace std;
// class stack {
// public:
//     int stackSize;
//     int capacity;
//     int *arr;

//     stack(int capacity) {
//         this->capacity = capacity;
//         this->stackSize = 0;
//         this->arr = new int[capacity];
//     }

//     ~stack() {
//         delete[] arr;
//     }

//     void push(int element) {
//         if (stackSize == capacity) {
//             cout << "Stack is full." << endl;
//         } else {
//             arr[stackSize++] = element;
//         }
//     }

//     void print() {
//         cout << "Elements of stack are: ";
//         for (int i = 0; i < stackSize; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void peek() {
//         if (stackSize > 0) {
//             cout << "Top most element of the stack is " << arr[stackSize - 1] << endl;
//         } else {
//             cout << "Stack is empty." << endl;
//         }
//     }

//     void pop() {
//         if (stackSize > 0) {
//             int popValue = arr[stackSize];
//             arr[stackSize] = 0;
//             stackSize--;
//         } else {
//             cout << "Stack is empty. Cannot pop." << endl;
//         }
//     }
// };

// int main() {
//     stack s(5);
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.print();
//     s.pop();
//     s.print();
//     s.peek();
//     return 0;
// }
