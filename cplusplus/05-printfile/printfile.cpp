#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

using namespace std;

int main(){
    string path, text;
    ifstream filestream;
    int end;

    std::cout << "Enter the complete path to a file: ";
    std::cin >> path;

    stringstream buffer;
    ifstream filehandler(path);
    if (filehandler){
        buffer << filehandler.rdbuf();
        text = buffer.str();
        cout<< "The size of that file is " << text.length() << endl;
        cout << "Read in:" << endl << text << endl;
    }
    else{
        cout<<"Cannot read file: " << path << endl;
    }
}
