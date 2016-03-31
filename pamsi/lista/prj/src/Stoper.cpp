#include "Stoper.h"


void Stoper::start() {
  start = clock();
}

void Stoper::stop() {
  stop = clock();
}

double Stoper::getElapsedTime() {
  return static_cast<double>(stop-start) / CLOCKS_PER_SEC*1000;
}
