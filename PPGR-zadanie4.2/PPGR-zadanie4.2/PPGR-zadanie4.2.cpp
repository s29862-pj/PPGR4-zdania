#include <iostream>
#include <unordered_map>;
#include <vector>;
using namespace std;

int main()
{
    int n;

    cout << "Ilość elementów: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ilość musi być większa od 0!" << endl;
        return 1;
    }

    cout << "Wprowadź dane elementów: " << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    unordered_map<int, int> elementFrequency;

    for (int i = 0; i < n; ++i) {
        elementFrequency[arr[i]]++;
    }

    int mostCommonElement = arr[0];
    int maxFrequency = elementFrequency[arr[0]];
    for (int i = 1; i < n; ++i) {
        if (elementFrequency[arr[i]] > maxFrequency) {
            mostCommonElement = arr[i];
            maxFrequency = elementFrequency[arr[i]];
        }
    }

    cout << "Najczesciej wystepujacy element: " << mostCommonElement << endl;
    cout << "Wystepuje " << maxFrequency << " razy." << endl;

    return 0;
}

