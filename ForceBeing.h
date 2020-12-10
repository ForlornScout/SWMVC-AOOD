#ifndef FORCEBEING_H
#define FORCEBEING_H

#include <iostream>
#include <string>
using namespace std;

class ForceBeing {
  private: int power_level;
   string name;
  private: bool evil;

  protected: ForceBeing(int level) {
      power_level = level;
  }
  protected: void setName(string characterName) {
           name = characterName;
    }
  protected: void setPowerLevel(int level) {
    power_level = level;
  }
  public: virtual int getPowerLevel() {
    return power_level;
  }
  public: virtual string getName() {
    return name;
  }
  
  public: void setEvil() {
    evil = true;
  }

  public: void setGood() {
    evil = false;
  }

};

#endif