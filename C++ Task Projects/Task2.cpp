#include <iostream>
#include <fstream>

using namespace std;

// Task 2: Write a function that takes the width and height of a rectangle as user input. The
//function should calculate the area of the rectangle, create a file named "rectangle_area.txt",
//and write the calculated area into the file

void calculateAndWriteArea() {
    // taking input
    double width, height;
    cout << "Dikd�rtgenin geni�li�ini girin: ";
    cin >> width;
    cout << "Dikd�rtgenin y�ksekli�ini girin: ";
    cin >> height;

    // Calculate area
    double area = width * height;

    // create and opened "rectangle_area.txt" 
    ofstream outFile("rectangle_area.txt");

    // Controller
    if (outFile.is_open()) {
        // Writing file
        outFile << "Dikd�rtgenin alan�: " << area;

        // close
        outFile.close();

        cout << "Alan ba�ar�yla hesapland� ve rectangle_area.txt dosyas�na yaz�ld�." << endl;
    }
    else {
        cerr << "Hata: rectangle_area.txt dosyas� yaz�lam�yor." << endl;
    }
}

//return
int main() {
    calculateAndWriteArea();
    return 0;
}