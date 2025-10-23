#include <iostream>
#include <fstream>

using namespace std;

/*
Task 3: Create an integer array with 5 elements. Write a program that calculates the square of
each element in the array and writes the results to a file named "squares.txt", with each result
on a new line.
 */
int main() {
    // assigments
    int numbers[5] = { 2, 4, 6, 8, 10 };

    // "squares.txt" 
    ofstream outFile("squares.txt");

    // Controller
    if (outFile.is_open()) {
        cout << "Kareler squares.txt dosyasýna yazýlýyor..." << endl;

        // loop
        for (int i = 0; i < 5; ++i) {
//calculate squre
            int square = numbers[i] * numbers[i];
            //writing
            outFile << square << endl;
        }

        // Close the file
        outFile.close();

        cout << "Dosyaya yazma iþlemi tamamlandý." << endl;
    }
    else {
        // Dosya açýlamadýysa bir hata mesajý yazdýr
        cerr << "Hata: squares.txt dosyasý yazýlamýyor." << endl;
        return 1; // error
    }

    return 0; 
}
