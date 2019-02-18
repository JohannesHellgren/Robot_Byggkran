/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lab1_data.c
 *
 * Code generated for Simulink model 'lab1'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Oct 16 16:41:03 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab1.h"
#include "lab1_private.h"

/* Block parameters (auto storage) */
P_lab1_T lab1_P = {
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                        * Referenced by: '<S1>/UD'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  568.0,                               /* Expression: 568
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 1 PWM'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 0 Speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 1 Speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  58.59375,                            /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S1>/TSamp'
                                        */
  1.1F,                                /* Computed Parameter: PvalueCurrent_Value
                                        * Referenced by: '<S2>/P-value Current'
                                        */
  1.2F,                                /* Computed Parameter: PvalueSpeed_Value
                                        * Referenced by: '<S2>/P-value Speed'
                                        */
  1.3F,                                /* Computed Parameter: IvalueSpeed_Value
                                        * Referenced by: '<S2>/I-value Speed'
                                        */
  4000000U,                            /* Expression: uint32(4000000)
                                        * Referenced by: '<Root>/DUE'
                                        */
  0U,                                  /* Computed Parameter: SamplerateCurrentus_Value
                                        * Referenced by: '<S3>/Sample-rate Current [us]'
                                        */
  0U,                                  /* Computed Parameter: SamplerateSpeedms_Value
                                        * Referenced by: '<S3>/Sample rate Speed [ms]'
                                        */
  0U,                                  /* Computed Parameter: Notinuse_Value
                                        * Referenced by: '<S5>/Not in use'
                                        */
  2U,                                  /* Computed Parameter: Select_Value
                                        * Referenced by: '<S5>/Select'
                                        */
  0U,                                  /* Computed Parameter: D0D7_Value
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
