#ifndef TS_CRYSTAL_UTILS_H
#define TS_CRYSTAL_UTILS_H

static int char_to_hex(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }

    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }

    return -1;
}

static int char_to_oct(char c)
{
    if (c >= '0' && c <= '7') {
        return c - '0';
    }

    return -1;
}

#endif // !TS_CRYSTAL_UTILS_H
