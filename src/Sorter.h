/*Sorter.h - Library for check sorter 8 cassethes.
Created by Cesar Abel Ramirez, March 27, 2019.
*/
#ifndef Sorter_h
#define Sorter_h

class Sorter
{
   public: Sorter(int pin1, int pin2, int pin3, int pin4);
   int toSort(String account);
   int release();
   int cleanAccounts();
   String _cuenta1;
   String _cuenta2;
   String _cuenta3;
   String _cuenta4;
   String _cuenta5;
   String _cuenta6;
   String _cuenta7;
   String _cuenta8;
   private:
   int A;
   int B;
   int C;
   int D;
};

#endif
