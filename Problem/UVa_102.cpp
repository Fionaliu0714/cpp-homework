#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
   
    const string ord[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    int in[9];
    while (cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4] >> in[5] >> in[6] >> in[7] >> in[8])
    {
        int times[6];
        for (int i = 0; i < 6; i++)
        {
            if (i == 0)
                times[0] = in[1] + in[2] + in[3] + in[4] + in[6] + in[8];
            if (i == 1)
                times[1] = in[1] + in[2] + in[3] + in[5] + in[6] + in[7];
            if (i == 2)
                times[2] = in[0] + in[1] + in[4] + in[5] + in[6] + in[8];
            if (i == 3)
                times[3] = in[0] + in[1] + in[3] + in[5] + in[7] + in[8];
            if (i == 4)
                times[4] = in[0] + in[2] + in[4] + in[5] + in[6] + in[7];
            if (i == 5)
                times[5] = in[0] + in[2] + in[3] + in[4] + in[7] + in[8];
        }
        int min = times[0];
        int index = 0;
        for (int i = 1; i < 6; i++)
        {
            if (times[i] < min)
            {
                min = times[i];
                index = i;
            }
        }
        cout << ord[index] << " " << times[index] << endl;
    }
    return 0;
}