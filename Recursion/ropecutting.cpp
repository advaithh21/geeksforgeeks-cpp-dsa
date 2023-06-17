#include <iostream>
using namespace std;

int maxim(int a, int b, int c) {
    if (a < b){
        if(b < c){
            return c;
        }
        else{
            return b;
        }
    }
    else{
        if (a < c){
            return c;
        }
        else{
            return a;
        }
    }
}

int maxnoofpieces(int n, int a, int b, int c){
    if (n == 0) return 0;
    if (n< 0) return -1;
    int res = maxim(maxnoofpieces(n-a, a, b, c),maxnoofpieces(n-b, a, b, c), maxnoofpieces(n-c, a, b, c));
    if(res == -1){
        return -1;
    }
    return res+1;   
}
int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << endl;
    cout << maxnoofpieces(n, a, b, c) << endl;
}