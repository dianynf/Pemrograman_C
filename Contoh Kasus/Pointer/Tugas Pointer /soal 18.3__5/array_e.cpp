#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string array1[5][5]={{"a","b","c","d","e"},{"f","g","h","i","j"},{"k","l","m","n","o"},{"p","q","r","s","t"},{"u","v","w","x","y"}};
    int i,j;
        for(i=0;i<5;i++){
          for(j=4;j>=i;j--){
               cout<<array1[i][j]<<" ";
          }
          cout<<endl;
     }
}


