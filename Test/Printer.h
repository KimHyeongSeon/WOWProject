


#pragma once
#include <iostream>
#include<string>
using namespace std;

class Printer
{
   string brand;
   string name;
   string type;
   int num;
   int paperNum;
   int ink;
   int toner;

public:
   Printer();
   Printer(int n, string br, string name, string type);
   void show();
   void print(int n, int pn);
   void setPaper(int pn) { this->paperNum = pn; }
   void setInk(int in) { this->ink = in; }
   void setToner(int it) { this->toner = it; }
   string getType() { return type; }
   string getBrand() { return brand; }
   string getName() { return name; }
   int getNum() { return num; }
   int getPaperNum() { return paperNum; }
   int getInk() { return ink; }
   int getToner() { return toner; }
};
