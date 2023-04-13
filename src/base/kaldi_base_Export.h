
#ifndef kaldi_base_EXPORT_H
#define kaldi_base_EXPORT_H

#ifdef kaldi_base_BUILT_AS_STATIC
#  define kaldi_base_EXPORT
#  define KALDI_base_NO_EXPORT
#else
#ifdef _WIN32
#  ifndef kaldi_base_EXPORT
#    ifdef kaldi_base_EXPORTS
        /* We are building this library */
#      define kaldi_base_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define kaldi_base_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KALDI_BASE_NO_EXPORT
#    define KALDI_BASE_NO_EXPORT 
#  endif
#else
        #define kaldi_base_EXPORT
#endif // _WIN32
#endif

#ifndef KALDI_BASE_DEPRECATED
#  define KALDI_BASE_DEPRECATED __declspec(deprecated)
#endif

#ifndef KALDI_BASE_DEPRECATED_EXPORT
#  define KALDI_BASE_DEPRECATED_EXPORT kaldi_base_EXPORT KALDI_BASE_DEPRECATED
#endif

#ifndef KALDI_BASE_DEPRECATED_NO_EXPORT
#  define KALDI_BASE_DEPRECATED_NO_EXPORT KALDI_BASE_NO_EXPORT KALDI_BASE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KALDI_BASE_NO_DEPRECATED
#    define KALDI_BASE_NO_DEPRECATED
#  endif
#endif

#endif /* kaldi_base_EXPORT_H */
