#include "WBwriteb.h"

WBwriteb::WBwriteb(char instr[],int op1,int op2,int op3,ControlUnit control,IFinstruction step1,IDregisterf step2,ExAlu step3,Mem step4)
{
           //need to change
           if(instr[0]=='s'|| instr[0]=='b'|| instr[0]=='n'||instr[0]=='j')
           {
               step3.writeBackintoReg(op1,op2);
           }

            step3.displayRegister();
            control.displayControlSignalsANDstateregisters();
}

WBwriteb::~WBwriteb()
{
    //dtor
}
