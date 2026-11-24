#ifndef RUTILE_H
#define RUTILE_H


typedef struct rt_buffer_t* rt_buffer;
typedef struct rt_texture_t* rt_texture;



typedef enum rt_error {
	RT_ERROR_NONE,
	RT_ERROR_INIT_FAILED,
} rt_error;
// Loader



// Runtime

rt_error rtGetError(void);
const char* rtGetMessage(void);

void rtInit(void);
void rtExit(void);



#define RT_CORE_PROC(X) \
X(void, rtInit, void) \
X(void, rtExit, void) 


#define X(result, name, args) name
X(void, rtInit, void) X(void, rtExit, void)
#undef X


#define X(result, name, args) typedef result(*FN_##name(args));
RT_CORE_PROC(X)
#undef X


#endif /* RUTILE_H */