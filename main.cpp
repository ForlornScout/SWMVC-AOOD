#include <iostream>
#include "controller.h"

int main() {
  Controller controller;
  controller.updateView(
    controller.modelSith(), 
    controller.modelJedi() 
  );
}