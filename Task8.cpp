#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    string inputFilename = "numbers.txt";
    string outputFilename = "average.txt";

    // --- 1. Read from the input file ---

    // Create an input file stream
    ifstream inFile(inputFilename);

    // Check if the file opened successfully
    if (!inFile.is_open()) {
        cerr << "Error: Could not open file '" << inputFilename << "' for reading." << endl;
        return 1; 
    }

    double sum = 0.0;
    int count = 0;
    double currentNumber;

    // Loop: Read each number from the file as long as the extraction is successful
    while (inFile >> currentNumber) {
        sum += currentNumber; // Add the number to the total sum
        count++;            // Increment the count of numbers
    }

    // Close the input file as we are done reading
    inFile.close();

    // --- 2. Calculate the average ---

    // Check if we actually read any numbers (to avoid division by zero)
    if (count == 0) {
        cout << "Warning: '" << inputFilename << "' is empty or contains no valid numbers. No average calculated." << endl;

        // Optional: Write a message to the output file
        ofstream outFile(outputFilename);
        if (outFile.is_open()) {
            outFile << "No numbers were found to calculate an average." << endl;
            outFile.close();
        }
        return 0; // Exit successfully, but note that no average was computed
    }

    // Calculate the average
    double average = sum / count;

    // --- 3. Write the result to the output file ---

    // Create an output file stream
    ofstream outFile(outputFilename);

    // Check if the output file opened successfully
    if (!outFile.is_open()) {
        cerr << "Error: Could not open file '" << outputFilename << "' for writing." << endl;
        return 1; // Exit with an error code
    }

    // Write the calculated average to the file
    outFile << "The average of the " << count << " numbers is: " << average << endl;

    // Close the output file
    outFile.close();

    cout << "Average successfully calculated and written to '" << outputFilename << "'." << endl;

    return 0;
}
