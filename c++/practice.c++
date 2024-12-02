#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {3, 5, 10, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 10, 15, 30};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    int i = 0, j = 0;
//this question is for intersection of arrays
    // Process common elements
    // while (i < n && j < m) {
    //     // Skip duplicates in array a
    //     if (i > 0 && a[i] == a[i-1]) {
    //         i++;
    //         continue;
    //     }

    //     if (a[i] < b[j]) {
    //         i++;
    //     }
    //     else if (a[i] > b[j]) {
    //         j++;
    //     }
    //     else {
    //         cout << a[i] << endl; // common element found
    //         i++;
    //         j++;
    //     }
    // }

    // this is for union of 2 array
    while(i<n && j<m){
        if(i>0 && a[i]==a[i-1]){ i++;
        continue;}
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;

        }
        if(a[i]<b[j]){
            cout<< a[i]<<" a[i]"<<endl;
            i++;

        }
        else if(a[i]>b[j]){
            cout<<b[j]<<"b[j]"<<endl;
            j++;
        }
        else{
            cout<<a[i]<<"hello"<<endl; 
            i++;
            j++;
        }
    }
    while(i<n){
         if(i>0 && a[i]==a[i-1]){  cout<<a[i]<< " hello1"<<endl;
            i++;}
    }

     while(j<m){
        if(j>0 && b[j]!=b[j-1]){
           cout<<b[j]<<"  hello2"<<endl;
            j++;
        } 
    }
// count inversion in array
int c[]={2,4,1,3,5};
 // inversion means 
 // i<j
 // arr[i]>arr[j]
 // use merge sort algo

 // partition a givem array
 // there are 3 algo 
 // 1.naive partition
 // 2.lomuto algo
 // in this algo pivot always would be at the end 
 
 // 3.hoare partition
 // in this algo pivot always would be at the start


    return 0;
}
