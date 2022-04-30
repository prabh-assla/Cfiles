#define pois printf("control is in file B\n");
#ifdef pois
#include "filec.h"
#endif
#ifndef pinned
#define pinned printf("control is in file B\n");
#include "filed.h"
#endif