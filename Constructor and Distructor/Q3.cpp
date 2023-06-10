#include <iostream>
#include <cstring>

class string {
  char* str;
  int length;

public:
  string() {
    length = 0;
    str = new char[length + 1];
  }

  string(char* s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
  }

  string(const string& x) {
    length = x.length;
    str = new char[length + 1];
    strcpy(str, x.str);
  }

  void concat(string& m, string& n) {
    length = m.length + n.length;
    delete[] str;
    str = new char[length + 1];
    strcpy(str, m.str);
    strcat(str, n.str);
  }

  void display() {
    std::cout << str << "\n";
  }

  ~string() {
    delete[] str;
  }
};

int main() {
  string s1;
  string s2("Well done ");
  string s3("Badly done");

  s2.display();
  s1.concat(s2, s3);
  s2 = s3;

  s2.display();
  s1.display();

  return 0;
}
