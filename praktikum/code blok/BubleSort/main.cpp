#include <iostream>

using namespace std;

void Buble_sort(int arr[], int length) {
    bool NotSorted = true;
    int j = 0, tmp;

    while(NotSorted) {
        NotSorted = false;
        j++;
        for (int i=0; i <length-j; i++) {
            if (arr[i]>arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                NotSorted = true;

            }
        }
    }
    cout << endl;

}
void print_array(int a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}


int main() {
    int length = 6;
    int arr[] = {22,10,15,3,8,2};
    Buble_sort(arr, length);
    print_array(arr, length);
    return 0;
}
