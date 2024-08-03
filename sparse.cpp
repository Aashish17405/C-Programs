#include <vector>
#include <iostream>
using namespace std;

int main() {
   int a[3][3] = { {1,0,2}, {0,4,0}, {0,0,0} };
   int count_non_zero = 0;
   for(int r=0; r<3; r++){
       for(int c=0; c<3; c++){
           if(a[r][c] != 0){
               count_non_zero++;
           }
       }
   }
   vector<vector<int>> sparse(3, vector<int>(count_non_zero));
   int i = 0;
   for(int r=0; r<3; r++){
       for(int c=0; c<3; c++){
           if(a[r][c] != 0){
               sparse[0][i] = r;
               sparse[1][i] = c;
               sparse[2][i] = a[r][c];
               i++;
           }
       }
   }
   cout<<"Sparse Array"<<endl;
   for(int i=0; i<3; i++){
       for(int j=0; j<count_non_zero; j++){
           cout << sparse[i][j] << " ";
       }
       cout << "\n";
   }
   return 0;
}
