#include <stdio.h>
#include <string.h>

#define DEBUG 1
#if DEBUG
FILE *DEBUG_LOG_FILE;
char DEBUG_STRING[1024];
#else
FILE *DEBUG_LOG_FILE;
char *DEBUG_STRING;
#endif

#define init_debug_log() do { \
    if (DEBUG) { \
        DEBUG_LOG_FILE = fopen("_degug_log.txt", "w"); \
    } \
} while (0)

#define debug_log(fmt, ...) do { \
    if (DEBUG) { \
        snprintf(DEBUG_STRING, 1023, "%s: %s(): %d: " fmt "\n", __FILE__, __func__, __LINE__, ##__VA_ARGS__); \
        fwrite(DEBUG_STRING, 1, strlen(DEBUG_STRING), DEBUG_LOG_FILE); \
    } \
} while (0)

#define close_debug_log() do { \
    if (DEBUG) { \
        fclose(DEBUG_LOG_FILE); \
    } \
} while (0)

int main(int argc, char **argv)
{
    init_debug_log();
    debug_log("test %s %d", "debug_log", __LINE__);
    close_debug_log();
    return 0;
}

