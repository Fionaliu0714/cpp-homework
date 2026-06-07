#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n && n != 0) {
        vector<int> binary;
        int count = 0;
        int temp = n;
        
        // 轉為二進位並計算 parity
        while (temp > 0) {
            int remainder = temp % 2;
            binary.push_back(remainder);
            if (remainder == 1) {
                count++;
            }
            temp /= 2;
        }
        
        // 餘數是反向紀錄的，需反轉
        reverse(binary.begin(), binary.end());
        
        cout << "The parity of ";
        for (int bit : binary) {
            cout << bit;
        }
        cout << " is " << count << " (mod 2).\n";
    }
    
    return 0;
}
