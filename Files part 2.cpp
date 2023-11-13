/*
Files Exercise 2
Problem
Write a program that reads a comma delimited CSV file with four columns and returns the average of each column in the file. Assume that the CSV files used will only contain 3 rows and 4 columns.
Expected Output
The CSV file looks like the one below.
1,5,10,30
19,15,10,15
10,4,-2,15
You may add additional helper functions if you’d like, but your program must include the following line of code:
string path = argv[1];
The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
10 8 6 20
Where 10 represents the average of the numbers in the first column, 8 represents the average of the numbers in the second column, etc.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
    try {
        ifstream file;
        file.open(path);
        if (!file) {
            throw runtime_error("File not opened");
        }

        int numColumns = 4;
        vector<int> columnSums(numColumns, 0);

        // Read the CSV file
        for (int i = 0; i < 3; i++) {
            string line;
            getline(file, line);
            stringstream lineStream(line);
            string cell;
            int columnIndex = 0;

            while (getline(lineStream, cell, ',')) {
                double cellValue = stod(cell);
                columnSums[columnIndex] += cellValue;
                columnIndex++;
            }
        }

        // Calculate and print the averages
        for (int i = 0; i < numColumns; i++) {
            int columnAverage = columnSums[i] / 3;  // Assuming 3 rows
            cout << fixed << setprecision(1) << columnAverage;
            if (i < numColumns - 1) {
                cout << " ";
            }
        }
        cout << endl;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }


  //add code above this line
  
  return 0;
  
}
