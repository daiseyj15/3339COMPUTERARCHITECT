#ifndef IFINSTRUCTION_H
#define IFINSTRUCTION_H
#include <IDregisterf.h>
#include <ExAlu.h>
#include <Mem.h>
#include <ControlUnit.h>
#include <WBwriteb.h>


class IFinstruction
{
    public:
        char instr[5];
        char operand1[10];
        char operand2[3];
        char operand3[3];
        char aPlace2Jump[10];


        IFinstruction(char instruction[],ControlUnit control,IDregisterf step2,ExAlu step3,Mem step4,WBwriteb step5);
        ~IFinstruction();
        void decodeInstruction(char instruction[]);
        void clearall();

        //get line from file
        //J	BEQ	ADD	ADDI SUB SW	LW	SLL	SRL	MUL	AND	OR	NOP


};

#endif // IFINSTRUCTION_H
