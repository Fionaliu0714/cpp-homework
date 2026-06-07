
#include <bits/stdc++.h>
using namespace std;

int cost[36];  // 存每個字元的成本

// 將十進位的數字轉為指定進位制，並計算轉換後每個位數的成本總和
int compute_cost(int number, int base) {
    if (number == 0) return cost[0]; 

    int total = 0;
    while (number > 0) {
        int rem = number % base;
        total += cost[rem];
        number /= base;
    }
    return total;
}

int main() {
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; ++case_num) {
        for (int i = 0; i < 36; ++i)
            cin >> cost[i];

        int Q;
        cin >> Q;
        vector<int> numbers(Q);
        for (int i = 0; i < Q; ++i)
            cin >> numbers[i];

        cout << "Case " << case_num << ":\n";
        for (int i = 0; i < Q; ++i) {
            int num = numbers[i];
            vector<int> bases;
            int min_cost = INT_MAX;

            for (int base = 2; base <= 36; ++base) {
                int c = compute_cost(num, base);
                
                if (c < min_cost) {
                    min_cost = c;
                    bases.clear();
                    bases.push_back(base);
                    
                } else if (c == min_cost) {
                    bases.push_back(base);
                }
            }

            cout << "Cheapest base(s) for number " << num << ":";
            for (int b : bases)
                cout << " " << b;
            cout << "\n";
        }

        if (case_num != T)
            cout << "\n";  // 測資之間空一列
    }

    return 0;
}
