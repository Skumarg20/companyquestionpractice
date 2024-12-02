#include <bits/stdc++.h>
using namespace std;


int main(){

      int a[]={9,8,5,7,6};
  int n=sizeof(a)/sizeof(a[0]);

      int l=0;
      int pvt=a[l];
      int h=n-1;
      int i=l-1,j=h+1;
      while(true){
        do{
            i++;
        } while(a[i]<pvt);

        do{
            j--;
        } while(a[i]>pvt);
        if(i>=j) return j;
        cout<<j<<endl;
        swap(a[i],a[j]);

      }
    
    return 0;
}