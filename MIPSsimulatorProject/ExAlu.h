#ifndef EXALU_H
#define EXALU_H
#include <ControlUnit.h>
#include <IDregisterf.h>
#include <IFinstruction.h>
#include <Mem.h>
#include <WBwriteb.h>

class ExAlu
{
    private:

    public:
        ExAlu(char instr[],int op1,int op2,int op3,ControlUnit control,IFinstruction step1,IDregisterf step2,Mem step4,WBwriteb step5);
        ~ExAlu();
        void ALUadd(int op1,int op2,int op3);
        void ALUsub(int op1,int op2,int op3);
        void ALUmultiply(int op1,int op2,int op3);
        void ALUshiftleft(int op1,int op2,int op3);
        void ALUshiftright(int op1,int op2,int op3);
        void ALUand(int op1,int op2,int op3);
        void ALUor(int op1,int op2,int op3);
        void ALUcompareBranch(int op1,int op2,int op3);
        //perform calculations or calculate memory address

};

#endif // ExALU_H
