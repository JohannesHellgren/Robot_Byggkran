/*
 * lab4_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "lab4".
 *
 * Model version              : 1.100
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Dec 03 08:45:16 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&lab4_B.DataTypeConversion4), 0, 0, 2 },

  { (char_T *)(&lab4_B.TmpSignalConversionAtDUEInport5[0]), 1, 0, 3 },

  { (char_T *)(&lab4_B.DUE_o4[0]), 6, 0, 3 },

  { (char_T *)(&lab4_B.DataTypeConversion[0]), 4, 0, 6 },

  { (char_T *)(&lab4_B.TmpSignalConversionAtDUEInport2[0]), 5, 0, 4 },

  { (char_T *)(&lab4_B.TmpSignalConversionAtDUEInport1[0]), 3, 0, 4 }
  ,

  { (char_T *)(&lab4_DW.DUE_DSTATE), 0, 0, 1 },

  { (char_T *)(&lab4_DW.D8D15_PWORK.LoggedData), 11, 0, 10 },

  { (char_T *)(&lab4_DW.ToFile_IWORK.Count), 10, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  9U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&lab4_P.Motor0PWM_Value), 0, 0, 3 },

  { (char_T *)(&lab4_P.PvalueCurrent_Value), 1, 0, 3 },

  { (char_T *)(&lab4_P.DUE_P2), 7, 0, 1 },

  { (char_T *)(&lab4_P.SamplerateCurrentus_Value), 5, 0, 2 },

  { (char_T *)(&lab4_P.Notinuse_Value), 3, 0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] lab4_dt.h */
