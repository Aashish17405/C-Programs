//Implementation of undirectional graph using array
// #include<iostream>
// using namespace std;
// int adj[5][5];
// void addEdge(int u,int v){
//     adj[u][v]=1;
//     adj[v][u]=1;
// }
// void print(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int v=5;
//     addEdge(0,4);
//     addEdge(0,1);
//     addEdge(1,4);
//     addEdge(1,3);
//     addEdge(2,0);
//     addEdge(3,2);
//     addEdge(3,1);
//     print();
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// void addEdge(vector<int> adj[], int u, int v){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
// void printGraph(vector<int> adj[], int V){
//     for (int v = 0; v < V; ++v) {
//         cout <<"Adjacency list of "<<v<<" "<<"vertex ";
//         for (auto x : adj[v])
//             cout << " - " << x;
//         cout<<"\n";
//     }
// }
// int main(){
//     int V = 5;
//     vector<int> adj[V];
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 4);
//     addEdge(adj, 1, 2);
//     addEdge(adj, 1, 3);
//     addEdge(adj, 1, 4);
//     addEdge(adj, 2, 3);
//     addEdge(adj, 3, 4);
//     printGraph(adj, V);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int> adj[],int v){
    for(int i=0;i<v;++i){
        cout<<"Adjacency list of "<<i<<" vertex";
        for(auto x:adj[i]){
            cout<<" - "<<x;
        }
        cout<<endl;
    }
}
int main(){
    int v=5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    print(adj, v);
    return 0; 
}