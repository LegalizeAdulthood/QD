/*
 * tests/timer.h
 *
 * This work was supported by the Director, Office of Science, Division
 * of Mathematical, Information, and Computational Sciences of the
 * U.S. Department of Energy under contract number DE-AC03-76SF00098.
 *
 * Copyright (c) 2000-2001
 *
 * Contains function used for timing.
 */

#ifndef TICTOC_H
#define TICTOC_H

#include <chrono>

struct tictoc
{
  using clock_type = std::chrono::high_resolution_clock;
  std::chrono::time_point<clock_type> start;
};

void   tic(tictoc *tv);   /* start timing. */
double toc(tictoc *tv);   /* stop  timing. */

#endif
