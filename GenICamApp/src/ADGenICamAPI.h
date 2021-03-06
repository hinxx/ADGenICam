/* This is a generated file, do not edit! */

#ifndef INC_ADGenICamAPI_H
#define INC_ADGenICamAPI_H

#include <epicsVersion.h>

#ifndef VERSION_INT
//! Construct version number constant.
#  define VERSION_INT(V,R,M,P) ( ((V)<<24) | ((R)<<16) | ((M)<<8) | (P))
#endif

#ifndef EPICS_VERSION_INT
#  define EPICS_VERSION_INT VERSION_INT(EPICS_VERSION, EPICS_REVISION, EPICS_MODIFICATION, EPICS_PATCH_LEVEL)
#endif

#if defined(_WIN32) && EPICS_VERSION_INT<VERSION_INT(3,15,0,0) && !defined(EPICS_DLL_NO)
#    define EPICS_BUILD_DLL
#    define EPICS_CALL_DLL
#endif

#if defined(_WIN32) || defined(__CYGWIN__)

#  if !defined(epicsStdCall)
#    define epicsStdCall __stdcall
#  endif

#  if defined(BUILDING_ADGenICam_API) && defined(EPICS_BUILD_DLL)
/* Building library as dll */
#    define ADGENICAM_API __declspec(dllexport)
#  elif !defined(BUILDING_ADGenICam_API) && defined(EPICS_CALL_DLL)
/* Calling library in dll form */
#    define ADGENICAM_API __declspec(dllimport)
#  endif

#elif __GNUC__ >= 4
#  define ADGENICAM_API __attribute__ ((visibility("default")))
#endif

#if !defined(ADGENICAM_API)
#  define ADGENICAM_API
#endif

#if !defined(epicsStdCall)
#  define epicsStdCall
#endif

#endif /* INC_ADGenICamAPI_H */

