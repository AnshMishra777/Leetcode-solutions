#include<iostream>
using namespace std ;
int unique(){
    int arr[7]={2,2,3,3,4,4,9};
  
 
    int ans=0;
for(int i=0;i<7;i++){

    ans=ans^arr[i];
    cout<<ans<<endl;
}
// if(ans=1){
    // cout<<ans;

// }




return 0;
}