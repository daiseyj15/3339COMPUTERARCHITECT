#include "IFinstruction.h"

IFinstruction::IFinstruction(char instruction[],ControlUnit control,IDregisterf step2,ExAlu step3,Mem step4,WBwriteb step5)
{
    clearall();
    decodeInstruction(instruction);
    control(aPlace2Jump,instr,operand1,operand2,operand3,this,step2,step3,step4,step5);
}

void IFinstruction::decodeInstruction(char instruction[])
{
    for(int y=0; y<20;y++)
    {
        if(instruction[y]==':')
        {
            for(int z=0; z<20; z++)
            {
               aPlace2Jump[z]=instruction[z];
            }
            break;
        }
    }
    int x=0;
    for(x; x<5;x+=1)
    {
        if(instruction[x]==' ')
            break;
        instr[x]= instruction[x];
    }
    int d=0;
    for(x;x<10;x+=1)
    {
        if(instruction[x]==',')
            break;
     operand1[d]= instruction[x];
     d+=1;
    }
    int s=0;
    for(x;x<3;x+=1)
    {
        if(instruction[x]==',')
            break;
        if(instruction[x]=='(')
            break
      operand2[s]=instruction[x];
      s+=1;
    }
    int o=0;
    for(x;x<3;x+=1)
    {
        if(instruction[x]==')')
            break;
      operand3[o]=instruction[x];
      o+=1;
    }

}
void IFinstruction::clearall()
{
    for(int x=0;x<5;x++)
    {
        instr[x]=' ';
    }
    for(int x=0;x<10;x++)
    {
        operand1[x]=' ';
    }
    for(int x=0;x<3;x++)
    {
        operand2[x]=' ';
    }
    for(int x=0;x<3;x++)
    {
        operand3[x]=' ';
    }
    for(int x=0;x<10;x++)
    {
        aPlace2Jump[x]=' ';
    }
}

IFinstruction::~IFinstruction()
{
    //dtor
}
