#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    cout<<"length of arr is "<<lengthofarr(arr)<<endl;
    return 0;
}