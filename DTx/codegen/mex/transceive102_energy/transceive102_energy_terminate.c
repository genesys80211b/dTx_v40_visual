/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * transceive102_energy_terminate.c
 *
 * Code generation for function 'transceive102_energy_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive102_energy.h"
#include "transceive102_energy_terminate.h"
#include "_coder_transceive102_energy_mex.h"
#include "transceive102_energy_data.h"

/* Function Definitions */
void transceive102_energy_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void transceive102_energy_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (transceive102_energy_terminate.c) */
