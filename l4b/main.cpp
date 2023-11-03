#include <iostream>
using namespace std;
int main() {

    const int rows = 3;
    const int cols = 4;
    int array[rows][cols] = {
        {3, 5, 6, 7},
        {12, 1, 1, 1},
        {0, 7, 12, 1},
    };

    int row_sums[rows] = { 0 };
    int col_sums[cols] = { 0 };
    int total_sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            row_sums[i] += array[i][j];
            col_sums[j] += array[i][j];
            total_sum += array[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << "| " << row_sums[i] << endl;
    }

    for (int j = 0; j < cols; j++) {
        cout << "----";
    }
    cout << "--------------------" << endl;

    for (int j = 0; j < cols; j++) {
        cout << col_sums[j] << "\t";
    }
    cout << "| " << total_sum << endl;

    return 0;
}