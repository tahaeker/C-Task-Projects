#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Task 1: Create a program that asks the user for a filename.The program should then create a
//file with that name and write the text "Hello, World!" into it.
int main() {
    // Prompt the user for a file name   
    cout << "Bir dosya adý girin: ";
    string filename;
    cin >> filename;

	//create and open the file
    ofstream outFile(filename);

	// it must successfully opened
    if (outFile.is_open()) {
		// Write "Hello, World!" to the file
        outFile << "Merhaba, Dünya!" << endl;

		// close the file
        outFile.close();

        cout << "'" << filename << "' dosyasýna 'Merhaba, Dünya!' baþarýyla yazýldý." << endl;
    }
    else {
		// if the file could not be opened, display an error message
        cerr << "Hata: '" << filename << "' dosyasý yazýlamýyor." << endl;
		return 1; // determine an error occurred
    }

	return 0; // it was successful
}