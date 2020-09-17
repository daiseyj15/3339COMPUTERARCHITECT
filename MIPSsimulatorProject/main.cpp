#include <iostream>
#include <fstream>
#include <IFinstruction.h>
#include <IDregisterf.h>
#include <ExAlu.h>
#include <Mem.h>
#include <ControlUnit.h>
#include <WBwriteb.h>

using namespace std;


//Output: The final output of your simulator will be the contents of the register file and memory. These two components
//represent the state of the machine after completing the execution of the program. The simulator should also support a debug
//mode that
//prints the contents of the register file, the state registers and the emitted control
//signals after executing each instruction.

//we have 13 instruction types

/*choose appropriate data structures (or classes) to represent registers, memory, ALU and other elements of the MIPS processor */

/*The simulator should be faithful to the 5-stage pipelined MIPS processor we have studied in class. */

/*Internally, the assembly instructions do not need to be stored in binary format. However, your processor
should still perform the task of decoding
 (i.e., extract opcode, register numbers etc.) */

int main()
{
    char instruction[20];
    ifstream Myfile("assemblyinstru.txt");
    IFinstruction step1;
    IDregisterf step2;
    ExAlu step3;
    Mem step4;
    WBwriteb step5;
    ControlUnit control;

    while(getline(Myfile,instruction))
    {
       step1(instruction,control,step2,step3,step4,step5);
    }

    step4.displayMem();

    Myfile.close();
    return 0;
}
