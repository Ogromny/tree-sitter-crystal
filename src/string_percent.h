#ifndef TS_CRYSTAL_STRING_PERCENT_H
#define TS_CRYSTAL_STRING_PERCENT_H

#include <stdlib.h>

typedef struct {
    char start;
    char end;
    int depth;
} StringPercent;

static StringPercent *string_percent_new(void)
{
    return (StringPercent *)calloc(1, sizeof(StringPercent));
}

static void string_percent_free(StringPercent **self) {
	if (*self) {
		free(*self);
		*self = NULL;
	}
}


#endif // ! TS_CRYSTAL_STRING_PERCENT_H
