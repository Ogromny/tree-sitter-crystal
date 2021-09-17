#ifndef TS_CRYSTAL_HEREDOCS_H
#define TS_CRYSTAL_HEREDOCS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char **HeredocsArray;
typedef char *HeredocsString;

// TODO: serializer

static void debug(char const *const str)
{
    printf("%s: %s\n", "[HEREDOCS]", str);
    fflush(stdout);
}

// used to create a string easily
static HeredocsString heredocs_string_append(HeredocsString self, char c)
{
    if (!self) {
        self = (HeredocsString)calloc(1, sizeof(char));
        debug("created a new string");
    }

    size_t length = strlen(self);
    size_t new_length = sizeof(char) * (length + 2); // c + NUL

    self = (HeredocsString)realloc(self, new_length);
    self[length] = c;
    self[length + 1] = '\0';

    return self;
}

static void heredocs_string_free(HeredocsString *self)
{
    if (*self) {
        debug("freed a string");
        free(*self);
        self = NULL;
    }
}

static size_t heredocs_array_cursor(HeredocsArray self)
{
    if (!self) {
        return 0;
    }

    size_t cursor = 0;
    for (; self[cursor]; ++cursor)
        ;
    return cursor;
}

static void heredocs_array_append(HeredocsArray *self, HeredocsString str)
{
    size_t cursor = heredocs_array_cursor(*self);
    size_t new_length = sizeof(HeredocsString) * (cursor + 2); // str + NULL

    *self = (HeredocsArray)realloc(*self, new_length);
    *self[cursor] = str;
    *self[cursor + 1] = NULL;
}

static bool heredocs_array_pop(HeredocsArray *self)
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

static char *heredocs_array_current(HeredocsArray self)
{
    size_t cursor = heredocs_array_cursor(self);

    if (!cursor) {
        return NULL;
    }

    return self[cursor - 1];
}

static void heredocs_array_free(HeredocsArray *self)
{
    while (heredocs_array_pop(self))
        ;
}

#endif // !TS_CRYSTAL_HEREDOCS_H
