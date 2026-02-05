#include <iostream>
#include <list>
#include <string>

using namespace std;

// char *get_arg(int argc, char **argv, char *searchstr, int offset) {

std::string get_arg(int argc, char **argv, std::string search_str, int offset) {
  std::string str1 = "-" + search_str;
  std::string str2 = "--" + search_str;
  for (int c = 0; c <= argc; c++) {
    if (argv[c] == str1 || argv[c] == str2) {
      return argv[c + offset];
    }
  }
  return "";
}

int get_cli_int(int argc, char **argv) {
  std::string found = get_arg(argc, argv, "i", 1);
  if (found == "") {
    return -1;
  }
  return std::stoi(found);
}

bool get_cli_bool(int argc, char **argv) {
  std::string val = get_arg(argc, argv, "b", 0);
  if (val == "") {
    return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  cout << "-b = " << get_cli_bool(argc, argv) << endl;
  cout << "-i = " << get_cli_int(argc, argv) << endl;
  cout << "-s = " << get_arg(argc, argv, "s", 1) << endl;
  cout << "--s2 = " << get_arg(argc, argv, "s2", 1) << endl;
}
