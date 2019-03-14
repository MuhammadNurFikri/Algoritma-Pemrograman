#include <iostream>

using namespace std;

void Selection_sort(int arr[], int n) {
    int PosMin, tmp;
    for(int i=0; i<n-1; i++) {
        PosMin = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[PosMin]){
                 PosMin = j;

            }
            if (PosMin!=i){
                tmp = arr[i];
                arr[i] = arr[PosMin];
                arr[PosMin] = tmp;
        }
    }

}
}

void print_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}


int main() {
    int n = 6;
    int arr[] = {22,10,15,3,8,2};
    Selection_sort(arr, n);
    print_array(arr, n);
    return 0;
}
