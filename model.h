#include <string>
#include "Jedi.h"
#include "Sith.h"

using namespace std;

class Model {
  private:
        Sith darthVader = Sith("Darth Vader",100);
        Jedi lukeSkywalker = Jedi("Luke Skywalker",99);
  public:
    string modelSith() {
      return darthVader.getName();
    }
  public:
    string modelJedi(){
      return lukeSkywalker.getName();
    }
};