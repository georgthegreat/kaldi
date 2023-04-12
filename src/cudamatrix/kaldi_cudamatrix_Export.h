
#ifndef kaldi_cudamatrix_EXPORT_H
#define kaldi_cudamatrix_EXPORT_H

#ifdef kaldi_cudamatrix_BUILT_AS_STATIC
#  define kaldi_cudamatrix_EXPORT
#  define KALDI_CUDAMATRIX_NO_EXPORT
#else
#ifdef _WIN32
#  ifndef kaldi_cudamatrix_EXPORT
#    ifdef kaldi_cudamatrix_EXPORTS
        /* We are building this library */
#      define kaldi_cudamatrix_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define kaldi_cudamatrix_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KALDI_CUDAMATRIX_NO_EXPORT
#    define KALDI_CUDAMATRIX_NO_EXPORT 
#  endif
#else
        #define kaldi_cudamatrix_EXPORT
#endif // _WIN32
#endif

#ifndef KALDI_CUDAMATRIX_DEPRECATED
#  define KALDI_CUDAMATRIX_DEPRECATED __declspec(deprecated)
#endif

#ifndef KALDI_CUDAMATRIX_DEPRECATED_EXPORT
#  define KALDI_CUDAMATRIX_DEPRECATED_EXPORT kaldi_cudamatrix_EXPORT KALDI_CUDAMATRIX_DEPRECATED
#endif

#ifndef KALDI_CUDAMATRIX_DEPRECATED_NO_EXPORT
#  define KALDI_CUDAMATRIX_DEPRECATED_NO_EXPORT KALDI_CUDAMATRIX_NO_EXPORT KALDI_CUDAMATRIX_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KALDI_CUDAMATRIX_NO_DEPRECATED
#    define KALDI_CUDAMATRIX_NO_DEPRECATED
#  endif
#endif

#endif /* kaldi_cudamatrix_EXPORT_H */
