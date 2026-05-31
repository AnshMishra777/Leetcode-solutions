#include<iostream>
using namespace std ;

int main(){
int third[15]={2,7};
int n=15;
cout<<"printing the array:"<<endl;
for(int i=0;i<n;i++){
    cout<<third[i]<<",";

}
cout<<endl;
int first[16]={1};
for(int j=0;j<n;j++){
    cout<<first[j]<<",";
}
int second[13]={0};
for(int k=0;k<=n;k++){
    cout<<second[k]<<",";
}
return 0;
}