#ifndef CONTROLUNIT_H
#define CONTROLUNIT_H
#include <IFinstruction.h>
#include <IDregisterf.h>
#include <ExAlu.h>
#include <Mem.h>
#include <WBwriteb.h>
#include <iostream>
using namespace std;


class ControlUnit
{
    private:
       static bool regDst;
       static bool jump;
       static bool branch;
       static bool memRead;
       static bool memtoReg;
       static bool aluOp;
       static bool memWrite;
       static bool aluSrc;
       static bool regWrite;
       static const bool zerobit=0;
       static int ifIDreg;
       static int idEXreg;
       static int exMEMreg;
       static int memWBreg;



    public:
        ControlUnit(char aPlace2Jump[],char instr[],char operand1[],char operand2[],char operand3[],IFinstruction step1,
                    IDregisterf step2,ExAlu step3,Mem step4,WBwriteb step5);
        ~ControlUnit();
        void displayControlSignalsANDstateregisters();
        void setControls(char aPlace2Jump[],char instr[],char operand1[],char operand2[]);
        //might need to make a function to access the variables



};

#endif // CONTROLUNIT_H
