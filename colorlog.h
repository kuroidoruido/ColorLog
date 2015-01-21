/**
 * A basic C/C++ color log macro.
 *
 * @author Anthony Pena <anthony.pena@outlook.fr>
 * @version 0.0.1
 */
#ifndef __COLOR_LOG__
#define __COLOR_LOG__

#ifdef _FULL_LOG
	#define _VERBOSE
	#define _WARNING
	#define _ALERT
	#define _INFO
	#define _SUCCESS
#endif

#ifdef _VERBOSE
	#include <stdio.h>
	#define VERBOSE(CTX,TXT) __LOG_COLOR(LOG_WHITE,CTX,TXT)
#else
	#define VERBOSE(CTX,TXT)
#endif

#ifdef _WARNING
	#include <stdio.h>
	#define WARNING(CTX,TXT) __LOG_COLOR(LOG_YELLOW,CTX,TXT)
#else
	#define WARNING(CTX,TXT)
#endif

#ifdef _INFO
	#include <stdio.h>
	#define INFO(CTX,TXT) __LOG_COLOR(LOG_BLUE,CTX,TXT)
#else
	#define INFO(CTX,TXT)
#endif

#ifdef _ALERT
	#include <stdio.h>
	#define ALERT(CTX,TXT) __LOG_COLOR(LOG_RED,CTX,TXT)
#else
	#define ALERT(CTX,TXT)
#endif

#ifdef _SUCCESS
	#include <stdio.h>
	#define SUCCESS(CTX,TXT) __LOG_COLOR(LOG_GREEN,CTX,TXT)
#else
	#define SUCCESS(CTX,TXT)
#endif

#if defined _VERBOSE || defined _WARNING || defined _INFO || defined _ALERT || defined _SUCCESS
	#define LOG_RED "1;31"
	#define LOG_GREEN "0;32"
	#define LOG_BLUE "1;34"
	#define LOG_YELLOW "0;33"
	#define LOG_WHITE "0;37"
	#define __LOG_COLOR(CLR,CTX,TXT) printf("  \033[%sm%s : %s\033[m\n",CLR,CTX,TXT)
#endif

#endif /* __COLOR_LOG__*/
