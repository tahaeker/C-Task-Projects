#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 Task 4: Develop a program that asks the user for their first name and last name. The program
should then append this information to a file called "names.log". Each new entry (first name
and last name) should be on a new line.
 */
int main() {
    // Take name and surname
    string firstName, lastName;
    cout << "Adýnýzý girin: ";
    cin >> firstName;
    cout << "Soyadýnýzý girin: ";
    cin >> lastName;

    // (ios::app) protect existing data
    // 'app' new content is added to the end of the file.
    // If the file does not exist, it will be created.
    ofstream logFile("names.log", ios::app);

    
    if (logFile.is_open()) {
        //Writingi
        logFile << firstName << " " << lastName << endl;

        logFile.close();

        cout << "Adýnýz names.log dosyasýna baþarýyla eklendi." << endl;
    }
    else {
        //error
        cerr << "Hata: names.log dosyasý ekleme için açýlamýyor." << endl;
        return 1; 
    }

    return 0; 
}
