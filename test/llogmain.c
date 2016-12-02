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

int main(int argc, char **argv) {

    llog(DEBUG, "%s", "Hello llog!"); 
    llog(INFO, "%s", "Hello llog!"); 
    llog(WARN, "%s", "Hello llog!"); 
    llog(ERROR, "%s", "Hello llog!"); 
    llog(FATAL, "%s", "Hello llog!"); 
    return 0;
}

