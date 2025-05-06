#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int row = 1; row <= N; row++) {
        for (int num = 1; num <= N - row + 1; num++) {
            cout << num << " ";
        }

        
        int starCount = 2 * (row - 1) - 1 + 2; 
        for (int star = 1; star <= starCount; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
