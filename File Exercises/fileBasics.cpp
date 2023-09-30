#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream outfile("My.txt");   // default its ios::trunc u can use ios::app to append

    outfile << "Hello" << endl; // writes hello into the file
    outfile << 25 << endl;

    outfile.close();

    ifstream infile;
    infile.open("My.txt");  // ios::in , ios::out // ifstream is for reading only so we don't need to specify.
    
    if(!infile) { // file isn't already open (can also use) -> !infile.is_open()
        cout << "File cannot be opened." << endl;
    }

    string str;
    int x;

    infile >> str;
    infile >> x;

    cout << str << " " << x << endl;

    if (infile.eof()) {cout << "End of file reached.";} // checks if end of file. (eof)
    infile.close();
}