#include "IDregisterf.h"

IDregisterf::IDregisterf(char aPlace2Jump[],char instr[],char operand1[],char operand2[],char operand3[],
                    ControlUnit control,IFinstruction step1,ExAlu step3,Mem step4,WBwriteb step5)
{
    whichReg(aPlace2Jump,instr,operand1,operand2,operand3);
}

void IDregisterf::displayRegisters()
{
    cout<<"Registers!"<<endl;
    cout<<"0: "<<zero<<endl;
    cout<<"1: "<<one<<endl;
    cout<<"2: "<<two<<endl;
    cout<<"3: "<<three<<endl;
    cout<<"4: "<<four<<endl;
    cout<<"5: "<<five<<endl;
    cout<<"6: "<<six<<endl;
    cout<<"7: "<<seven<<endl;
    cout<<"8: "<<eight<<endl;
    cout<<"9: "<<nine<<endl;
    cout<<"10: "<<ten<<endl;
    cout<<"11: "<<eleve<<endl;
    cout<<"12: "<<tweleve<<endl;
    cout<<"13: "<<thirteen<<endl;
    cout<<"14: "<<fourteen<<endl;
    cout<<"15: "<<fifthteen<<endl;
    cout<<"16: "<<sixteen<<endl;
    cout<<"17: "<<seventeen<<endl;
    cout<<"18: "<<eighteen<<endl;
    cout<<"19: "<<nineteen<<endl;
    cout<<"20: "<<twenty<<endl;
    cout<<"21: "<<tweentyone<<endl;
    cout<<"22: "<<tweentytwo<<endl;
    cout<<"23: "<<tweentythree<<endl;
    cout<<"24: "<<tweentyfour<<endl;
    cout<<"25: "<<tweentyfive<<endl;
    cout<<"26: "<<tweentysix<<endl;
    cout<<"27: "<<tweentyseven<<endl;
    cout<<"28: "<<gp<<endl;
    cout<<"29: "<<sp<<endl;
    cout<<"30: "<<fp<<endl;
    cout<<"31: "<<ra<<endl;
}
void IDregisterf::whichReg(char aPlace2Jump[],char instr[],char operand1[],char operand2[],char operand3[])
{
    int op1=0;
    int op2=0;
    int op3=0;
if(aPlace2Jump[0]==' ')
{

        if(instr[0]=='n')
            break;
        //OPERAND 1
        if(operand1[0]=='$')
        {
            if(operand1[2]==' ')
            {
            if(operand1[1]=='1')
                op1=one;
            if(operand1[1]=='2')
                op1=two;
            if(operand1[1]=='3')
                op1=three;
            if(operand1[1]=='4')
                op1=four;
            if(operand1[1]=='5')
                op1=five;
            if(operand1[1]=='6')
                op1=six;
            if(operand1[1]=='7')
                op1=seven;
            if(operand1[1]=='8')
                op1=eight;
            if(operand1[1]=='9')
                op1=nine;
            }
            else
            {
                if(operand1[1]=='1')
                {
                    if(operand1[2]=='0')
                        op1=ten;
                    if(operand1[2]=='1')
                        op1=eleven;
                    if(operand1[2]=='2')
                        op1=tweleve;
                    if(operand1[2]=='3')
                        op1=thirteen;
                    if(operand1[2]=='4')
                        op1=fourteen;
                    if(operand1[2]=='5')
                        op1=fifthteen;
                    if(operand1[2]=='6')
                        op1=sixteen;
                    if(operand1[2]=='7')
                        op1=seventeen;
                    if(operand1[2]=='8')
                        op1=eighteen;
                    if(operand1[2]=='9')
                        op1=nineteen;
                }
                if(operand1[1]=='2')
                {
                    if(operand1[2]=='0')
                        op1=twenty;
                    if(operand1[2]=='1')
                        op1=tweentyone;
                    if(operand1[2]=='2')
                        op1=tweentytwo;
                    if(operand1[2]=='3')
                        op1=tweentythree;
                    if(operand1[2]=='4')
                        op1=tweentyfour;
                    if(operand1[2]=='5')
                        op1=tweentyfive;
                    if(operand1[2]=='6')
                        op1=tweentysix;
                    if(operand1[2]=='7')
                        op1=tweentyseven;
                }
            }
        }
        //OPERAND 2
        if(operand2[0]=='$')
        {
            if(operand2[2]==' ')
            {
            if(operand2[1]=='1')
                op2=one;
            if(operand2[1]=='2')
                op2=two;
            if(operand2[1]=='3')
                op2=three;
            if(operand2[1]=='4')
                op2=four;
            if(operand2[1]=='5')
                op2=five;
            if(operand2[1]=='6')
                op2=six;
            if(operand2[1]=='7')
                op2=seven;
            if(operand2[1]=='8')
                op2=eight;
            if(operand2[1]=='9')
                op2=nine;
            }
            else
            {
                if(operand2[1]=='1')
                {
                    if(operand2[2]=='0')
                        op2=ten;
                    if(operand2[2]=='1')
                        op2=eleven;
                    if(operand2[2]=='2')
                        op2=tweleve;
                    if(operand2[2]=='3')
                        op2=thirteen;
                    if(operand2[2]=='4')
                        op2=fourteen;
                    if(operand2[2]=='5')
                        op2=fifthteen;
                    if(operand2[2]=='6')
                        op2=sixteen;
                    if(operand2[2]=='7')
                        op2=seventeen;
                    if(operand2[2]=='8')
                        op2=eighteen;
                    if(operand2[2]=='9')
                        op2=nineteen;
                }
                if(operand2[1]=='2')
                {
                    if(operand2[2]=='0')
                        op2=twenty;
                    if(operand2[2]=='1')
                        op2=tweentyone;
                    if(operand2[2]=='2')
                        op2=tweentytwo;
                    if(operand2[2]=='3')
                        op2=tweentythree;
                    if(operand2[2]=='4')
                        op2=tweentyfour;
                    if(operand2[2]=='5')
                        op2=tweentyfive;
                    if(operand2[2]=='6')
                        op2=tweentysix;
                    if(operand2[2]=='7')
                        op2=tweentyseven;
                }
            }
        }
        else
        {   //for immidiate offset
            if(operand2[1]==' ')
            {
            if(operand2[0]=='0')
                op2=0;
            if(operand2[0]=='1')
                op2=1;
            if(operand2[0]=='2')
                op2=2;
            if(operand2[0]=='3')
                op2=3;
            if(operand2[0]=='4')
                op2=4;
            if(operand2[0]=='5')
                op2=5;
            if(operand2[0]=='6')
                op2=6;
            if(operand2[0]=='7')
                op2=7;
            if(operand2[0]=='8')
                op2=8;
            if(operand2[0]=='9')
                op2=9;
            }
            else
            {
                if(operand2[0]=='1')
                {
                    if(operand2[1]=='0')
                        op2=10;
                    if(operand2[1]=='1')
                        op2=11;
                    if(operand2[1]=='2')
                        op2=12;
                    if(operand2[1]=='3')
                        op2=13;
                    if(operand2[1]=='4')
                        op2=14;
                    if(operand2[1]=='5')
                        op2=15;
                    if(operand2[1]=='6')
                        op2=16;
                    if(operand2[1]=='7')
                        op2=17;
                    if(operand2[1]=='8')
                        op2=18;
                    if(operand2[1]=='9')
                        op2=19;
                }
                if(operand2[0]=='2')
                {
                    if(operand2[1]=='0')
                        op2=20;
                    if(operand2[1]=='1')
                        op2=21;
                    if(operand2[1]=='2')
                        op2=22;
                    if(operand2[1]=='3')
                        op2=23;
                    if(operand2[1]=='4')
                        op2=24;
                    if(operand2[1]=='5')
                        op2=25;
                    if(operand2[1]=='6')
                        op2=26;
                    if(operand2[1]=='7')
                        op2=27;
                    if(operand2[1]=='8')
                        op2=28;
                    if(operand2[1]=='9')
                        op2=29;
                }
                if(operand2[0]=='3')
                {
                   if(operand2[1]=='0')
                        op2=30;
                    if(operand2[1]=='1')
                        op2=31;
                    if(operand2[1]=='2')
                        op2=32;
                    if(operand2[1]=='3')
                        op2=33;
                    if(operand2[1]=='4')
                        op2=34;
                    if(operand2[1]=='5')
                        op2=35;
                    if(operand2[1]=='6')
                        op2=36;
                    if(operand2[1]=='7')
                        op2=37;
                    if(operand2[1]=='8')
                        op2=38;
                    if(operand2[1]=='9')
                        op2=39;
                }
                if(operand2[0]=='4')
                {
                    if(operand2[1]=='0')
                        op2=40;
                    if(operand2[1]=='1')
                        op2=41;
                    if(operand2[1]=='2')
                        op2=42;
                    if(operand2[1]=='3')
                        op2=43;
                    if(operand2[1]=='4')
                        op2=44;
                    if(operand2[1]=='5')
                        op2=45;
                    if(operand2[1]=='6')
                        op2=46;
                    if(operand2[1]=='7')
                        op2=47;
                    if(operand2[1]=='8')
                        op2=48;
                    if(operand2[1]=='9')
                        op2=49;
                }
                if(operand2[0]=='5')
                {
                    if(operand2[1]=='0')
                        op2=50;
                    if(operand2[1]=='1')
                        op2=51;
                    if(operand2[1]=='2')
                        op2=52;
                    if(operand2[1]=='3')
                        op2=53;
                    if(operand2[1]=='4')
                        op2=54;
                    if(operand2[1]=='5')
                        op2=55;
                    if(operand2[1]=='6')
                        op2=56;
                    if(operand2[1]=='7')
                        op2=57;
                    if(operand2[1]=='8')
                        op2=58;
                    if(operand2[1]=='9')
                        op2=59;
                }
                if(operand2[0]=='6')
                    op2=60;
            }
        }
    //OPERAND 3
    if(operand3[0]=='$')
    {
        if(operand3[2]==' ')
            {
            if(operand3[1]=='1')
                op3=one;
            if(operand3[1]=='2')
                op3=two;
            if(operand3[1]=='3')
                op3=three;
            if(operand3[1]=='4')
                op3=four;
            if(operand3[1]=='5')
                op3=five;
            if(operand3[1]=='6')
                op3=six;
            if(operand3[1]=='7')
                op3=seven;
            if(operand3[1]=='8')
                op3=eight;
            if(operand3[1]=='9')
                op3=nine;
            }
            else
            {
                if(operand3[1]=='1')
                {
                    if(operand3[2]=='0')
                        op3=ten;
                    if(operand3[2]=='1')
                        op3=eleven;
                    if(operand3[2]=='2')
                        op3=tweleve;
                    if(operand3[2]=='3')
                        op3=thirteen;
                    if(operand3[2]=='4')
                        op3=fourteen;
                    if(operand3[2]=='5')
                        op3=fifthteen;
                    if(operand3[2]=='6')
                        op3=sixteen;
                    if(operand3[2]=='7')
                        op3=seventeen;
                    if(operand3[2]=='8')
                        op3=eighteen;
                    if(operand3[2]=='9')
                        op3=nineteen;
                }
                if(operand3[1]=='2')
                {
                    if(operand3[2]=='0')
                        op3=twenty;
                    if(operand3[2]=='1')
                        op3=tweentyone;
                    if(operand3[2]=='2')
                        op3=tweentytwo;
                    if(operand3[2]=='3')
                        op3=tweentythree;
                    if(operand3[2]=='4')
                        op3=tweentyfour;
                    if(operand3[2]=='5')
                        op3=tweentyfive;
                    if(operand3[2]=='6')
                        op3=tweentysix;
                    if(operand3[2]=='7')
                        op3=tweentyseven;
                }
            }
    }
    else
    {
        if(operand3[1]==' ')
            {
            if(operand3[0]=='0')
                op3=0;
            if(operand3[0]=='1')
                op3=1;
            if(operand3[0]=='2')
                op3=2;
            if(operand3[0]=='3')
                op3=3;
            if(operand3[0]=='4')
                op3=4;
            if(operand3[0]=='5')
                op3=5;
            if(operand3[0]=='6')
                op3=6;
            if(operand3[0]=='7')
                op3=7;
            if(operand3[0]=='8')
                op3=8;
            if(operand3[0]=='9')
                op3=9;
            }
            else
            {
                if(operand3[0]=='1')
                {
                    if(operand3[1]=='0')
                        op3=10;
                    if(operand3[1]=='1')
                        op3=11;
                    if(operand3[1]=='2')
                        op3=12;
                    if(operand3[1]=='3')
                        op3=13;
                    if(operand3[1]=='4')
                        op3=14;
                    if(operand3[1]=='5')
                        op3=15;
                    if(operand3[1]=='6')
                        op3=16;
                    if(operand3[1]=='7')
                        op3=17;
                    if(operand3[1]=='8')
                        op3=18;
                    if(operand3[1]=='9')
                        op3=19;
                }
                if(operand3[0]=='2')
                {
                    if(operand3[1]=='0')
                        op3=20;
                    if(operand3[1]=='1')
                        op3=21;
                    if(operand3[1]=='2')
                        op3=22;
                    if(operand3[1]=='3')
                        op3=23;
                    if(operand3[1]=='4')
                        op3=24;
                    if(operand3[1]=='5')
                        op3=25;
                    if(operand3[1]=='6')
                        op3=26;
                    if(operand3[1]=='7')
                        op3=27;
                    if(operand3[1]=='8')
                        op3=28;
                    if(operand3[1]=='9')
                        op3=29;
                }
                if(operand3[0]=='3')
                {
                   if(operand3[1]=='0')
                        op3=30;
                    if(operand3[1]=='1')
                        op3=31;
                    if(operand3[1]=='2')
                        op3=32;
                    if(operand3[1]=='3')
                        op3=33;
                    if(operand3[1]=='4')
                        op3=34;
                    if(operand3[1]=='5')
                        op3=35;
                    if(operand3[1]=='6')
                        op3=36;
                    if(operand3[1]=='7')
                        op3=37;
                    if(operand3[1]=='8')
                        op3=38;
                    if(operand3[1]=='9')
                        op3=39;
                }
                if(operand3[0]=='4')
                {
                    if(operand3[1]=='0')
                        op3=40;
                    if(operand3[1]=='1')
                        op3=41;
                    if(operand3[1]=='2')
                        op3=42;
                    if(operand3[1]=='3')
                        op3=43;
                    if(operand3[1]=='4')
                        op3=44;
                    if(operand3[1]=='5')
                        op3=45;
                    if(operand3[1]=='6')
                        op3=46;
                    if(operand3[1]=='7')
                        op3=47;
                    if(operand3[1]=='8')
                        op3=48;
                    if(operand3[1]=='9')
                        op3=49;
                }
                if(operand3[0]=='5')
                {
                    if(operand3[1]=='0')
                        op3=50;
                    if(operand3[1]=='1')
                        op3=51;
                    if(operand3[1]=='2')
                        op3=52;
                    if(operand3[1]=='3')
                        op3=53;
                    if(operand3[1]=='4')
                        op3=54;
                    if(operand3[1]=='5')
                        op3=55;
                    if(operand3[1]=='6')
                        op3=56;
                    if(operand3[1]=='7')
                        op3=57;
                    if(operand3[1]=='8')
                        op3=58;
                    if(operand3[1]=='9')
                        op3=59;
                }
                if(operand3[0]=='6')
                    op3=60;
            }
    }
    step3(instr,op1,op2,op3,control,step1,this,step4,step5);
}
else
{
        break;
}

}
void IDregisterf::writeBackintoReg()
{

}

IDregisterf::~IDregisterf()
{
    //dtor
}
