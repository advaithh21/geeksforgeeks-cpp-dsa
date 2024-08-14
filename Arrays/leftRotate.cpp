#include <iostream>
using namespace std;
//Left rotate an array by 1
void reverse(int arr[], int low, int high){
    while (low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int d;
    cin >> d;
    reverse(arr, 0, d-1);
    reverse(arr, d, 7);
    reverse(arr, 0, 7);
    for (int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}