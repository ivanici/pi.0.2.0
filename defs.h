#ifndef COMMON_DEFS
#define COMMON_DEFS

#define D7 2
#define D6 3
#define D5 4
#define D4 5
#define EN 11
#define RS 12

enum horizontalPosition_t {CENTER_H, LEFT, RIGHT};
enum verticalPosition_t {CENTER_V, TOP, BOTTOM};

enum states {main, empty, fill};
int state = main;

#endif
