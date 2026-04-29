// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include <string.h>

long int strtol(const char* nptr, char** endptr, int base)
{
    return (long int)strtoul(nptr, endptr, base);
}

/* GCC 13+ with glibc 2.38+ redirects strtol to __isoc23_strtol */
long int __isoc23_strtol(const char* nptr, char** endptr, int base)
{
    return strtol(nptr, endptr, base);
}
