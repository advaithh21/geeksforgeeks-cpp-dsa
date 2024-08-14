#include <iostream>
using namespace std;
//Left rotate an array by 1
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};

    for (int i=1; i<8; i++) {
        swap(arr[i], arr[i-1]);
    }
    for (int i=0; i<8; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}