/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lab4_private.h
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

#ifndef RTW_HEADER_lab4_private_h_
#define RTW_HEADER_lab4_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

extern void SPI_DUE_Outputs_wrapper(const uint8_T *Select,
  const uint16_T *Sample_Time,
  const int16_T *Set_Speed_DC,
  const int16_T *Set_Speed_Stepper,
  const real32_T *Controllers,
  const uint8_T *Set_Digital,
  uint8_T *Status,
  uint16_T *Current,
  int16_T *Motor_Speed,
  int32_T *Motor_Encoder,
  uint8_T *Read_Digital,
  int32_T *Stepper_Pos,
  const real_T *xD,
  const uint8_T *SPIChannel, const int_T p_width0,
  const uint32_T *SPIClock, const int_T p_width1);
extern void SPI_DUE_Update_wrapper(const uint8_T *Select,
  const uint16_T *Sample_Time,
  const int16_T *Set_Speed_DC,
  const int16_T *Set_Speed_Stepper,
  const real32_T *Controllers,
  const uint8_T *Set_Digital,
  uint8_T *Status,
  uint16_T *Current,
  int16_T *Motor_Speed,
  int32_T *Motor_Encoder,
  uint8_T *Read_Digital,
  int32_T *Stepper_Pos,
  real_T *xD,
  const uint8_T *SPIChannel, const int_T p_width0,
  const uint32_T *SPIClock, const int_T p_width1);
int_T rt_WriteMat4FileHeader(FILE *fp,
  int32_T m,
  int32_T n,
  const char_T *name);

#endif                                 /* RTW_HEADER_lab4_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
