#include<iostream>
using namespace std ;

int main(){
int arr[5]={2,7,1,-4,11};
int n=5;
int sum=0;
for(int i=0;i<n;i++)
{
    
    sum=sum+arr[i];

}

cout<<"the sum of all elements in an array is :"<<sum;

return 0;
}