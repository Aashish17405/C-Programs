#include<iostream>
using namespace std;
class array{
    //State
    int capacity;
    string datatype;
    int size;
    int *a;
public:
    // Array(){
    //     size=10;
    //     capacity=10;
    //     a=new int[capacity];
    // }
    Array(int capacity,int size, int b[]){
        this->capacity = capacity;         //Shadowing
        this->size = size;
        a=new int[capacity];                //How dynamic array is created
        for(int i=0;i<size;i++){
            *(a+i) = b[i];
        }
    }
    void printArray(){
        for(int i=0;i<size;i++){
            cout<<*(a+i)<<endl;
        }
    }
    void insert(int element){  //Add at the end
        if(size==capacity){
            cout<<"Can't insert a new element."<<endl;
            return;
        }
        a[size]=element;
        size+=1;
    }
    void insert(int index,int element){
        if(size==capacity){
            cout<<"Can't insert a new element."<<endl;
            return;
        }
        if(index<0 || index>size) {
            cout<<"Invalid index."<<endl;
            return;
        }
        for(int i=size-1;i>=index;i--) {
            a[i + 1] = a[i];
        }
        a[index] = element;
        size++;
    }
    void remove(){
        size-=1;
    }
    void remove(int index){
        if(index<0 || index>size) {
            cout<<"Invalid index."<<endl;
            return;
        }
        for(int i=index;i<size-1;i++) {
            a[i] = a[i + 1];
        }
        size--;
    }
    void search(int index){
        if(index<0 || index>size) {
            cout<<"Invalid index."<<endl;
            return;
        }
        cout<<a[index]<<endl;
    }
};
int main(){
    int s[]={23,43,555,89,99};
    array a;
    a.Array(20,5,s);
    a.printArray();
    cout<<"After inserting"<<endl;
    a.insert(10);
    a.insert(2,57);
    a.printArray();
    cout<<"After removing"<<endl;
    a.remove();
    a.remove(3);
    a.printArray();
    cout<<"Searching the element"<<endl;
    a.search(3);
    return 0;
}