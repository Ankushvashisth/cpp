#include <iostream>
 using namespace std;

// int main() {
//     int rows = 10;

//     for (int i = rows; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main() {
//     int rows = 10;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "  * ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// int main() {
//     int rows = 10;

//     for (int i = 1; i <= rows; i++) { // Outer loop for rows
//         // Print spaces for alignment
//         for (int j = 1; j <= rows - i; j++) {
//             cout << "  "; // Two spaces for alignment
//         }
//         // Print stars
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl; // Move to the next line
//     }

//     return 0;
// }
int main () {
    int rows = 10;
    for (int i = 1; i <= rows; i++) {
        for (int j =1; j <=i; j++){
            cout<<"*";
        } 
        cout<<endl;
    }
    return 0;

}