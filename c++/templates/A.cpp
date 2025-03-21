#include "A.h"
template <class T>
void reallyBigA(T* t) { /* ... */ }
// Causes compiler to instantiate and therefore actually compile the function
template void reallyBigA<int>(int*);
