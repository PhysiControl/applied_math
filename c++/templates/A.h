#pragma once
template <class T>
void reallyBigA(T* t);
extern template void reallyBigA<int>(int*);
