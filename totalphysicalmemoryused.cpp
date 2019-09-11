#include "sys/types.h"
#include "sys/sysinfo.h"

struct sysinfo memInfo;

sysinfo (&memInfo);
long long totalVirtualMem = memInfo.totalram;
//Add other values in next statement to avoid int overflow on right hand side...
totalVirtualMem += memInfo.totalswap;
totalVirtualMem *= memInfo.mem_unit;
long long totalPhysMem = memInfo.totalram;
//Multiply in next statement to avoid int overflow on right hand side...
totalPhysMem *= memInfo.mem_unit;

