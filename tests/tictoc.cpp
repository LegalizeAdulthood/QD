/*
 * tests/tictoc.cpp
 *
 * This work was supported by the Director, Office of Science, Division
 * of Mathematical, Information, and Computational Sciences of the
 * U.S. Department of Energy under contract number DE-AC03-76SF00098.
 *
 * Copyright (c) 2000-2006
 *
 * Contains function used for timing.
 */

#include "tictoc.h"

void tic(tictoc *tv) {
  tv->start = tictoc::clock_type::now();
}

double toc(tictoc *tv) {
  using duration_t = std::chrono::duration<double>;
  return std::chrono::duration_cast<duration_t>(tictoc::clock_type::now() - tv->start).count();
}
