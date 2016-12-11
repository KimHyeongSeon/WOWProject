#include "Printer.h"

Printer::Printer(int n, string br, string name, string type)
{
   num = n;
   brand = br;
   this->name = name;
   this->type = type;
}

void Printer::show()
{
   cout << getType() << " : " << getName() << " ,"
      << getBrand() << " ," << "남은 종이 " << getPaperNum()<<" ,";
   if (getType() == "잉크젯")
   {
      cout << "남은 잉크 " << getInk() << endl;
   }
   else
   {
      cout << "남은 토너 " << getToner() << endl;
   }
}

void Printer::print(int n,int pn)
{
   if (n == getNum())
   {
      if (getPaperNum() < pn)
      {
         cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
         return;
      }
      else
      {


         setPaper(getPaperNum() - pn);
         if (getType() == "잉크젯")
         {
            setInk(getInk() - pn);
         }
         else
         {
            setToner(getToner() - pn);
         }
      }
   }
   else return;
}

void main()
{
   int num;
   int pn;
   char ctn='a';
   Printer p1 = Printer(1, "HP", "Officejet V40", "잉크젯");
   Printer p2 = Printer(2, "삼성전자", "SCX-6x45", "레이저");
   p1.setInk(10);
   p1.setPaper(5);
   p2.setToner(20);
   p2.setPaper(3);
   cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
   p1.show();
   p2.show();
   while(true)
   {
      cout << endl;
      cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
      cin >> num;
      cin >> pn;
      p1.print(num, pn);
      p2.print(num, pn);
      p1.show();
      p2.show();
      cout << "계속 프린트 하시겠습니까(y/n)>>";
      cin >> ctn;
      if (ctn == 'n')
      {
         return;
      }
   }
}


