// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

long long factorial(int a){
    if (a == 1){
        return 1;
    }
    long long k  = 1 * a * factorial(a-1);
    return k;
}
long long sum(int b){
    if (b ==1){
        return 1;
    }
    int s = b + sum(b-1);
    return s;
}


int main() {
    int n;
    cin >> n;
    if (n == 0){
        cout << 1 << endl << 0 <<endl; 
    }
    else{
    cout << factorial(n)<< endl;
    cout<< sum(n)<<endl;}
    return 0;
}
