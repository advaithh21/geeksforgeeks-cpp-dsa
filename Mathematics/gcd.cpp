#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int area = a*b;
    int gcd;
    if (a<=b){
        for(int i = a; i>=1;i--){
            if(area%(i*i) == 0 && b%i == 0 && a%i == 0){
                gcd = i;
                break;
            }
        }
    }
    else{
        for(int i = b; i>=1;i--){
            if(area%(i*i) == 0 && b%i == 0 && a%i == 0){
                gcd = i;
                break;
            }
        }
    }
    cout << gcd << endl;
}