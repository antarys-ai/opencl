#define CL_USE_DEPRECATED_OPENCL_1_2_APIS
#define CL_TARGET_OPENCL_VERSION 120

#if defined(__APPLE__)
    #include <OpenCL/cl.h>
    #pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#elif defined(_WIN32) || defined(_WIN64)
    #include <CL/cl.h>
    #include <CL/cl_ext.h>
    #ifdef __has_include
        #if __has_include(<CL/cl_gl.h>)
            #include <CL/cl_gl.h>
        #endif
    #endif
#else
    #include <CL/cl.h>
    #include <CL/cl_ext.h>
    #ifdef __has_include
        #if __has_include(<CL/cl_gl.h>)
            #include <CL/cl_gl.h>
        #endif
    #endif
#endif
