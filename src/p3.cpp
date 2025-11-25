// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;
bool isPrime(int a){
    for (int i = 2;i*i<=a;i++)
        if (a%i == 0){
            return 0;
        }
    return 1;
}
int main() {
    int n;
    cin>>n;
    for (int i = 2;i <(n/2)+1;i++){
        if ((isPrime(i)==1)&&(isPrime(n-i)==1)){
            cout << i << " " << n-i << endl;
            break;
        }
    }
    
    return 0;
}
