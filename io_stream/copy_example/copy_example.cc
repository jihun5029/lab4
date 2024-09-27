#include <iostream>
#include <fstream>  // file in/out 
#include <stdlib.h> // abort() - header 

using namespace std;

int main(int argc, char * argv[]){

    if (argc < 3){  // if( argc <3 ) --> exit program 
        cout << "Usage: " << argv[0] << "<input file> <output file>" << endl;
        return 1;
    }
    
    ifstream test;
    test.open(argv[1]);

    if(test.fail()){
        cout << "!! input file: can't find the file !!" << endl;
        abort();  // sig --> quit
    }

    ofstream test_out;
    test_out.open(argv[2]);

    if (test_out.fail()) {
        cout << "!! output file: can't open or create the file !!" << endl;
        abort();
    }

    string line;
    while(getline(test, line)){ // std::istream& getline(std::istream& is, std::string& str)
        test_out << line << endl;
    }

    test.close();
    test_out.close();

    cout << "File copy completed successfully!"<<endl;

    return 0;
}