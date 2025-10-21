#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
Task 6: Create a program that copies the content of a file named "source.txt" to a new file
named "destination.txt". If "destination.txt" already exists, its content should be overwritten.
 */
int main() {
    string sourceFilename = "source.txt";
    string destFilename = "destination.txt";

    // Create an input file stream for the source file
    ifstream sourceFile(sourceFilename);

    // Check if the source file can be opened
    if (!sourceFile.is_open()) {
        cerr << "Hata: Kaynak dosya '" << sourceFilename << "' açýlamýyor. "
            << "Lütfen var olduðundan emin olun." << endl;
        return 1;
    }

    // Create an output file stream for the destination file.
    // By default, this opens in truncation mode, overwriting existing content.
    ofstream destFile(destFilename);

    // Check if the destination file can be opened
    if (!destFile.is_open()) {
        cerr << "Hata: Hedef dosya '" << destFilename << "' yazýlamýyor." << endl;
        sourceFile.close(); // Close the source file before exiting
        return 1;
    }

    char ch;
    // Read from the source file character by character and write to the destination
    while (sourceFile.get(ch)) {
        destFile.put(ch);
    }

    // Close both files
    sourceFile.close();
    destFile.close();

    cout << "'" << sourceFilename << "' içeriði baþarýyla '" << destFilename << "' dosyasýna kopyalandý." << endl;

    return 0;
}
