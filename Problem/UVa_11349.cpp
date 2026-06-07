#include <iostream>
#define ll long long
using namespace std;

int main(){
    int T, n;
    char c;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> c >> c >> n;
        ll m[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> m[i][j];
            }
        }
        bool symmetric = true;
       for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(m[i][j] != m[n-1-i][n-1-j] || m[i][j] < 0 || m[n-1-i][n-1-j] < 0){
                    symmetric = false;
                    break;
                }
            }
        }
        cout << "Test #" << t << ": ";
        if(symmetric) cout << "Symmetric.\n";
        else cout << "Non-symmetric.\n";
    }
}