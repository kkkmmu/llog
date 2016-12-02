/*
 * =====================================================================================
 *
 *       Filename:  llog.h
 *
 *    Description:  A colorful syslog library for C language.
 *
 *        Version:  1.0
 *        Created:  02/12/16 13:01:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kkkmmu, 
 *   Organization:  
 *
 * =====================================================================================
 */

#if !defined __LLOG_H__
#define __LLOG_H__
enum llog_level {
    DEBUG,
    INFO,
    WARN,
    ERROR,
    FATAL,
    LEVEL_MAX,
};

void llog(enum llog_level level, const char *fmt, ...);
#endif /* __LLOG_H__ */
