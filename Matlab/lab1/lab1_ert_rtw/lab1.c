/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lab1.c
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
#include "lab1_dt.h"

/* Block signals (auto storage) */
B_lab1_T lab1_B;

/* Block states (auto storage) */
DW_lab1_T lab1_DW;

/* Real-time model */
RT_MODEL_lab1_T lab1_M_;
RT_MODEL_lab1_T *const lab1_M = &lab1_M_;

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
void lab1_step(void)
{
  /* local block i/o variables */
  real_T rtb_TmpSignalConversionAtToFile[4];
  real_T rtb_TSamp;
  real_T rtb_Motor0PWM;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDUEInport1' incorporates:
   *  Constant: '<S5>/Not in use'
   *  Constant: '<S5>/Select'
   */
  lab1_B.TmpSignalConversionAtDUEInport1[0] = lab1_P.Notinuse_Value;
  lab1_B.TmpSignalConversionAtDUEInport1[1] = lab1_P.Select_Value;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDUEInport2' incorporates:
   *  Constant: '<S3>/Sample rate Speed [ms]'
   *  Constant: '<S3>/Sample-rate Current [us]'
   */
  lab1_B.TmpSignalConversionAtDUEInport2[0] = lab1_P.SamplerateCurrentus_Value;
  lab1_B.TmpSignalConversionAtDUEInport2[1] = lab1_P.SamplerateSpeedms_Value;

  /* Step: '<Root>/Motor 0 PWM' */
  if (lab1_M->Timing.taskTime0 < lab1_P.Motor0PWM_Time) {
    rtb_Motor0PWM = lab1_P.Motor0PWM_Y0;
  } else {
    rtb_Motor0PWM = lab1_P.Motor0PWM_YFinal;
  }

  /* End of Step: '<Root>/Motor 0 PWM' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Motor 0 Speed'
   *  Constant: '<Root>/Motor 1 PWM'
   *  Constant: '<Root>/Motor 1 Speed'
   */
  rtb_TSamp = floor(rtb_Motor0PWM);
  if (rtIsNaN(rtb_TSamp) || rtIsInf(rtb_TSamp)) {
    rtb_TSamp = 0.0;
  } else {
    rtb_TSamp = fmod(rtb_TSamp, 65536.0);
  }

  lab1_B.DataTypeConversion[0] = (int16_T)(rtb_TSamp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-rtb_TSamp : (int32_T)(int16_T)(uint16_T)rtb_TSamp);
  rtb_TSamp = floor(lab1_P.Motor1PWM_Value);
  if (rtIsNaN(rtb_TSamp) || rtIsInf(rtb_TSamp)) {
    rtb_TSamp = 0.0;
  } else {
    rtb_TSamp = fmod(rtb_TSamp, 65536.0);
  }

  lab1_B.DataTypeConversion[1] = (int16_T)(rtb_TSamp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-rtb_TSamp : (int32_T)(int16_T)(uint16_T)rtb_TSamp);
  rtb_TSamp = floor(lab1_P.Motor0Speed_Value);
  if (rtIsNaN(rtb_TSamp) || rtIsInf(rtb_TSamp)) {
    rtb_TSamp = 0.0;
  } else {
    rtb_TSamp = fmod(rtb_TSamp, 65536.0);
  }

  lab1_B.DataTypeConversion[2] = (int16_T)(rtb_TSamp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-rtb_TSamp : (int32_T)(int16_T)(uint16_T)rtb_TSamp);
  rtb_TSamp = floor(lab1_P.Motor1Speed_Value);
  if (rtIsNaN(rtb_TSamp) || rtIsInf(rtb_TSamp)) {
    rtb_TSamp = 0.0;
  } else {
    rtb_TSamp = fmod(rtb_TSamp, 65536.0);
  }

  lab1_B.DataTypeConversion[3] = (int16_T)(rtb_TSamp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-rtb_TSamp : (int32_T)(int16_T)(uint16_T)rtb_TSamp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_TSamp = floor(lab1_P.Constant_Value);
  if (rtIsNaN(rtb_TSamp) || rtIsInf(rtb_TSamp)) {
    rtb_TSamp = 0.0;
  } else {
    rtb_TSamp = fmod(rtb_TSamp, 65536.0);
  }

  lab1_B.DataTypeConversion1 = (int16_T)(rtb_TSamp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-rtb_TSamp : (int32_T)(int16_T)(uint16_T)rtb_TSamp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDUEInport5' incorporates:
   *  Constant: '<S2>/I-value Speed'
   *  Constant: '<S2>/P-value Current'
   *  Constant: '<S2>/P-value Speed'
   */
  lab1_B.TmpSignalConversionAtDUEInport5[0] = lab1_P.PvalueCurrent_Value;
  lab1_B.TmpSignalConversionAtDUEInport5[1] = lab1_P.PvalueSpeed_Value;
  lab1_B.TmpSignalConversionAtDUEInport5[2] = lab1_P.IvalueSpeed_Value;

  /* S-Function (SPI_DUE): '<Root>/DUE' */
  SPI_DUE_Outputs_wrapper(&lab1_B.TmpSignalConversionAtDUEInport1[0],
    &lab1_B.TmpSignalConversionAtDUEInport2[0], &lab1_B.DataTypeConversion[0],
    &lab1_B.DataTypeConversion1, &lab1_B.TmpSignalConversionAtDUEInport5[0],
    &lab1_P.D0D7_Value, &lab1_B.DUE_o1, &lab1_B.DUE_o2[0], &lab1_B.DUE_o3[0],
    &lab1_B.DUE_o4[0], &lab1_B.DUE_o5, &lab1_B.DUE_o6, &lab1_DW.DUE_DSTATE,
    &lab1_P.DUE_P1, 1, &lab1_P.DUE_P2, 1);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  lab1_B.DataTypeConversion4 = lab1_B.DUE_o4[0];

  /* SampleTimeMath: '<S1>/TSamp'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = lab1_B.DataTypeConversion4 * lab1_P.TSamp_WtEt;

  /* Sum: '<S1>/Diff' incorporates:
   *  UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  lab1_B.Diff = rtb_TSamp - lab1_DW.UD_DSTATE;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  lab1_B.DataTypeConversion2 = lab1_B.DUE_o3[0];

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo FileInport1' */
  rtb_TmpSignalConversionAtToFile[0] = lab1_B.DataTypeConversion4;
  rtb_TmpSignalConversionAtToFile[1] = rtb_Motor0PWM;
  rtb_TmpSignalConversionAtToFile[2] = lab1_B.DataTypeConversion2;
  rtb_TmpSignalConversionAtToFile[3] = lab1_B.Diff;

  /* ToFile: '<Root>/To File' */
  {
    if (!(++lab1_DW.ToFile_IWORK.Decimation % 1) && (lab1_DW.ToFile_IWORK.Count *
         (4 + 1)) + 1 < 100000000 ) {
      FILE *fp = (FILE *) lab1_DW.ToFile_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[4 + 1];
        lab1_DW.ToFile_IWORK.Decimation = 0;
        u[0] = lab1_M->Timing.taskTime0;
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 4 + 1, fp) != 4 + 1) {
          rtmSetErrorStatus(lab1_M,
                            "Error writing to MAT-file step_responce.mat");
          return;
        }

        if (((++lab1_DW.ToFile_IWORK.Count) * (4 + 1))+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file step_responce.mat.\n");
        }
      }
    }
  }

  /* S-Function "SPI_DUE_wrapper" Block: <Root>/DUE */
  SPI_DUE_Update_wrapper(&lab1_B.TmpSignalConversionAtDUEInport1[0],
    &lab1_B.TmpSignalConversionAtDUEInport2[0], &lab1_B.DataTypeConversion[0],
    &lab1_B.DataTypeConversion1, &lab1_B.TmpSignalConversionAtDUEInport5[0],
    &lab1_P.D0D7_Value, &lab1_B.DUE_o1, &lab1_B.DUE_o2[0], &lab1_B.DUE_o3[0],
    &lab1_B.DUE_o4[0], &lab1_B.DUE_o5, &lab1_B.DUE_o6, &lab1_DW.DUE_DSTATE,
    &lab1_P.DUE_P1, 1, &lab1_P.DUE_P2, 1);

  /* Update for UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  lab1_DW.UD_DSTATE = rtb_TSamp;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.002s, 0.0s] */
    rtExtModeUpload(0, lab1_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.002s, 0.0s] */
    if ((rtmGetTFinal(lab1_M)!=-1) &&
        !((rtmGetTFinal(lab1_M)-lab1_M->Timing.taskTime0) >
          lab1_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(lab1_M, "Simulation finished");
    }

    if (rtmGetStopRequested(lab1_M)) {
      rtmSetErrorStatus(lab1_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  lab1_M->Timing.taskTime0 =
    (++lab1_M->Timing.clockTick0) * lab1_M->Timing.stepSize0;
}

/* Model initialize function */
void lab1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)lab1_M, 0,
                sizeof(RT_MODEL_lab1_T));
  rtmSetTFinal(lab1_M, 5.0);
  lab1_M->Timing.stepSize0 = 0.002;

  /* External mode info */
  lab1_M->Sizes.checksums[0] = (490425636U);
  lab1_M->Sizes.checksums[1] = (4057772960U);
  lab1_M->Sizes.checksums[2] = (1051640107U);
  lab1_M->Sizes.checksums[3] = (2479202466U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    lab1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(lab1_M->extModeInfo,
      &lab1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(lab1_M->extModeInfo, lab1_M->Sizes.checksums);
    rteiSetTPtr(lab1_M->extModeInfo, rtmGetTPtr(lab1_M));
  }

  /* block I/O */
  (void) memset(((void *) &lab1_B), 0,
                sizeof(B_lab1_T));

  /* states (dwork) */
  (void) memset((void *)&lab1_DW, 0,
                sizeof(DW_lab1_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    lab1_M->SpecialInfo.mappingInfo = (&dtInfo);
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
      rtmSetErrorStatus(lab1_M, "Error creating .mat file step_responce.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp, 4 + 1, 0, "ans")) {
      rtmSetErrorStatus(lab1_M,
                        "Error writing mat file header to file step_responce.mat");
      return;
    }

    lab1_DW.ToFile_IWORK.Count = 0;
    lab1_DW.ToFile_IWORK.Decimation = -1;
    lab1_DW.ToFile_PWORK.FilePtr = fp;
  }

  /* S-Function Block: <Root>/DUE */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        lab1_DW.DUE_DSTATE = initVector[0];
      }
    }
  }

  /* InitializeConditions for UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  lab1_DW.UD_DSTATE = lab1_P.DiscreteDerivative_ICPrevScaled;
}

/* Model terminate function */
void lab1_terminate(void)
{
  /* Terminate for ToFile: '<Root>/To File' */
  {
    FILE *fp = (FILE *) lab1_DW.ToFile_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "step_responce.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(lab1_M, "Error closing MAT-file step_responce.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(lab1_M, "Error reopening MAT-file step_responce.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 4 + 1, lab1_DW.ToFile_IWORK.Count, "ans"))
      {
        rtmSetErrorStatus(lab1_M,
                          "Error writing header for ans to MAT-file step_responce.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(lab1_M, "Error closing MAT-file step_responce.mat");
        return;
      }

      lab1_DW.ToFile_PWORK.FilePtr = (NULL);
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
