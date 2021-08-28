#ifndef TS_CRYSTAL_STATE_H
#define TS_CRYSTAL_STATE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include "string_percent.h"
#include "heredocs.h"

typedef struct {
    StringPercent *string_percent;
	HeredocsArray heredocs_array;
} State;

static State *state_new(void)
{
    return (State *)calloc(1, sizeof(State));
}

static void state_destroy(State *state) { free(state); }

static unsigned state_serialize(State *state, char *buffer)
{
    size_t size = sizeof(State);
    memcpy(buffer, state, size);
    return size;
}

static void state_deserialize(State *state, char const *buffer,
                                     unsigned length)
{
    memcpy(state, buffer, length);
}

#endif
