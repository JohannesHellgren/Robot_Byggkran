/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lab4.c
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
#include "lab4_dt.h"

const int16_T lab4_I16GND = 0;         /* int16_T ground */

/* Block signals (auto storage) */
B_lab4_T lab4_B;

/* Block states (auto storage) */
DW_lab4_T lab4_DW;

/* Real-time model */
RT_MODEL_lab4_T lab4_M_;
RT_MODEL_lab4_T *const lab4_M = &lab4_M_;

/*
 * Writes out MAT-file header.  Returns success or failure.
 * Returns:
 *      0 - success
 *      1 - failure
 */
int_T rt_WriteMat4FileHeader(FILE *fp, int32_T m, int32_T n, const char *name)
{
  typedef enum { ELITTLE_ENDIAN, EBIG_ENDIAN } ByteOrder;

  int16_T one = 1;
  ByteOrder byteOrder = (*((int8_T *)&one)==1) ? ELITTLE_ENDIAN : EBIG_ENDIAN;
  int32_T type = (byteOrder == ELITTLE_ENDIAN) ? 0: 1000;
  int32_T imagf = 0;
  int32_T name_len = (int32_T)strlen(name) + 1;
  if ((fwrite(&type, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&m, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&n, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&imagf, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&name_len, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(name, sizeof(char), name_len, fp) == 0)) {
    return(1);
  } else {
    return(0);
  }
}                                      /* end rt_WriteMat4FileHeader */

/* Model step function */
void lab4_step(void)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion3[3];
  real_T tmp;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDUEInport1' incorporates:
   *  Constant: '<S7>/Not in use'
   *  Constant: '<S7>/Select'
   */
  lab4_B.TmpSignalConversionAtDUEInport1[0] = lab4_P.Notinuse_Value;
  lab4_B.TmpSignalConversionAtDUEInport1[1] = lab4_P.Select_Value;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDUEInport2' incorporates:
   *  Constant: '<S5>/Sample rate Speed [ms]'
   *  Constant: '<S5>/Sample-rate Current [us]'
   */
  lab4_B.TmpSignalConversionAtDUEInport2[0] = lab4_P.SamplerateCurrentus_Value;
  lab4_B.TmpSignalConversionAtDUEInport2[1] = lab4_P.SamplerateSpeedms_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Motor 0 PWM'
   *  Constant: '<Root>/Motor 1 PWM'
   */
  tmp = floor(lab4_P.Motor0PWM_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  lab4_B.DataTypeConversion[0] = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);
  tmp = floor(lab4_P.Motor1PWM_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  lab4_B.DataTypeConversion[1] = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);
  tmp = floor(lab4_P.Constant1_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  lab4_B.DataTypeConversion[2] = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);
  tmp = floor(0.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  lab4_B.DataTypeConversion[3] = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDUEInport5' incorporates:
   *  Constant: '<S4>/I-value Speed'
   *  Constant: '<S4>/P-value Current'
   *  Constant: '<S4>/P-value Speed'
   */
  lab4_B.TmpSignalConversionAtDUEInport5[0] = lab4_P.PvalueCurrent_Value;
  lab4_B.TmpSignalConversionAtDUEInport5[1] = lab4_P.PvalueSpeed_Value;
  lab4_B.TmpSignalConversionAtDUEInport5[2] = lab4_P.IvalueSpeed_Value;

  /*
   * Block description for '<Root>/DUE':
   *  Set_Speed_DC: 1 <=> 100 encoder pulses / sec
   *  Set_Speed_Stepper: 1 <=> 1Hz

   */

  /* S-Function (SPI_DUE): '<Root>/DUE'
   *
   * Block description for '<Root>/DUE':
   *   Set_Speed_DC: 1 <=> 100 encoder pulses / sec
   *   Set_Speed_Stepper: 1 <=> 1Hz
   */
  SPI_DUE_Outputs_wrapper(&lab4_B.TmpSignalConversionAtDUEInport1[0],
    &lab4_B.TmpSignalConversionAtDUEInport2[0], &lab4_B.DataTypeConversion[0],
    (int16_T*)&lab4_I16GND, &lab4_B.TmpSignalConversionAtDUEInport5[0],
    &lab4_P.D0D7_Value, &lab4_B.DUE_o1, &lab4_B.DUE_o2[0], &lab4_B.DUE_o3[0],
    &lab4_B.DUE_o4[0], &lab4_B.DUE_o5, &lab4_B.DUE_o6, &lab4_DW.DUE_DSTATE,
    &lab4_P.DUE_P1, 1, &lab4_P.DUE_P2, 1);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  lab4_B.DataTypeConversion4 = lab4_B.DUE_o4[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  lab4_B.DataTypeConversion2 = lab4_B.DUE_o3[0];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  rtb_DataTypeConversion3[0] = lab4_B.DataTypeConversion2;
  rtb_DataTypeConversion3[1] = lab4_B.DataTypeConversion4;
  rtb_DataTypeConversion3[2] = 0.0;

  /* ToFile: '<Root>/To File' */
  {
    if (!(++lab4_DW.ToFile_IWORK.Decimation % 1) && (lab4_DW.ToFile_IWORK.Count *
         (3 + 1)) + 1 < 100000000 ) {
      FILE *fp = (FILE *) lab4_DW.ToFile_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[3 + 1];
        lab4_DW.ToFile_IWORK.Decimation = 0;
        u[0] = lab4_M->Timing.taskTime0;
        u[1] = rtb_DataTypeConversion3[0];
        u[2] = rtb_DataTypeConversion3[1];
        u[3] = rtb_DataTypeConversion3[2];
        if (fwrite(u, sizeof(real_T), 3 + 1, fp) != 3 + 1) {
          rtmSetErrorStatus(lab4_M,
                            "Error writing to MAT-file step_responce.mat");
          return;
        }

        if (((++lab4_DW.ToFile_IWORK.Count) * (3 + 1))+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file step_responce.mat.\n");
        }
      }
    }
  }

  /*
   * Block description for '<Root>/DUE':
   *  Set_Speed_DC: 1 <=> 100 encoder pulses / sec
   *  Set_Speed_Stepper: 1 <=> 1Hz

   */

  /* S-Function "SPI_DUE_wrapper" Block: <Root>/DUE */
  SPI_DUE_Update_wrapper(&lab4_B.TmpSignalConversionAtDUEInport1[0],
    &lab4_B.TmpSignalConversionAtDUEInport2[0], &lab4_B.DataTypeConversion[0],
    (int16_T*)&lab4_I16GND, &lab4_B.TmpSignalConversionAtDUEInport5[0],
    &lab4_P.D0D7_Value, &lab4_B.DUE_o1, &lab4_B.DUE_o2[0], &lab4_B.DUE_o3[0],
    &lab4_B.DUE_o4[0], &lab4_B.DUE_o5, &lab4_B.DUE_o6, &lab4_DW.DUE_DSTATE,
    &lab4_P.DUE_P1, 1, &lab4_P.DUE_P2, 1);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.05s, 0.0s] */
    rtExtModeUpload(0, lab4_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.05s, 0.0s] */
    if ((rtmGetTFinal(lab4_M)!=-1) &&
        !((rtmGetTFinal(lab4_M)-lab4_M->Timing.taskTime0) >
          lab4_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(lab4_M, "Simulation finished");
    }

    if (rtmGetStopRequested(lab4_M)) {
      rtmSetErrorStatus(lab4_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  lab4_M->Timing.taskTime0 =
    (++lab4_M->Timing.clockTick0) * lab4_M->Timing.stepSize0;
}

/* Model initialize function */
void lab4_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)lab4_M, 0,
                sizeof(RT_MODEL_lab4_T));
  rtmSetTFinal(lab4_M, -1);
  lab4_M->Timing.stepSize0 = 0.05;

  /* External mode info */
  lab4_M->Sizes.checksums[0] = (969900819U);
  lab4_M->Sizes.checksums[1] = (616257520U);
  lab4_M->Sizes.checksums[2] = (312136762U);
  lab4_M->Sizes.checksums[3] = (279020307U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    lab4_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(lab4_M->extModeInfo,
      &lab4_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(lab4_M->extModeInfo, lab4_M->Sizes.checksums);
    rteiSetTPtr(lab4_M->extModeInfo, rtmGetTPtr(lab4_M));
  }

  /* block I/O */
  (void) memset(((void *) &lab4_B), 0,
                sizeof(B_lab4_T));

  /* states (dwork) */
  (void) memset((void *)&lab4_DW, 0,
                sizeof(DW_lab4_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    lab4_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for ToFile: '<Root>/To File' */
  {
    FILE *fp = (NULL);
    char fileName[509] = "step_responce.mat";
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(lab4_M, "Error creating .mat file step_responce.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp, 3 + 1, 0, "ans")) {
      rtmSetErrorStatus(lab4_M,
                        "Error writing mat file header to file step_responce.mat");
      return;
    }

    lab4_DW.ToFile_IWORK.Count = 0;
    lab4_DW.ToFile_IWORK.Decimation = -1;
    lab4_DW.ToFile_PWORK.FilePtr = fp;
  }

  /*
   * Block description for '<Root>/DUE':
   *  Set_Speed_DC: 1 <=> 100 encoder pulses / sec
   *  Set_Speed_Stepper: 1 <=> 1Hz

   */

  /* S-Function Block: <Root>/DUE */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        lab4_DW.DUE_DSTATE = initVector[0];
      }
    }
  }
}

/* Model terminate function */
void lab4_terminate(void)
{
  /* Terminate for ToFile: '<Root>/To File' */
  {
    FILE *fp = (FILE *) lab4_DW.ToFile_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "step_responce.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(lab4_M, "Error closing MAT-file step_responce.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(lab4_M, "Error reopening MAT-file step_responce.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 3 + 1, lab4_DW.ToFile_IWORK.Count, "ans"))
      {
        rtmSetErrorStatus(lab4_M,
                          "Error writing header for ans to MAT-file step_responce.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(lab4_M, "Error closing MAT-file step_responce.mat");
        return;
      }

      lab4_DW.ToFile_PWORK.FilePtr = (NULL);
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
