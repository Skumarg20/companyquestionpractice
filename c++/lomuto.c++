#include <bits/stdc++.h>
using namespace std;


int main (){


    int a[]={9,8,5,7,6};
   // 
    //
    int n=sizeof(a)/sizeof(a[0]);

    int l=0;
    int h=n-1;
    //j=0,j=1
    // 
    int i=l-1;
   int pvt=a[h];
for(int j=l; j<=h-1; j++){
    if(a[j]<pvt){
        i++;
        swap(a[i],a[j]);
    }
    

}
    swap(a[i+1],a[h]);
    cout<<i+1<<"endl"<<endl;
    return 0;
}