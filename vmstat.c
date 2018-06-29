#include "types.h"
#include "stat.h"
#include "user.h"

int main()
{
    int n=nfpgs();
    printf(1, "Used physical memory:%dBytes\n", 240*1024-4096*n);
    printf(1, "Avalible physical memory:%dBytes\n", 4096*n);
    n=getsharedpages();
    printf(1, "Used shared memory:%dBytes\n",4096*n);
    printf(1, "Avalible shared memory:%dBytes\n",1024*(4096-n));
    showproc();
    //bug:每次稳步减少25页...
    //todo:共享内存使用情况、进程队列情况、空闲内存情况(即nfpgs)、已使用内存情况等
    exit();
}