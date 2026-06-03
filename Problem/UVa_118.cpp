#include <iostream>
#include <set>
using namespace std;

int main() {
    int maxX, maxY;
    cin >> maxX >> maxY;

    set<pair<int,int>> scent;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    string dir = "NESW";

    int x, y;
    char d_char;

    while (cin >> x >> y >> d_char) {
        string cmd;
        cin >> cmd;

        int d = dir.find(d_char);
        bool lost = false;

        for (char c : cmd) {
            if (c == 'L') d = (d + 3) % 4;
            else if (c == 'R') d = (d + 1) % 4;
            else {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx < 0 || nx > maxX || ny < 0 || ny > maxY) {
                    if (scent.count({x, y})) continue;

                    scent.insert({x, y});
                    lost = true;
                    break;
                }

                x = nx;
                y = ny;
            }
        }

        cout << x << " " << y << " " << dir[d];
        if (lost) cout << " LOST";
        cout << endl;
    }
}