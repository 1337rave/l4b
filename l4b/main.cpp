#include <iostream>
#include <climits> 

using namespace std;
int main() {

    int array[3][3] = {
        {3, 5, 6},
        {12, 1, 1},
        {0, 7, 12}
    };

    int rows = 3;
    int cols = 3;

    int sum = 0;
    int min_element = INT_MAX;
    int max_element = INT_MIN;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
            if (array[i][j] < min_element) {
                min_element = array[i][j];
            }
            if (array[i][j] > max_element) {
                max_element = array[i][j];
            }
        }
    }

    double average = static_cast<double>(sum) / (rows * cols);

    cout << "Sum of all elements: " << sum << endl;
    cout << "Average of all elements: " << average << endl;
    cout << "Minimum element: " << min_element << endl;
    cout << "Maximum element: " << max_element << endl;

    return 0;
}