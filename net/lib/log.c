#include "common.h"
#include <stdarg.h>
#include <syslog.h>

#define MAXLINE 4096

void error(int status, int err, char *fmt, ...)
{
    va_list p;
    
    va_start(ap, fmt);
    vfprint
}
