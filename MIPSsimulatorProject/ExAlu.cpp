#include "ExAlu.h"
#include <cmath>
#include <sstream>

ExAlu::ExAlu(char instr[],int op1,int op2,int op3,ControlUnit control,IFinstruction step1,IDregisterf step2,Mem step4,WBwriteb step5)
{
    if(instr[0]=='a')
    {
        if(instr[1]=='n')
         ALUand(op1,op2,op3);

    ALUadd(op1,op2,op3);
    }
    if(instr[0]=='b')
    {
        ALUcompareBranch(op1,op2,op3);
    }
    if(instr[0]=='s')
    {
        if(instr[1]=='u')
            ALUsub(op1,op2,op3);
        if(instr[1]=='w')
            step4(instr, op1,op2,op3,control,step1,step2,this,step5);
        if(instr[1]=='l')
            ALUshiftleft(op1,op2,op3);
        if(instr[1]=='r')
            ALUshiftright(op1,op2,op3);
    }
    if(instr[0]=='l')
    {
        step4(instr,op1,op2,op3,control,step1,step2,this,step5);
    }
    if(instr[0]=='m')
    {
       ALUmultiply(op1,op2,op3);
    }
    if(instr[0]=='o')
    {
        ALUor(op1,op2,op3);
    }
}
void ExAlu::ALUadd(int op1,int op2,int op3)
{
    op1=op2+op3;
    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
void ExAlu::ALUsub(int op1,int op2,int op3)
{
    op1=op2-op3;
    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
void ExAlu::ALUmultiply(int op1,int op2,int op3)
{
    op1=op2*op3;
    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
void ExAlu::ALUshiftleft(int op1,int op2,int op3)
{
    double x=op3;
    //multipying by 2^n
    op1=(op2*(pow(2,x));
    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
void ExAlu::ALUshiftright(int op1,int op2,int op3)
{
    double x=op3;
    //dividing by 2^n
    op1=(op2/(pow(2,x)));
    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
void ExAlu::ALUand(int op1,int op2,int op3)
{
//op1=op2&op3  but in binary
    int binop2[31],binop3[31];
    int x=0;
    int y=0;
    stringstream ss;
    stringstream cc;
    for (int i = 31; i >= 0; i--)
    {
      int k = op2 >> i;
      if (k & 1)
      {
         binop2[x]=1;
         x++;
      }
      else
      {
          binop2[x]=0;
          x++;
      }
   }
   for (int i = 31; i >= 0; i--)
    {
      int k = op3 >> i;
      if (k & 1)
      {
         binop3[y]=1;
         y++;
      }
      else
      {
          binop3[x]=0;
          y++;
      }
   }
   for(int i:binop2)
    ss<<i;

   ss>>op2;
   for(int i: binop3)
    cc<<i;

   cc>>op3;

   op1=op2&op3;
    step5(instr,op1,op2,op3,step1,step2,this,step4);
}
void ExAlu::ALUor(int op1,int op2,int op3)
{
//op1=op2|op3 but in binary
    int binop2[31],binop3[31];
    int x=0;
    int y=0;
    stringstream ss;
    stringstream cc;
    for (int i = 31; i >= 0; i--)
    {
      int k = op2 >> i;
      if (k & 1)
      {
         binop2[x]=1;
         x++;
      }
      else
      {
          binop2[x]=0;
          x++;
      }
   }
   for (int i = 31; i >= 0; i--)
    {
      int k = op3 >> i;
      if (k & 1)
      {
         binop3[y]=1;
         y++;
      }
      else
      {
          binop3[x]=0;
          y++;
      }
   }
   for(int i:binop2)
    ss<<i;

   ss>>op2;
   for(int i: binop3)
    cc<<i;

   cc>>op3;

   op1=op2|op3;

    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
void ExAlu::ALUcompareBranch(int op1,int op2,int op3)
{
    bool trueORfalse;
    if(op1==op2)
    {
        trueORfalse=1;
    }
    else
    {
        trueORfalse=0;
    }

    step5(instr,op1,op2,op3,control,step1,step2,this,step4);
}
ExAlu::~ExAlu()
{
    //dtor
}
