#ifndef TS_CRYSTAL_HEREDOCS_H
#define TS_CRYSTAL_HEREDOCS_H

#include <cstddef>
#include <stdlib.h>
#include <string.h>

// used to create a string easily
static char *heredocs_string_append(char *self, char c)
{
    if (!self) {
        self = (char *)calloc(1, sizeof(char));
    }

    size_t length = strlen(self);
    size_t new_length = sizeof(char) * (length + 2); // c + NUL

    self = (char *)realloc(self, new_length);
    self[length] = c;
    self[length + 1] = '\0';
}

static void heredocs_string_free(char **self)
{
    if (*self) {
        free(*self);
        self = NULL;
    }
}

static size_t heredocs_array_cursor(char **self)
{
    if (!self) {
        return 0;
    }

    size_t cursor = 0;
    for (; self[cursor]; ++cursor)
        ;
    return cursor;
}

static void heredocs_array_append(char ***self, char *str)
{
    size_t cursor = heredocs_array_cursor(*self);
    size_t new_length = sizeof(char *) * (cursor + 2); // str + NULL

    *self = (char **)realloc(*self, new_length);
    *self[cursor] = str;
    *self[cursor + 1] = NULL;
}

static bool heredocs_array_pop(char ***self)
{
    size_t cursor = heredocs_array_cursor(*self);

    if (!cursor) {
        if (*self) {
            free(*self);
            *self = NULL;
        }

        return false;
    }

    free((*self)[0]);

    for (size_t i = 0; i < cursor; ++i) {
        (*self)[i] = (*self)[i + 1];
    }

    return true;
}

static char *heredocs_array_current(char **self)
{
    size_t cursor = heredocs_array_cursor(self);

    if (!cursor) {
        return NULL;
    }

    return self[cursor - 1];
}

static void heredocs_array_free(char ***self)
{
    while (heredocs_array_pop(self))
        ;
}

#endif // !TS_CRYSTAL_HEREDOCS_H
