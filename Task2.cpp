#include <iostream>
#include <fstream>

using namespace std;

// Task 2: Write a function that takes the width and height of a rectangle as user input. The
//function should calculate the area of the rectangle, create a file named "rectangle_area.txt",
//and write the calculated area into the file

void calculateAndWriteArea() {
    // taking input
    double width, height;
    cout << "Dikdörtgenin geniþliðini girin: ";
    cin >> width;
    cout << "Dikdörtgenin yüksekliðini girin: ";
    cin >> height;

    // Calculate area
    double area = width * height;

    // create and opened "rectangle_area.txt" 
    ofstream outFile("rectangle_area.txt");

    // Controller
    if (outFile.is_open()) {
        // Writing file
        outFile << "Dikdörtgenin alaný: " << area;

        // close
        outFile.close();

        cout << "Alan baþarýyla hesaplandý ve rectangle_area.txt dosyasýna yazýldý." << endl;
    }
    else {
        cerr << "Hata: rectangle_area.txt dosyasý yazýlamýyor." << endl;
    }
}

//return
int main() {
    calculateAndWriteArea();
    return 0;
}