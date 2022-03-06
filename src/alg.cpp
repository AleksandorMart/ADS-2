// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
if (n == 0) return 1;
return (value * pow(valur, n-1));
}

uint64_t fact(uint16_t n) {
if (n == 0) return 1;
return (n * fact(n-1));
}

double calcItem(double x, uint16_t n) {
return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
if (count == 0) return 1;
return (calcItem(x, count) + expn(x, count-1));
}

double sinn(double x, uint16_t count) {
if (count == 1) return x;
if (count % 2 == 0) return (sinn(x, count-1) - calcItem(x, 2*count-1));
if (count % 2 != 0) return (sinn(x, count-1) + calcItem(x, 2*count-1));
}

double cosn(double x, uint16_t count) {
if (count == 1) return 1;
if (count % 2 == 0) return (cosn(x, count-1) - calcItem(x, 2*count-2));
if (count % 2 != 0) return (cosn(x, count-1) + calcItem(x, 2*count-2));
}
