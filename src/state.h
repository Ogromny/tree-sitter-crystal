#ifndef TS_CRYSTAL_STATE_H
#define TS_CRYSTAL_STATE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>

typedef struct {
    char start;
    char end;
    char depth;
} StringPercent;

typedef struct {
	char *name;
} Heredoc;

typedef struct {
    StringPercent sp;
	Heredoc rdoc;
} State;

State *state_new(void) { return (State *)calloc(1, sizeof(State)); }

void state_destroy(State *state) { free(state); }

unsigned state_serialize(State *state, char *buffer)
{
    size_t size = sizeof(State);
    memcpy(buffer, state, size);
    return size;
}

void state_deserialize(State *state, char const *buffer, unsigned length)
{
    memcpy(state, buffer, length);
}

#endif
