#include <stdint.h>

/* Forward-declare the C++ mangled functions from MurmurHash2.cpp */
extern uint64_t _Z13MurmurHash64APKviy(const void *key, int len, uint64_t seed);
extern uint64_t _Z13MurmurHash64BPKviy(const void *key, int len, uint64_t seed);

/* Provide C-linkage wrappers */
uint64_t MurmurHash64A(const void *key, int len, uint64_t seed) {
    return _Z13MurmurHash64APKviy(key, len, seed);
}
uint64_t MurmurHash64B(const void *key, int len, uint64_t seed) {
    return _Z13MurmurHash64BPKviy(key, len, seed);
}
