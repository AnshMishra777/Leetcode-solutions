#include<iostream>
using namespace std ;

void update(int arr[],int n){

    arr[0]=120;
    cout<<"inside the function"<<endl;
//arr[0]=120;
for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
} 
cout<<endl;
//cout<<"going back to main function "<<endl;


}
int main(){
    
    int arr[3]={1,2,3};
    //arr[0]=120;
  

    for(int i=0;i<3;i++){

        cout<<arr[i]<<" ";
    }
cout<<endl;
update(arr,3);

return 0;
}