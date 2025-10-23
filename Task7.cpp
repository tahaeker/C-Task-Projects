#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//
//Task 7: Write a function that accepts a filename and a string as arguments.The function
//should open the specified file and search for all occurrences of the given string, then print the
//number of times the string was found to the console.
void findStringInFile(const string& filename, const string& searchString) {
    // 1. Create an input file stream to open the file.
    ifstream inFile(filename);

    // 2. Check if the file was opened successfully.
    if (!inFile.is_open()) {
        cerr << "Error: Could not open the file '" << filename << "'" << endl;
        return; 
    }

    string currentWord;
    int count = 0;

    // 3. Read the file word by word.
    // The loop continues as long as words can be extracted from the file.
    while (inFile >> currentWord) {
        // 4. Compare the read word with the search string.
        if (currentWord == searchString) {
            // If they match, increment the counter.
            count++;
        }
    }

    // 5. Close the file stream.
    inFile.close();

    // 6. Print the final result.
    cout << "The string '" << searchString << "' was found " << count << " times." << endl;
}
int main() {
    string filename;
    string searchTerm;

    cout << "Enter the filename to search in: ";
    cin >> filename;

    cout << "Enter the word to search for: ";
    cin >> searchTerm;

    // Call the function with the user-provided inputs.
    findStringInFile(filename, searchTerm);

    return 0;
}
