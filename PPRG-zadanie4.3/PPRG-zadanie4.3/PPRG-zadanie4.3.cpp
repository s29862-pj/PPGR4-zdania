#include <iostream>;
using namespace std;

int main()
{
    const int rows = 10;
    const int cols = 2;
    int array[rows][cols];

    for (int i = 0; i < rows; ++i) {
        array[i][0] = i;

        array[i][1] = array[i][0] + array[i][0];
    }

    cout << "Wygenerowana tablica:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0; 
}


