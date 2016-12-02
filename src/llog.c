#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/time.h>
#include "llog.h"

#define LLOG_DATE_LEN  32
#define LLOG_MAX_LOG_LEN 1024

static char* color[LEVEL_MAX] = {
    "\033[1;37;40m", 
    "\033[1;36;40m", 
    "\033[1;33;40m", 
    "\033[1;35;40m", 
    "\033[1;31;40m" 
};

static char* level_str[LEVEL_MAX] = {"DEBUG", "INFO ", "WARN ", "ERROR", "FATAL"};

static char* getcurrenttime(char *buf, int size) {
    char time[LLOG_DATE_LEN];
    struct tm *day;
    struct timeval start;

    if (buf == NULL || size < LLOG_DATE_LEN)
        return NULL;

    gettimeofday(&start, NULL);
    day = localtime(&start.tv_sec);

    strftime(time, 256, "%F %T", day);
    sprintf(buf, "%s:%03lu:%03lu", time, start.tv_usec/1000, start.tv_usec%1000);
    return buf;
}

void llog(enum llog_level level, const char *fmt, ...) {
    char time[LLOG_DATE_LEN];
    char message[LLOG_MAX_LOG_LEN];
    va_list vars;

    if (level < DEBUG || level > FATAL || fmt == NULL) {
        printf("%s[%s][%s]: %s%s\n", color[2], getcurrenttime(time, LLOG_MAX_LOG_LEN), level_str[2], "Invalid Input parameters for llog.", " \033[0m");
        return;
    }

    va_start(vars, fmt);
    vsnprintf(message, LLOG_MAX_LOG_LEN, fmt, vars);
    va_end(vars);
    printf("%s[%s][%s]: %s%s\n", color[level], level_str[level], getcurrenttime(time, LLOG_DATE_LEN), message, " \033[0m");
}

