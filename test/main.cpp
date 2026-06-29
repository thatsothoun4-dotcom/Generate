#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int dp[rows][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {

            if (j == 0 || j == i) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }

            cout << dp[i][j] << " ";

        }
        cout << endl;
    }


    return 0;
}
