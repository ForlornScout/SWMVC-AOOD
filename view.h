#include <iostream>
#include <string>

using namespace std;

class View {
  public:
    void printRecord(string recordItem) {
      cout << "-_---_-" << endl;
      cout << recordItem << endl;
      cout << "-_---_-" << endl;
  }
};