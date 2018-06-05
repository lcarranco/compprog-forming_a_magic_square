#include <iostream>

using namespace std;

int main() {
    int value = 0;
    int s[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> value;
            s[i][j] = value;
            // cout << s[i][j] << " ";
        }
        // cout << endl;
    }

    return 0;
}