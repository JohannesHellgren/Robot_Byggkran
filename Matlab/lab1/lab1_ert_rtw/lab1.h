/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lab1.h
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

#ifndef RTW_HEADER_lab1_h_
#define RTW_HEADER_lab1_h_
#include <stddef.h>
#include <math.h>
#include <float.h>
#include <string.h>
#ifndef lab1_COMMON_INCLUDES_
# define lab1_COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* lab1_COMMON_INCLUDES_ */

#include "lab1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion4;          /* '<Root>/Data Type Conversion4' */
  real_T Diff;                         /* '<S1>/Diff' */
  real_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  real32_T TmpSignalConversionAtDUEInport5[3];/* '<Root>/Not in use' */
  int32_T DUE_o4[2];                   /* '<Root>/DUE' */
  int32_T DUE_o6;                      /* '<Root>/DUE' */
  int16_T DataTypeConversion[4];       /* '<Root>/Data Type Conversion' */
  int16_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  int16_T DUE_o3[2];                   /* '<Root>/DUE' */
  uint16_T TmpSignalConversionAtDUEInport2[2];/* '<Root>/Not in use 1' */
  uint16_T DUE_o2[2];                  /* '<Root>/DUE' */
  uint8_T TmpSignalConversionAtDUEInport1[2];/* '<Root>/Select Controller' */
  uint8_T DUE_o1;                      /* '<Root>/DUE' */
  uint8_T DUE_o5;                      /* '<Root>/DUE' */
} B_lab1_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DUE_DSTATE;                   /* '<Root>/DUE' */
  real_T UD_DSTATE;                    /* '<S1>/UD' */
  struct {
    void *LoggedData;
  } D8D15_PWORK;                       /* '<Root>/D8-D15' */

  struct {
    void *LoggedData;
  } EncoderM0_PWORK;                   /* '<Root>/Encoder M0' */

  struct {
    void *LoggedData;
  } EncoderM1_PWORK;                   /* '<Root>/Encoder M1' */

  struct {
    void *LoggedData;
  } Error_PWORK;                       /* '<Root>/Error' */

  struct {
    void *LoggedData;
  } CurrentM0_PWORK;                   /* '<S4>/Current M0' */

  struct {
    void *LoggedData;
  } CurrentM1_PWORK;                   /* '<S4>/Current M1' */

  struct {
    void *LoggedData;
  } RPM_PWORK;                         /* '<Root>/RPM' */

  struct {
    void *LoggedData;
  } SpeedM0_PWORK;                     /* '<Root>/Speed M0' */

  struct {
    void *LoggedData;
  } SpeedM1_PWORK;                     /* '<Root>/Speed M1' */

  struct {
    void *LoggedData;
  } StepperPos_PWORK;                  /* '<Root>/Stepper Pos' */

  struct {
    void *FilePtr;
  } ToFile_PWORK;                      /* '<Root>/To File' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK;                      /* '<Root>/To File' */
} DW_lab1_T;

/* Parameters (auto storage) */
struct P_lab1_T_ {
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S1>/UD'
                                          */
  real_T Motor0PWM_Time;               /* Expression: 1
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  real_T Motor0PWM_Y0;                 /* Expression: 0
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  real_T Motor0PWM_YFinal;             /* Expression: 568
                                        * Referenced by: '<Root>/Motor 0 PWM'
                                        */
  real_T Motor1PWM_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Motor 1 PWM'
                                        */
  real_T Motor0Speed_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Motor 0 Speed'
                                        */
  real_T Motor1Speed_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Motor 1 Speed'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S1>/TSamp'
                                        */
  real32_T PvalueCurrent_Value;        /* Computed Parameter: PvalueCurrent_Value
                                        * Referenced by: '<S2>/P-value Current'
                                        */
  real32_T PvalueSpeed_Value;          /* Computed Parameter: PvalueSpeed_Value
                                        * Referenced by: '<S2>/P-value Speed'
                                        */
  real32_T IvalueSpeed_Value;          /* Computed Parameter: IvalueSpeed_Value
                                        * Referenced by: '<S2>/I-value Speed'
                                        */
  uint32_T DUE_P2;                     /* Expression: uint32(4000000)
                                        * Referenced by: '<Root>/DUE'
                                        */
  uint16_T SamplerateCurrentus_Value;  /* Computed Parameter: SamplerateCurrentus_Value
                                        * Referenced by: '<S3>/Sample-rate Current [us]'
                                        */
  uint16_T SamplerateSpeedms_Value;    /* Computed Parameter: SamplerateSpeedms_Value
                                        * Referenced by: '<S3>/Sample rate Speed [ms]'
                                        */
  uint8_T Notinuse_Value;              /* Computed Parameter: Notinuse_Value
                                        * Referenced by: '<S5>/Not in use'
                                        */
  uint8_T Select_Value;                /* Computed Parameter: Select_Value
                                        * Referenced by: '<S5>/Select'
                                        */
  uint8_T D0D7_Value;                  /* Computed Parameter: D0D7_Value
                                        * Referenced by: '<Root>/D0-D7'
                                        */
  uint8_T DUE_P1;                      /* Expression: uint8(1)
                                        * Referenced by: '<Root>/DUE'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_lab1_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_lab1_T lab1_P;

/* Block signals (auto storage) */
extern B_lab1_T lab1_B;

/* Block states (auto storage) */
extern DW_lab1_T lab1_DW;

/* Model entry point functions */
extern void lab1_initialize(void);
extern void lab1_step(void);
extern void lab1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_lab1_T *const lab1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Duplicate' : Unused code path elimination
 * Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'lab1'
 * '<S1>'   : 'lab1/Discrete Derivative'
 * '<S2>'   : 'lab1/Not in use'
 * '<S3>'   : 'lab1/Not in use 1'
 * '<S4>'   : 'lab1/Not in use 2'
 * '<S5>'   : 'lab1/Select Controller'
 */
#endif                                 /* RTW_HEADER_lab1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
