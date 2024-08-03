#include<iostream>
using namespace std;
#include<vector>

void explianPair(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p2={3,{1,2}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<" ";
}

void explainVector(){
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);

    v1.emplace_back(3);    //.it dynamically increases the size of the vector by one and pushes the element.it is faster than push_back

    vector<int> v(5,100);    //create a vector of size 5 and initialize it with 100

    vector<int> v2(v);   //creates a vector copy 

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*it<<endl;

    vector<int>::iterator it=v.end();  //end()  points to the location right after the end of the vector
    
    cout<<v.back()<<endl;   //prints the last element of the vector

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    //auto 
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    //forEach
    for(auto it:v){
        cout<<it<<" ";
    }

    //delete 20 from  {10,20,12,23}
    v.erase(v.begin()+1);

    //delete 12,23 from {10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);

    //Insert
    vector<int>v3(2,100);  //{100,100}
    v3.insert(v.begin(),300);   //{300,100,100}
    v3.insert(v.begin()+1,2,10);  //{300,10,10,100,100}

    //Size
    cout<<v3.size();

    //Pop_back()
    //{10,20}
    v3.pop_back();      //{10}

}

void explainList(){
    list<int> ls;

    ls.push_back(2);    //{2}
    ls.emplace_back(4)    //2,4

    ls.push_front(5);  //{5,2,4}
    //rest all the functioins are same as vector
}

int main() {
    // explianPair();
    // explainVector();
    explainList();
    return 0;
}

