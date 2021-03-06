/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef SUM_H
#define SUM_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "shapeAnalyser_types.h"

/* Function Declarations */
extern real_T b_sum(const real_T x[180]);

#ifdef __WATCOMC__

#pragma aux b_sum value [8087];

#endif

extern void sum(const emlrtStack *sp, const emxArray_boolean_T *x, real_T y[180]);

#endif

/* End of code generation (sum.h) */
