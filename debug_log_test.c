#include "debug_log.h"

void foo(int a);

int main(int argc, char **argv)
{
    open_debug_log("_test_debug.log");
    foo(43);
    debug_log("test %s %d", "debug_log", __LINE__);
    close_debug_log();
    return 0;
}

