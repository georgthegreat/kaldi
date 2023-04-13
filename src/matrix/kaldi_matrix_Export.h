
#ifndef kaldi_matrix_EXPORT_H
#define kaldi_matrix_EXPORT_H

#ifdef kaldi_matrix_BUILT_AS_STATIC
#  define kaldi_matrix_EXPORT
#  define KALDI_matrix_NO_EXPORT
#else
#ifdef _WIN32
#  ifndef kaldi_matrix_EXPORT
#    ifdef kaldi_matrix_EXPORTS
        /* We are building this library */
#      define kaldi_matrix_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define kaldi_matrix_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KALDI_MATRIX_NO_EXPORT
#    define KALDI_MATRIX_NO_EXPORT 
#  endif
#else
        #define kaldi_matrix_EXPORT
#endif // _WIN32
#endif

#ifndef KALDI_MATRIX_DEPRECATED
#  define KALDI_MATRIX_DEPRECATED __declspec(deprecated)
#endif

#ifndef KALDI_MATRIX_DEPRECATED_EXPORT
#  define KALDI_MATRIX_DEPRECATED_EXPORT kaldi_matrix_EXPORT KALDI_MATRIX_DEPRECATED
#endif

#ifndef KALDI_MATRIX_DEPRECATED_NO_EXPORT
#  define KALDI_MATRIX_DEPRECATED_NO_EXPORT KALDI_MATRIX_NO_EXPORT KALDI_MATRIX_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KALDI_MATRIX_NO_DEPRECATED
#    define KALDI_MATRIX_NO_DEPRECATED
#  endif
#endif

#endif /* kaldi_matrix_EXPORT_H */
