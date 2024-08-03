
// Array
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     int basec[3]={1,2,3};
//     array<int,4> a={1,2,6,4};
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<endl;
//     }
    // cout<<"Element at first index: "<<a.at(0)<<endl;
    // a.empty()?cout<<"a is empty"<<endl:cout<<"a is not empty."<<endl;
    // cout<<"First element is "<<a.front()<<endl;
    // cout<<"Last elemene is "<<a.back()<<endl;
//     return 0;
// }

// Vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;

//     vector<int> v1(5,1);  //initialize an array of capacity 5 with each element as 1
//     for(int i:v1){
//         cout<<i<<" ";
//     } 
//     cout<<endl;
//     vector<int> v2(v1);
//     for(int i:v2){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     cout<<"Capacity: "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"Capacity: "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Capacity: "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"Capacity: "<<v.capacity()<<endl; 
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<v.at(2)<<endl;
//     cout<<v[2]<<endl;
//     cout<<"First element is "<<v.front()<<endl;
//     cout<<"Last elemene is "<<v.back()<<endl;

//     cout<<"Before popping:"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
//     v.pop_back();
//     cout<<"After popping: "<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

//     cout<<"Before clear size is "<<v.size()<<endl;
//     v.clear();
//     cout<<"After clear size is "<<v.size()<<endl;
//     return 0;
// }


// List
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l;
//     list<int> n(5,100); //initialize a linkedlist with 5 nodes each element as 100
//     for(int i:n){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.push_back(1);
//     l.push_front(2);
//     l.push_front(4);
//     cout<<"List is"<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
    
//     l.erase(l.begin());
//     cout<<"After erase: "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
    
//     cout<<"Size of list: "<<l.size();

//     return 0;
// }

// Stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<string> s;

//     s.push("Aashish");
//     s.push("Jaini");
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;

//     s.push("Aashish");
//     s.push("Jaini");
//     cout<<"Top element: "<<s.top()<<endl;
//     cout<<"Size: "<<s.size()<<endl; 
//     s.empty()?cout<<"Stack is empty"<<endl:cout<<"Stack is not empty"<<endl;
//     return 0;
// }

// Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("Aashish");
//     q.push("Jaini");
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }cout<<endl;

//     q.push("Aashish");
//     q.push("Jaini");
//     cout<<"First element: "<<q.front()<<endl;
//     q.pop();
//     cout<<"First element: "<<q.front()<<endl;
//     cout<<"Size: "<<q.size()<<endl;
//     return 0;
// }

//Priority Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //max heap
//     priority_queue<int> maxi;

//     //min heap
//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(4);
//     maxi.push(5);
//     maxi.push(0);

//     int size=maxi.size();
//     for(int i=0;i<size;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(1);
//     mini.push(4);
//     mini.push(5);
//     mini.push(0);
//     size=mini.size();
//     for(int i=0;i<size;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

//     cout<<mini.empty()<<endl;
//     return 0;
// }

// Maps
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["rohan"]=2;
    marksMap["sting"]=10;
    marksMap["harry"]=40;
    marksMap.insert({{"kazama",120},{"nobita",0}});

    //Iterator
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<marksMap.size()<<endl;
    cout<<marksMap.max_size()<<endl;
    cout<<marksMap.empty()<<endl; 
    return 0;
}