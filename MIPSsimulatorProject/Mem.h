#ifndef MEM_H
#define MEM_H
#include <iostream>
#include <list>
#include <cstring>
#include <ControlUnit.h>
#include <IFinstruction.h>
#include <IDregisterf.h>
#include <ExAlu.h>
#include <WBwriteb.h>

using namespace std;


class Mem
{
    private:
        static const int sizeofMem=32;
        list<pair<int, string>> table[sizeofMem];
    public:
        Mem(char instr[],int op1,int op2,int op3,ControlUnit control,IFinstruction step1,IDregisterf step2,ExAlu step3,WBwriteb step5);
        ~Mem();
        bool isEmpty()const;
        int hashfunction(int key);
        void insertItem(int key,string value);
        void displayMem();
        void accessMemtoPutIntoReg();


        //a data structure to be the memory
        //functions to read and edit memory

};

#endif // MEM_H
