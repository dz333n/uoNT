
#undef ARRAYSIZE
#define ARRAYSIZE(array) (sizeof(array)/sizeof((array)[0]))

#define IS_INTRESOURCE(i) (((ULONG)(i) >> 16) == 0)
