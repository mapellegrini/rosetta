#include <iostream>
#include <list>
#include <string>

using namespace std;

void printlist(list <string> userlist){
  cout << "All list items: ";
  std::list<string>::iterator it;
  string tmpstr; 
  for (it = userlist.begin(); it != userlist.end(); it++){
    cout << *it << " "; 
  }
  cout << endl; 
}


int main(){
  string input;
  list <string> userlist; 

  while (input != "-1"){
    cout << "Enter a string (Enter -1 to quit): ";
    cin >> input;
    cout << "User entered: " << input << endl;
    userlist.push_back(input);
    printlist(userlist);
  }
  cout << "Quitting";
}
