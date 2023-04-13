
#ifndef kaldi_util_EXPORT_H
#define kaldi_util_EXPORT_H

#ifdef kaldi_util_BUILT_AS_STATIC
#  define kaldi_util_EXPORT
#  define KALDI_util_NO_EXPORT
#else
#ifdef _WIN32
#  ifndef kaldi_util_EXPORT
#    ifdef kaldi_util_EXPORTS
        /* We are building this library */
#      define kaldi_util_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define kaldi_util_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KALDI_UTIL_NO_EXPORT
#    define KALDI_UTIL_NO_EXPORT 
#  endif
#else
        #define kaldi_util_EXPORT
#endif // _WIN32
#endif

#ifndef KALDI_UTIL_DEPRECATED
#  define KALDI_UTIL_DEPRECATED __declspec(deprecated)
#endif

#ifndef KALDI_UTIL_DEPRECATED_EXPORT
#  define KALDI_UTIL_DEPRECATED_EXPORT kaldi_util_EXPORT KALDI_UTIL_DEPRECATED
#endif

#ifndef KALDI_UTIL_DEPRECATED_NO_EXPORT
#  define KALDI_UTIL_DEPRECATED_NO_EXPORT KALDI_UTIL_NO_EXPORT KALDI_UTIL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KALDI_UTIL_NO_DEPRECATED
#    define KALDI_UTIL_NO_DEPRECATED
#  endif
#endif

#endif /* kaldi_util_EXPORT_H */
