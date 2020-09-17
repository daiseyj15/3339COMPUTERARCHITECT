#ifndef WBWRITEB_H
#define WBWRITEB_H
#include <ControlUnit.h>
#include <IFinstruction.h>
#include <IDregisterf.h>
#include <ExAlu.h>
#include <Mem.h>

class WBwriteb
{
    private:

    public:
        WBwriteb(char instr[],int op1,int op2,int op3,ControlUnit control,IFinstruction step1,IDregisterf step2,ExAlu step3,Mem step4);
        ~WBwriteb();

        //write back results into register file if needed
        //call one of the register files functions?
            /*step3.writeBackintoReg();
            step3.displayRegister();
            control.displayControlSignalsANDstateregisters();*/
        // prints the contents of the register file, the state
        //registers and the emitted control signals after executing each instruction.


};

#endif // WBWRITEB_H
