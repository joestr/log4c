/* $Id$
 *
 * Copyright 2001-2003, Meiosys (www.meiosys.com). All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */

#ifndef __log4c_defs_h
#define __log4c_defs_h

/**
 * @file defs.h
 *
 * @brief types and declarations enclosures for C++.
 *
 **/   

#ifdef  __cplusplus
# define __LOG4C_BEGIN_DECLS  extern "C" {
# define __LOG4C_END_DECLS    }
#else
# define __LOG4C_BEGIN_DECLS
# define __LOG4C_END_DECLS
#endif

#define LOG4C_INLINE inline
#define LOG4C_API    extern

#ifdef _WIN32
# include <log4c/config-win32.h>
#endif

#endif /* __log4c_defs_h */
