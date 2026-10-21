#ifndef SAFE_ARRAY_H
#define SAFE_ARRAY_H

#define T int
#include "Array.def"
#undef T

#define T char
#include "Array.def"
#undef T

#define T double
#include "Array.def"
#undef T

#endif // SAFE_ARRAY_H
