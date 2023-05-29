#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printHistogram(int rating, int count) {
    cout << rating << " (" << setw(2) << count << ")";
    cout << " |";
    for (int i = 0; i < count; i++) {
        cout << "=";
    }
    cout << endl;
}

int main() {
    vector<int> ratings(5, 0);
    int rating;
    int totalCount = 0;
    double sum = 0.0;

    while (cin >> rating && rating != 0) {
        ratings[rating - 1]++;
        totalCount++;
        sum += rating;
    }

    for (int i = 4; i >= 0; i--) {
        printHistogram(i + 1, ratings[i]);
    }

    cout << fixed << setprecision(4);
    cout << "Average rating: " << sum / totalCount << endl;

    return 0;
}
