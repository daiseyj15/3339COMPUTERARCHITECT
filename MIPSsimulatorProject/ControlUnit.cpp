#include "ControlUnit.h"

ControlUnit::ControlUnit(char aPlace2Jump[],char instr[],char operand1[],char operand2[],char operand3[],IFinstruction step1,
                    IDregisterf step2,ExAlu step3,Mem step4,WBwriteb step5)
{
    setControls(aPlace2Jump,instr,operand1,operand2,operand3);
    step2(aPlace2Jump,instr,operand1,operand2,operand3,this,step1,step3,step4,step5);
}

void ControlUnit::displayControlSignalsANDstateregisters()
{
    cout<<"Control Signals"<<endl;
    cout<<"RegDst: "<<regDst<<endl;
    cout<<"RegWrite: "<<regWrite<<endl;
    cout<<"ALUSrc: "<<aluSrc<<endl;
    cout<<"Zero: "<<zerobit<<endl;
    cout<<"MemWrite: "<<memWrite<<endl;
    cout<<"MemtoReg: "<<memtoReg<<endl;
    cout<<"MemRead: "<<memRead<<endl;
    cout<<"PCSrc: "<<branch<<endl;
    cout<<"Jump: "<<jump<<endl;
    cout<<"State Registers"<<endl:
    cout<<"IF/ID: "<<ifIDreg<<endl;
    cout<<"ID/EX: "<<idEXreg<<endl;
    cout<<"EX/MEM: "<<exMEMreg<<endl;
    cout<<"MEM/WB: "<<memWBreg<<endl;

}
void ControlUnit::setControls(char aPlace2Jump[],char instr[],char operand1[],char operand2[])
{
    if(aPlace2Jump[0]==' ')
    {
        if(instr[0]=='j')
        {
        regDst=0;
        regWrite=0;
        aluSrc=0;
        memWrite=0;
        memtoReg=0;
        memRead=0;
        branch=0;
        jump=1;

        }
        if(instr[0]=='n')
        {
        regDst=0;
        regWrite=0;
        aluSrc=0;
        memWrite=0;
        memtoReg=0;
        memRead=0;
        branch=0;
        jump=0;

        }
        if(instr[0]=='b')
        {
        regDst=0;
        regWrite=0;
        aluSrc=0;
        memWrite=0;
        memtoReg=0;
        memRead=0;
        branch=1;
        jump=0;

        }
        if(instr[0]=='a')
        {
        regDst=1;
        regWrite=1;
        aluSrc=0;
        memWrite=0;
        memtoReg=1;
        memRead=0;
        branch=0;
        jump=0;

        }
        if(instr[0]=='s')
        {
            if(instr[1]=='w')
            {
                regDst=1;
                regWrite=0;
                aluSrc=1;
                memWrite=1;
                memtoReg=0;
                memRead=0;
                branch=0;
                jump=0;
            }
            else
            {
                regDst=1;
                regWrite=1;
                aluSrc=0;
                memWrite=0;
                memtoReg=1;
                memRead=0;
                branch=0;
                jump=0;
            }
        }
        if(instr[0]=='l')
        {
            regDst=0;
            regWrite=1;
            aluSrc=1;
            memWrite=0;
            memtoReg=0;
            memRead=1;
            branch=0;
            jump=0;
        }
        if(instr[0]=='m')
        {
        regDst=1;
        regWrite=1;
        aluSrc=0;
        memWrite=0;
        memtoReg=1;
        memRead=0;
        branch=0;
        jump=0;
        }
        if(instr[0]=='o')
        {
        regDst=1;
        regWrite=1;
        aluSrc=0;
        memWrite=0;
        memtoReg=1;
        memRead=0;
        branch=0;
        jump=0;
        }
    }
    else
    {
        regDst=0;
        regWrite=0;
        aluSrc=0;
        memWrite=0;
        memtoReg=0;
        memRead=0;
        branch=0;
        jump=0;

    }
}

ControlUnit::~ControlUnit()
{
    //dtor
}
