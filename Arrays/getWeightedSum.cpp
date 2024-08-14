#include <iostream>
using namespace std;
// to get weighted sum in O(1) time complexity
// getWsum() = 1*arr[l] + 2*arr[l+1] + 3*arr[l+2] ... + (r-l+1)*arr[r]
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int pSum[10];
    pSum[0] = arr[0];
    for(int i = 1; i < 10; i++){
        pSum[i] = arr[i] +pSum[i-1];
    }
    int pWsum[10];
    pWsum[0] = 0;
    for (int i = 1; i < 10; i++){
        pWsum[i] = i*arr[i] + pWsum[i-1];
    }
    int r, l;
    cin >> r;
    cin >> l;
    int res = pWsum[r]-pWsum[l-1] - (l-1)*(pSum[r]-pSum[l-1]);
    cout << res;
}