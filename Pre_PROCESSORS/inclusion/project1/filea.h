#define poison printf("control is in file A\n");
#ifdef poison
#include "fileb.h"
#endif