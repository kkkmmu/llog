/*
 * =====================================================================================
 *
 *       Filename:  llogmain.c
 *
 *    Description:  llog test program
 *
 *        Version:  1.0
 *        Created:  02/12/16 13:47:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "llog.h"
#define NDBUG

int main(int argc, char **argv) {

    llog(DEBUG, "%s", "Hello llog!"); 
    llog(INFO, "%s", "Hello llog!"); 
    llog(WARN, "%s", "Hello llog!"); 
    llog(ERROR, "%s", "Hello llog!"); 
    llog(FATAL, "%s", "Hello llog!"); 
    debug("%s----%d-----%f\n", "liwei", 10, 100.111);
    log_err("Welcome to: %s\n", "Beijing");
    log_warn("Go to: %s\n", "Hell");
    log_info("Stupid: %s\n", "apple");
    check(1, "%s", "Success\n");
    check(0, "%s", "Failure\n");
    check_mem(NULL);
    check_debug(NULL, "%s\n", "Debug NULL");
error:
    return 0;
}

