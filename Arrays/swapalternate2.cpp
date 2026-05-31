#include<iostream>
using namespace std ;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;




}


void swapalternate(int arr[], int size){

    for(int i=1;i<size;i+=2){

    int app;
    app=arr[i];

    arr[i]=arr[i-1];
    arr[i-1]=app;
        
    }
}

int main(){
    int arr[8]={5,6,7,3,9,1,3,5};
    int brr[5]={6,8,2,4,1};
    swapalternate(arr,8);
    printarray( arr,8);
    //  swapalternate(brr,5);
    //  printarray(brr,5);
    return 0;
}