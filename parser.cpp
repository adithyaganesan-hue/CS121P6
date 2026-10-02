#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    stringstream ss;

    int num1;
    int num2;
    string text;
    int total;

    string line;
    string temp;

    inFile.open("data.csv");

    
    while (getline(inFile, line))
    {
        ss.clear();

        ss.str(line);

        getline(ss, temp, ',');
        num1 = stoi(temp);

        getline(ss, temp, ',');
        num2 = stoi(temp);

        getline(ss, text);

        total = num1 + num2;

        ss.clear();

        for (int i = 0; i < total; i++)
        {
            cout << text << " ";
        }

        cout << endl;
        
        // if (inFile.eof())
        // {
        //     lineLeft = false;
        //     cout << "stopping";
        // }
    }

    inFile.close();

    return 0;
}