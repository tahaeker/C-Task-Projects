#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Task 5: Write a program that reads the content from the "sample.txt" file character by
//character using the get() function and counts the total number of characters.The program
//should then display the total count in the console.

int main() {
    // The name of the file to read
    string filename = "sample.txt";

    // Create an input file stream (ifstream) to read the file
    ifstream inFile(filename);

    // Check if the file was opened successfully
    if (inFile.is_open()) {
        char character;
        int charCount = 0;

        // The get() function reads one character at a time.
        // The loop continues as long as the get() function successfully reads a character.
        while (inFile.get(character)) {
            charCount++;
        }

        // Close the file
        inFile.close();

        // Display the total character count
        cout << "'" << filename << "' dosyasý " << charCount << " karakter içeriyor." << endl;

    }
    else {
        // Print an error message if the file could not be opened
        cerr << "Hata: '" << filename << "' dosyasý açýlamýyor. "
            << "Lütfen 'sample.txt' dosyasýnýn ayný dizinde olduðundan emin olun." << endl;
        return 1; // Indicate error
    }

    return 0; // Indicate success
}
