#pragma once

#include <stdio.h>
#include <string>

typedef unsigned char u_char;
typedef unsigned short u_short;

class machine
{
private:
    u_char a,x,y,sp,rb;//Accumulator, X-reg, Y-reg, Stack pointer, Read buffer
    u_short pc,sb,cs,ci,co,cc,ab;//Program counter, Stack base, console state, console in, console out, console color, address buffer
    u_char memory[];
public:
    machine(u_char rom[]);
    ~machine();
};

machine::machine(u_char rom[])
{
    memory[0x10000];
}

machine::~machine()
{
}

u_char Run(){
    machine m = machine({0});
    return 0;
}