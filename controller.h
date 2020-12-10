#include "model.h"
#include "view.h"

class Controller {

  private:
    Model model;
    View view;

  public:
    string modelSith() {
      return model.modelSith();
    }
    string modelJedi() {
      return model.modelJedi();
    }

     void updateView(string sith, string jedi) {
      view.printRecord(jedi);
      view.printRecord(sith);
    }
};
