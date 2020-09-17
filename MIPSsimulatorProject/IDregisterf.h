#ifndef IDREGISTERF_H
#define IDREGISTERF_H
#include <ControlUnit.h>
#include <IDregisterf.h>
#include <ExAlu.h>
#include <Mem.h>
#include <WBwriteb.h>
#include <iostream>
using namespace std;


class IDregisterf
{
    private:
       static const int zero=0;
       static int one,two,three,four,five,six,seven,eight,
                  nine,ten,eleven,tweleve,thirteen,fourteen,
                  fifthteen,sixteen,seventeen,eighteen,nineteen,
                  twenty,tweentyone,tweentytwo,tweentythree,tweentyfour,
                  tweentyfive,tweentysix,tweentyseven,gp,
                  sp,fp,ra;

    public:
        //ControlUnit static control;
        IDregisterf(char aPlace2Jump[],char instr[],char operand1[],char operand2[],char operand3[],
                    ControlUnit control,IFinstruction step1,ExAlu step3,Mem step4,WBwriteb step5);
        ~IDregisterf();
        void displayRegisters(); // a function to display them at the end
        void whichReg(char aPlace2Jump[],char instr[],char operand1[],char operand2[],char operand3[]);
        void writeBackintoReg();




};

#endif // IDREGISTERF_H
