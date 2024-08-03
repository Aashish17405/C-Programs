// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<" times appeared"<<endl;
//     }
//     return 0;
// }


//Character Hashing
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter the string"<<endl;
//     cin>>s;

//     //pre compute
//     int hash[26]={0};
//     for(int i=0;i<s.length();i++)
//     {
//         hash[s[i]-'a']++;
//     }

//     int q;
//     while(q--){
//         char c;
//         cout<<"Enter the character"<<endl;
//         cin>>c;
//         cout<<hash[c-'a']<<" times appeared"<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter the number of queries:"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number:"<<endl;
        cin>>number;
        cout<<mpp[number]<<" times appeared"<<endl;
    }
    return 0;
}