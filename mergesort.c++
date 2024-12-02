#include <bits/stdc++.h>
using namespace std;
// int res=0;
int merge(int a[], int l, int mid, int h) {
    int n = mid - l + 1;
    int m = h - mid;

    int arr[n], arr2[m];
    for (int i = 0; i < n; i++) {
        arr[i] = a[l + i];
    }
    for (int i = 0; i < m; i++) {
        arr2[i] = a[mid + 1 + i];
    }

    int i = 0, j = 0, k = l,res=0;
    while (i < n && j < m) {
        if (arr[i] <= arr2[j]) {
            a[k++] = arr[i++];
        } else {
            a[k++] = arr2[j++];
            res+=(n-i);
        }
    }
    while (i < n) {
        a[k++] = arr[i++];
    }
    while (j < m) {
        a[k++] = arr2[j++];
    }
}

int mergeSort(int arr[], int l, int h) {
    int res=0;
    if (l < h) {
        int mid = l + (h - l) / 2;
       res+= mergeSort(arr, l, mid);
        res+=mergeSort(arr, mid + 1, h);
        res+=merge(arr, l, mid, h);
    }
    return res;
}

int main() {
    int arr[] = {1, 6, 8, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res=0;
   res= mergeSort(arr, 0, n - 1); // Corrected the range

    for (int i = 0; i < n; i++) {
        cout << arr[i] <<"hello86"<< endl;
    }
    cout<<res<<" hello "<<endl;

    return 0;
}
