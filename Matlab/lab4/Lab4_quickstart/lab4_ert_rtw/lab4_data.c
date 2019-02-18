/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lab4_data.c
 *
 * Code generated for Simulink model 'lab4'.
 *
 * Model version                  : 1.100
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Dec 03 08:45:16 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab4.h"
#include "lab4_private.h"

/* Block parameters (auto storage) */
P_lab4_T lab4_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 1 PWM'
                                        */
  200.0,                               /* Expression: 200
                                        * Referenced by: '<Root>/Constant1'
                                        */
  1.1F,                                /* Computed Parameter: PvalueCurrent_Value
                                        * Referenced by: '<S4>/P-value Current'
                                        */
  1.2F,                                /* Computed Parameter: PvalueSpeed_Value
                                        * Referenced by: '<S4>/P-value Speed'
                                        */
  1.3F,                                /* Computed Parameter: IvalueSpeed_Value
                                        * Referenced by: '<S4>/I-value Speed'
                                        */
  4000000U,                            /* Expression: uint32(4000000)
                                        * Referenced by: '<Root>/DUE'
                                        */
  0U,                                  /* Computed Parameter: SamplerateCurrentus_Value
                                        * Referenced by: '<S5>/Sample-rate Current [us]'
                                        */
  0U,                                  /* Computed Parameter: SamplerateSpeedms_Value
                                        * Referenced by: '<S5>/Sample rate Speed [ms]'
                                        */
  0U,                                  /* Computed Parameter: Notinuse_Value
                                        * Referenced by: '<S7>/Not in use'
                                        */
  1U,                                  /* Computed Parameter: Select_Value
                                        * Referenced by: '<S7>/Select'
                                        */
  64U,                                 /* Computed Parameter: D0D7_Value
                                        * Referenced by: '<Root>/D0-D7'
                                        */
  1U                                   /* Expression: uint8(1)
                                        * Referenced by: '<Root>/DUE'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
