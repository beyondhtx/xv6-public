#include "types.h"
#include "stat.h"
#include "user.h"
#include "defs.h"

int main()
{
    cprintf(get_num_free_pages());
    exit(0);
}