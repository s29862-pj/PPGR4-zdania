#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

        cout << "Wpisz ilość elementów: ";
        cin >> n;

        if (n <= 0) {
            cerr << "Zła ilość. Do widzenia." << endl;
            return 1;
        }

        int* arr = new int[n];

        cout << "Wpisz elementy:" << endl;
        for (int i = 0; i < n; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }

        int maxElement = INT_MIN;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }

        cout << "Największym elementem jest: " << maxElement << endl;

        delete[] arr;

        return 0;
}
