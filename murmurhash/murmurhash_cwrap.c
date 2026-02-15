/* C wrapper that calls the C++ functions through their mangled names */
#include <stdint.h>

/* Forward-declare the C++ mangled functions */
extern uint64_t _Z13MurmurHash64APKviy(const void *key, int len, uint64_t seed);
extern uint64_t _Z13MurmurHash64BPKviy(const void *key, int len, uint64_t seed);
extern void _Z19MurmurHash3_x86_32PKviyPv(const void *key, int len, uint32_t seed, void *out);
extern void _Z20MurmurHash3_x86_128PKviiPv(const void *key, int len, int seed, void *out);
extern void _Z20MurmurHash3_x64_128PKviiPv(const void *key, int len, int seed, void *out);

uint64_t MurmurHash64A(const void *key, int len, uint64_t seed) {
    return _Z13MurmurHash64APKviy(key, len, seed);
}
uint64_t MurmurHash64B(const void *key, int len, uint64_t seed) {
    return _Z13MurmurHash64BPKviy(key, len, seed);
}
void MurmurHash3_x86_32(const void *key, uint64_t len, uint64_t seed, void *out) {
    _Z19MurmurHash3_x86_32PKviyPv(key, len, seed, out);
}
void MurmurHash3_x86_128(const void *key, int len, int seed, void *out) {
    _Z20MurmurHash3_x86_128PKviiPv(key, len, seed, out);
}
void MurmurHash3_x64_128(const void *key, int len, int seed, void *out) {
    _Z20MurmurHash3_x64_128PKviiPv(key, len, seed, out);
}
