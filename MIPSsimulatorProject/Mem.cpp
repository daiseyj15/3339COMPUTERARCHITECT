#include "Mem.h"

Mem::Mem(char instr[],int op1,int op2,int op3,ControlUnit control,IFinstruction step1,IDregisterf step2,ExAlu step3,WBwriteb step5)
{
    if(instr[0]=='s')
    {
        this.insertItem(op1,op2);
    }
    if(instr[0]=='l')
    {
        this.accessMemtoPutIntoReg();
    }
    step5(instr,op1,op2,op3,control,step1,step2,step3,this);
}
void Mem::displayMem()
{
    for(int i{}; i<sizeofMem;i++)
        {
            if(table[i].size()==0)continue;
            auto bItr=table[i].begin();
            for(;bItr != table[i].end();bItr++)
            {
                cout<<"Value in Memory: "<<bItr->first<<" Location: "<<bItr->second<<endl;
            }

        }

}
bool Mem:isEmpty()
{
    int sum{};
    for(int i{}; i<sizeofMem;i++)
        {
            sum+= table[i].size();
        }
    if(!sum)
    {
        return true;
    }
    return false;
}
int Mem::hashfunction(int key)
{
    return key%sizeofMem;
}
void Mem::insertItem(int key,string value)
{
    int hashValue = hashfunction(key);
    auto& cell= table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(;bItr != end(cell);bItr++)
    {
        if(bItr->first==key)
        {
        keyExists=true;
        bItr->second=value;
        cout<<"[Warning] key exists. Value replaced."<<endl;
        break;
        }

    }
    if(!keyExists)
    {
        cell.emplace_back(key, value);
    }
    return;
}
void Mem::accessMemtoPutIntoReg()
{

}
Mem::~Mem()
{
    //dtor
}
