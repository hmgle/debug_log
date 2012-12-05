#include "debug_log.h"

void foo(int a)
{
    debug_log("test");
    printf("a is %d\n", a);
    return;
}
