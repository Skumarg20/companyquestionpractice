#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {20, 50, 40, 30, 10};
    int n = sizeof(a) / sizeof(a[0]);

    for (int cs = 0; cs < n - 1; cs++) {
        int item = a[cs];
        int pos = cs; // 0

        for (int i = cs + 1; i < n; i++) {
            if (a[i] < item) {
                pos++;
            }
        }

        swap(item, a[pos]); // Correct position of the first element

        while (pos != cs) {
            pos = cs;
            for (int i = cs + 1; i < n; i++) {
                if (a[i] < item) {
                    pos++;
                }
            }
            swap(item, a[pos]);
        }
    }

    // Print the sorted array
    for (auto x : a) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
