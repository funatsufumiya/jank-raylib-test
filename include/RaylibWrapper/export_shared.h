
#ifndef RAYLIBWRAPPER_SHARED_EXPORT_H
#define RAYLIBWRAPPER_SHARED_EXPORT_H

#ifdef RAYLIBWRAPPER_SHARED_STATIC_DEFINE
#  define RAYLIBWRAPPER_SHARED_EXPORT
#  define RAYLIBWRAPPER_SHARED_NO_EXPORT
#else

#  ifndef RAYLIBWRAPPER_SHARED_EXPORT
#    if defined(_WIN32) || defined(_WIN64)
#      ifdef raylibwrapper_shared_EXPORTS
         /* We are building this library */
#        define RAYLIBWRAPPER_SHARED_EXPORT __declspec(dllexport)
#      else
         /* We are using this library */
#        define RAYLIBWRAPPER_SHARED_EXPORT __declspec(dllimport)
#      endif
#    else
         /* Non-Windows platforms */
#      define RAYLIBWRAPPER_SHARED_EXPORT
#    endif
#  endif

#  ifndef RAYLIBWRAPPER_SHARED_NO_EXPORT
#    define RAYLIBWRAPPER_SHARED_NO_EXPORT 
#  endif
#endif

#ifndef RAYLIBWRAPPER_SHARED_DEPRECATED
#  define RAYLIBWRAPPER_SHARED_DEPRECATED __declspec(deprecated)
#endif

#ifndef RAYLIBWRAPPER_SHARED_DEPRECATED_EXPORT
#  define RAYLIBWRAPPER_SHARED_DEPRECATED_EXPORT RAYLIBWRAPPER_SHARED_EXPORT RAYLIBWRAPPER_SHARED_DEPRECATED
#endif

#ifndef RAYLIBWRAPPER_SHARED_DEPRECATED_NO_EXPORT
#  define RAYLIBWRAPPER_SHARED_DEPRECATED_NO_EXPORT RAYLIBWRAPPER_SHARED_NO_EXPORT RAYLIBWRAPPER_SHARED_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RAYLIBWRAPPER_SHARED_NO_DEPRECATED
#    define RAYLIBWRAPPER_SHARED_NO_DEPRECATED
#  endif
#endif

#endif /* RAYLIBWRAPPER_SHARED_EXPORT_H */
