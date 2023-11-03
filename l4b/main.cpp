#include <iostream>
#include <ctime>   

using namespace std;

int main() {

    srand(static_cast<unsigned>(time(nullptr)));

    int array1[5][10];
    int array2[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            array1[i][j] = rand() % 51;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int sum = array1[i][2 * j] + array1[i][2 * j + 1];
            array2[i][j] = sum;
        }
    }

    cout << "First array (5x10):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSecond array (5x5):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}