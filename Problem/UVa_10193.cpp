#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return b == 0 ? a : GCD(b, a % b);
}

int main(){

    int N, Case = 1;

    cin >> N;

    while(N--){

        string S1, S2;

        cin >> S1 >> S2;

        int num1 = stoi(S1, nullptr, 2), num2 = stoi(S2, nullptr, 2);

        if(GCD(num1, num2) != 1){
            cout << "Pair #" << Case++ << ": All you need is love!\n";
        }
        else{
            cout << "Pair #" << Case++ << ": Love is not all you need!\n";
        }
    }

    return 0;
}
