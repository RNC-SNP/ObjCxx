#define MALLOC(type, length) (\
reinterpret_cast<type>(malloc(length))\
)
