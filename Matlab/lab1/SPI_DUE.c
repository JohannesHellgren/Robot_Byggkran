/*
 * File: SPI_DUE.c
 *
  *
  *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
  *
  *   This file is an S-function produced by the S-Function
  *   Builder which only recognizes certain fields.  Changes made
  *   outside these fields will be lost the next time the block is
  *   used to load, edit, and resave this file. This file will be overwritten
  *   by the S-function Builder block. If you want to edit this file by hand, 
  *   you must change it only in the area defined as:  
  *
  *        %%%-SFUNWIZ_defines_Changes_BEGIN
  *        #define NAME 'replacement text' 
  *        %%% SFUNWIZ_defines_Changes_END
  *
  *   DO NOT change NAME--Change the 'replacement text' only.
  *
  *   For better compatibility with the Simulink Coder, the
  *   "wrapper" S-function technique is used.  This is discussed
  *   in the Simulink Coder's Manual in the Chapter titled,
  *   "Wrapper S-functions".
  *
  *  -------------------------------------------------------------------------
  * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
  *  ------------------------------------------------------------------------- 
* Created: Tue Oct 16 15:13:59 2018
*/
#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME SPI_DUE
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS          6
/* Input Port  0 */
#define IN_PORT_0_NAME      Select
#define INPUT_0_WIDTH       2
#define INPUT_DIMS_0_COL    1
#define INPUT_0_DTYPE       uint8_T
#define INPUT_0_COMPLEX     COMPLEX_NO
#define IN_0_FRAME_BASED    FRAME_NO
#define IN_0_BUS_BASED      0
#define IN_0_BUS_NAME       
#define IN_0_DIMS           1-D
#define INPUT_0_FEEDTHROUGH 1
#define IN_0_ISSIGNED        0
#define IN_0_WORDLENGTH      8
#define IN_0_FIXPOINTSCALING 1
#define IN_0_FRACTIONLENGTH  9
#define IN_0_BIAS            0
#define IN_0_SLOPE           0.125
/* Input Port  1 */
#define IN_PORT_1_NAME      Sample_Time
#define INPUT_1_WIDTH       2
#define INPUT_DIMS_1_COL    1
#define INPUT_1_DTYPE       uint16_T
#define INPUT_1_COMPLEX     COMPLEX_NO
#define IN_1_FRAME_BASED    FRAME_NO
#define IN_1_BUS_BASED      0
#define IN_1_BUS_NAME       
#define IN_1_DIMS           1-D
#define INPUT_1_FEEDTHROUGH 1
#define IN_1_ISSIGNED        0
#define IN_1_WORDLENGTH      8
#define IN_1_FIXPOINTSCALING 1
#define IN_1_FRACTIONLENGTH  9
#define IN_1_BIAS            0
#define IN_1_SLOPE           0.125
/* Input Port  2 */
#define IN_PORT_2_NAME      Set_Speed_DC
#define INPUT_2_WIDTH       4
#define INPUT_DIMS_2_COL    1
#define INPUT_2_DTYPE       int16_T
#define INPUT_2_COMPLEX     COMPLEX_NO
#define IN_2_FRAME_BASED    FRAME_NO
#define IN_2_BUS_BASED      0
#define IN_2_BUS_NAME       
#define IN_2_DIMS           1-D
#define INPUT_2_FEEDTHROUGH 1
#define IN_2_ISSIGNED        0
#define IN_2_WORDLENGTH      8
#define IN_2_FIXPOINTSCALING 1
#define IN_2_FRACTIONLENGTH  9
#define IN_2_BIAS            0
#define IN_2_SLOPE           0.125
/* Input Port  3 */
#define IN_PORT_3_NAME      Set_Speed_Stepper
#define INPUT_3_WIDTH       1
#define INPUT_DIMS_3_COL    1
#define INPUT_3_DTYPE       int16_T
#define INPUT_3_COMPLEX     COMPLEX_NO
#define IN_3_FRAME_BASED    FRAME_NO
#define IN_3_BUS_BASED      0
#define IN_3_BUS_NAME       
#define IN_3_DIMS           1-D
#define INPUT_3_FEEDTHROUGH 1
#define IN_3_ISSIGNED        0
#define IN_3_WORDLENGTH      8
#define IN_3_FIXPOINTSCALING 1
#define IN_3_FRACTIONLENGTH  9
#define IN_3_BIAS            0
#define IN_3_SLOPE           0.125
/* Input Port  4 */
#define IN_PORT_4_NAME      Controllers
#define INPUT_4_WIDTH       3
#define INPUT_DIMS_4_COL    1
#define INPUT_4_DTYPE       real32_T
#define INPUT_4_COMPLEX     COMPLEX_NO
#define IN_4_FRAME_BASED    FRAME_NO
#define IN_4_BUS_BASED      0
#define IN_4_BUS_NAME       
#define IN_4_DIMS           1-D
#define INPUT_4_FEEDTHROUGH 1
#define IN_4_ISSIGNED        0
#define IN_4_WORDLENGTH      8
#define IN_4_FIXPOINTSCALING 1
#define IN_4_FRACTIONLENGTH  9
#define IN_4_BIAS            0
#define IN_4_SLOPE           0.125
/* Input Port  5 */
#define IN_PORT_5_NAME      Set_Digital
#define INPUT_5_WIDTH       1
#define INPUT_DIMS_5_COL    1
#define INPUT_5_DTYPE       uint8_T
#define INPUT_5_COMPLEX     COMPLEX_NO
#define IN_5_FRAME_BASED    FRAME_NO
#define IN_5_BUS_BASED      0
#define IN_5_BUS_NAME       
#define IN_5_DIMS           1-D
#define INPUT_5_FEEDTHROUGH 1
#define IN_5_ISSIGNED        0
#define IN_5_WORDLENGTH      8
#define IN_5_FIXPOINTSCALING 1
#define IN_5_FRACTIONLENGTH  9
#define IN_5_BIAS            0
#define IN_5_SLOPE           0.125

#define NUM_OUTPUTS          6
/* Output Port  0 */
#define OUT_PORT_0_NAME      Status
#define OUTPUT_0_WIDTH       1
#define OUTPUT_DIMS_0_COL    1
#define OUTPUT_0_DTYPE       uint8_T
#define OUTPUT_0_COMPLEX     COMPLEX_NO
#define OUT_0_FRAME_BASED    FRAME_NO
#define OUT_0_BUS_BASED      0
#define OUT_0_BUS_NAME       
#define OUT_0_DIMS           1-D
#define OUT_0_ISSIGNED        1
#define OUT_0_WORDLENGTH      8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH  3
#define OUT_0_BIAS            0
#define OUT_0_SLOPE           0.125
/* Output Port  1 */
#define OUT_PORT_1_NAME      Current
#define OUTPUT_1_WIDTH       2
#define OUTPUT_DIMS_1_COL    1
#define OUTPUT_1_DTYPE       uint16_T
#define OUTPUT_1_COMPLEX     COMPLEX_NO
#define OUT_1_FRAME_BASED    FRAME_NO
#define OUT_1_BUS_BASED      0
#define OUT_1_BUS_NAME       
#define OUT_1_DIMS           1-D
#define OUT_1_ISSIGNED        1
#define OUT_1_WORDLENGTH      8
#define OUT_1_FIXPOINTSCALING 1
#define OUT_1_FRACTIONLENGTH  3
#define OUT_1_BIAS            0
#define OUT_1_SLOPE           0.125
/* Output Port  2 */
#define OUT_PORT_2_NAME      Motor_Speed
#define OUTPUT_2_WIDTH       2
#define OUTPUT_DIMS_2_COL    1
#define OUTPUT_2_DTYPE       int16_T
#define OUTPUT_2_COMPLEX     COMPLEX_NO
#define OUT_2_FRAME_BASED    FRAME_NO
#define OUT_2_BUS_BASED      0
#define OUT_2_BUS_NAME       
#define OUT_2_DIMS           1-D
#define OUT_2_ISSIGNED        1
#define OUT_2_WORDLENGTH      8
#define OUT_2_FIXPOINTSCALING 1
#define OUT_2_FRACTIONLENGTH  3
#define OUT_2_BIAS            0
#define OUT_2_SLOPE           0.125
/* Output Port  3 */
#define OUT_PORT_3_NAME      Motor_Encoder
#define OUTPUT_3_WIDTH       2
#define OUTPUT_DIMS_3_COL    1
#define OUTPUT_3_DTYPE       int32_T
#define OUTPUT_3_COMPLEX     COMPLEX_NO
#define OUT_3_FRAME_BASED    FRAME_NO
#define OUT_3_BUS_BASED      0
#define OUT_3_BUS_NAME       
#define OUT_3_DIMS           1-D
#define OUT_3_ISSIGNED        1
#define OUT_3_WORDLENGTH      8
#define OUT_3_FIXPOINTSCALING 1
#define OUT_3_FRACTIONLENGTH  3
#define OUT_3_BIAS            0
#define OUT_3_SLOPE           0.125
/* Output Port  4 */
#define OUT_PORT_4_NAME      Read_Digital
#define OUTPUT_4_WIDTH       1
#define OUTPUT_DIMS_4_COL    1
#define OUTPUT_4_DTYPE       uint8_T
#define OUTPUT_4_COMPLEX     COMPLEX_NO
#define OUT_4_FRAME_BASED    FRAME_NO
#define OUT_4_BUS_BASED      0
#define OUT_4_BUS_NAME       
#define OUT_4_DIMS           1-D
#define OUT_4_ISSIGNED        1
#define OUT_4_WORDLENGTH      8
#define OUT_4_FIXPOINTSCALING 1
#define OUT_4_FRACTIONLENGTH  3
#define OUT_4_BIAS            0
#define OUT_4_SLOPE           0.125
/* Output Port  5 */
#define OUT_PORT_5_NAME      Stepper_Pos
#define OUTPUT_5_WIDTH       1
#define OUTPUT_DIMS_5_COL    1
#define OUTPUT_5_DTYPE       int32_T
#define OUTPUT_5_COMPLEX     COMPLEX_NO
#define OUT_5_FRAME_BASED    FRAME_NO
#define OUT_5_BUS_BASED      0
#define OUT_5_BUS_NAME       
#define OUT_5_DIMS           1-D
#define OUT_5_ISSIGNED        1
#define OUT_5_WORDLENGTH      8
#define OUT_5_FIXPOINTSCALING 1
#define OUT_5_FRACTIONLENGTH  3
#define OUT_5_BIAS            0
#define OUT_5_SLOPE           0.125

#define NPARAMS              2
/* Parameter  1 */
#define PARAMETER_0_NAME      SPIChannel
#define PARAMETER_0_DTYPE     uint8_T
#define PARAMETER_0_COMPLEX   COMPLEX_NO
/* Parameter  2 */
#define PARAMETER_1_NAME      SPIClock
#define PARAMETER_1_DTYPE     uint32_T
#define PARAMETER_1_COMPLEX   COMPLEX_NO

#define SAMPLE_TIME_0        0.002
#define NUM_DISC_STATES      1
#define DISC_STATES_IC       [0]
#define NUM_CONT_STATES      0
#define CONT_STATES_IC       [0]

#define SFUNWIZ_GENERATE_TLC 1
#define SOURCEFILES "__SFB__"
#define PANELINDEX           6
#define USE_SIMSTRUCT        0
#define SHOW_COMPILE_STEPS   0                   
#define CREATE_DEBUG_MEXFILE 0
#define SAVE_CODE_ONLY       0
#define SFUNWIZ_REVISION     3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"
#define PARAM_DEF0(S) ssGetSFcnParam(S, 0)
#define PARAM_DEF1(S) ssGetSFcnParam(S, 1)

#define IS_PARAM_UINT8(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsUint8(pVal))

#define IS_PARAM_UINT32(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsUint32(pVal))

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
			const uint8_T  *SPIChannel, const int_T  p_width0,
			const uint32_T  *SPIClock, const int_T  p_width1);
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
			const uint8_T  *SPIChannel,  const int_T  p_width0,
			const uint32_T  *SPIClock,  const int_T  p_width1);

/*====================*
 * S-function methods *
 *====================*/
#define MDL_CHECK_PARAMETERS
 #if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)
   /* Function: mdlCheckParameters =============================================
     * Abstract:
     *    Validate our parameters to verify they are okay.
     */
    static void mdlCheckParameters(SimStruct *S)
    {
     int paramIndex  = 0;
     bool validParam = false;
     /* All parameters must match the S-function Builder Dialog */
     

	 {
	  const mxArray *pVal0 = ssGetSFcnParam(S,0);
	  if (!IS_PARAM_UINT8(pVal0)) {
	    validParam = true;
	    paramIndex = 0;
	    goto EXIT_POINT;
	  }
	 }

	 {
	  const mxArray *pVal1 = ssGetSFcnParam(S,1);
	  if (!IS_PARAM_UINT32(pVal1)) {
	    validParam = true;
	    paramIndex = 1;
	    goto EXIT_POINT;
	  }
	 }
      
     EXIT_POINT:
      if (validParam) {
          char parameterErrorMsg[1024];
          sprintf(parameterErrorMsg, "The data type and or complexity of parameter  %d does not match the "
                  "information specified in the S-function Builder dialog. "
                  "For non-double parameters you will need to cast them using int8, int16, "
                  "int32, uint8, uint16, uint32 or boolean.", paramIndex + 1);
	  ssSetErrorStatus(S,parameterErrorMsg);
      }
	return;
    }
 #endif /* MDL_CHECK_PARAMETERS */
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS);  /* Number of expected parameters */
      #if defined(MATLAB_MEX_FILE)
	if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
	  mdlCheckParameters(S);
	  if (ssGetErrorStatus(S) != NULL) {
	    return;
	  }
	 } else {
	   return; /* Parameter mismatch will be reported by Simulink */
	 }
      #endif

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);


    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /*Input Port 0 */
    ssSetInputPortWidth(S,  0, INPUT_0_WIDTH);
    ssSetInputPortDataType(S, 0, SS_UINT8);
    ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/

    /*Input Port 1 */
    ssSetInputPortWidth(S,  1, INPUT_1_WIDTH);
    ssSetInputPortDataType(S, 1, SS_UINT16);
    ssSetInputPortComplexSignal(S, 1, INPUT_1_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 1, INPUT_1_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 1, 1); /*direct input signal access*/

    /*Input Port 2 */
    ssSetInputPortWidth(S,  2, INPUT_2_WIDTH);
    ssSetInputPortDataType(S, 2, SS_INT16);
    ssSetInputPortComplexSignal(S, 2, INPUT_2_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 2, INPUT_2_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 2, 1); /*direct input signal access*/

    /*Input Port 3 */
    ssSetInputPortWidth(S,  3, INPUT_3_WIDTH); /* */
    ssSetInputPortDataType(S, 3, SS_INT16);
    ssSetInputPortComplexSignal(S,  3, INPUT_3_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 3, INPUT_3_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 3, 1); /*direct input signal access*/

    /*Input Port 4 */
    ssSetInputPortWidth(S,  4, INPUT_4_WIDTH);
    ssSetInputPortDataType(S, 4, SS_SINGLE);
    ssSetInputPortComplexSignal(S, 4, INPUT_4_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 4, INPUT_4_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 4, 1); /*direct input signal access*/

    /*Input Port 5 */
    ssSetInputPortWidth(S,  5, INPUT_5_WIDTH); /* */
    ssSetInputPortDataType(S, 5, SS_UINT8);
    ssSetInputPortComplexSignal(S,  5, INPUT_5_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 5, INPUT_5_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 5, 1); /*direct input signal access*/


    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;
    /* Output Port 0 */
    ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
    ssSetOutputPortDataType(S, 0, SS_UINT8);
    ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
    /* Output Port 1 */
    ssSetOutputPortWidth(S, 1, OUTPUT_1_WIDTH);
    ssSetOutputPortDataType(S, 1, SS_UINT16);
    ssSetOutputPortComplexSignal(S, 1, OUTPUT_1_COMPLEX);
    /* Output Port 2 */
    ssSetOutputPortWidth(S, 2, OUTPUT_2_WIDTH);
    ssSetOutputPortDataType(S, 2, SS_INT16);
    ssSetOutputPortComplexSignal(S, 2, OUTPUT_2_COMPLEX);
    /* Output Port 3 */
    ssSetOutputPortWidth(S, 3, OUTPUT_3_WIDTH);
    ssSetOutputPortDataType(S, 3, SS_INT32);
    ssSetOutputPortComplexSignal(S, 3, OUTPUT_3_COMPLEX);
    /* Output Port 4 */
    ssSetOutputPortWidth(S, 4, OUTPUT_4_WIDTH);
    ssSetOutputPortDataType(S, 4, SS_UINT8);
    ssSetOutputPortComplexSignal(S, 4, OUTPUT_4_COMPLEX);
    /* Output Port 5 */
    ssSetOutputPortWidth(S, 5, OUTPUT_5_WIDTH);
    ssSetOutputPortDataType(S, 5, SS_INT32);
    ssSetOutputPortComplexSignal(S, 5, OUTPUT_5_COMPLEX);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetSimulinkVersionGeneratedIn(S, "8.8");

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_USE_TLC_WITH_ACCELERATOR | 
		     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

#if defined(MATLAB_MEX_FILE)
#define MDL_SET_INPUT_PORT_DIMENSION_INFO
static void mdlSetInputPortDimensionInfo(SimStruct        *S, 
                                         int_T            port,
                                         const DimsInfo_T *dimsInfo)
{
    if(!ssSetInputPortDimensionInfo(S, port, dimsInfo)) return;
}
#endif

#define MDL_SET_OUTPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_OUTPUT_PORT_DIMENSION_INFO)
static void mdlSetOutputPortDimensionInfo(SimStruct        *S, 
                                          int_T            port, 
                                          const DimsInfo_T *dimsInfo)
{
 if (!ssSetOutputPortDimensionInfo(S, port, dimsInfo)) return;
}
#endif
#define MDL_SET_DEFAULT_PORT_DIMENSION_INFO
static void mdlSetDefaultPortDimensionInfo(SimStruct *S)
{
  DECL_AND_INIT_DIMSINFO(portDimsInfo);
  int_T dims[2] = { INPUT_0_WIDTH, 1 };
  bool  frameIn = ssGetInputPortFrameData(S, 0) == FRAME_YES;

  /* Neither the input nor the output ports have been set */

  portDimsInfo.width   = INPUT_0_WIDTH;
  portDimsInfo.numDims = frameIn ? 2 : 1;
  portDimsInfo.dims    = frameIn ? dims : &portDimsInfo.width;
  if (ssGetInputPortNumDimensions(S, 0) == (-1)) {  
   ssSetInputPortDimensionInfo(S, 0, &portDimsInfo);
  }
  portDimsInfo.width   = OUTPUT_0_WIDTH;
  dims[0]              = OUTPUT_0_WIDTH;
  dims[1]              = 1;
  portDimsInfo.dims    = frameIn ? dims : &portDimsInfo.width;
 if (ssGetOutputPortNumDimensions(S, 0) == (-1)) {  
  ssSetOutputPortDimensionInfo(S, 0, &portDimsInfo);
 }
  return;
}
# define MDL_SET_INPUT_PORT_FRAME_DATA
static void mdlSetInputPortFrameData(SimStruct  *S, 
                                     int_T      port,
                                     Frame_T    frameData)
{
    ssSetInputPortFrameData(S, port, frameData);
}
/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME_0);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    ssSetOffsetTime(S, 0, 0.0);
}
#define MDL_INITIALIZE_CONDITIONS
 /* Function: mdlInitializeConditions ========================================
  * Abstract:
  *    Initialize the states
  */
 static void mdlInitializeConditions(SimStruct *S)
 {
   real_T *xD   = ssGetRealDiscStates(S);
   
    
    xD[0] =  0;
    
 }
#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType( S, 0, dType);
}
#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
  ssSetInputPortDataType( S, 0, SS_DOUBLE);
 ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

static void mdlSetWorkWidths(SimStruct *S)
{

     const char_T *rtParamNames[] = {"P1","P2"};
     ssRegAllTunableParamsAsRunTimeParams(S, rtParamNames);
}

#endif
/* Function: mdlOutputs =======================================================
 *
*/
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const uint8_T   *Select  = (const uint8_T*) ssGetInputPortSignal(S,0);
    const uint16_T   *Sample_Time  = (const uint16_T*) ssGetInputPortSignal(S,1);
    const int16_T   *Set_Speed_DC  = (const int16_T*) ssGetInputPortSignal(S,2);
    const int16_T   *Set_Speed_Stepper  = (const int16_T*) ssGetInputPortSignal(S,3);
    const real32_T   *Controllers  = (const real32_T*) ssGetInputPortSignal(S,4);
    const uint8_T   *Set_Digital  = (const uint8_T*) ssGetInputPortSignal(S,5);
    uint8_T        *Status  = (uint8_T *)ssGetOutputPortRealSignal(S,0);
    uint16_T        *Current  = (uint16_T *)ssGetOutputPortRealSignal(S,1);
    int16_T        *Motor_Speed  = (int16_T *)ssGetOutputPortRealSignal(S,2);
    int32_T        *Motor_Encoder  = (int32_T *)ssGetOutputPortRealSignal(S,3);
    uint8_T        *Read_Digital  = (uint8_T *)ssGetOutputPortRealSignal(S,4);
    int32_T        *Stepper_Pos  = (int32_T *)ssGetOutputPortRealSignal(S,5);
    const real_T   *xD = ssGetDiscStates(S);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const uint8_T  *SPIChannel  = (const uint8_T *)mxGetData(PARAM_DEF0(S));
    const uint32_T  *SPIClock  = (const uint32_T *)mxGetData(PARAM_DEF1(S));

    SPI_DUE_Outputs_wrapper(Select, Sample_Time, Set_Speed_DC, Set_Speed_Stepper, Controllers, Set_Digital, Status, Current, Motor_Speed, Motor_Encoder, Read_Digital, Stepper_Pos, xD, SPIChannel, p_width0, SPIClock, p_width1);

}
#define MDL_UPDATE  /* Change to #undef to remove function */
/* Function: mdlUpdate ======================================================
   * Abstract:
   *    This function is called once for every major integration time step.
   *    Discrete states are typically updated here, but this function is useful
   *    for performing any tasks that should only take place once per
   *    integration step.
   */
  static void mdlUpdate(SimStruct *S, int_T tid)
  {
    real_T         *xD  = ssGetDiscStates(S);
    const uint8_T   *Select  = (const uint8_T*) ssGetInputPortSignal(S,0);
    const uint16_T   *Sample_Time  = (const uint16_T*) ssGetInputPortSignal(S,1);
    const int16_T   *Set_Speed_DC  = (const int16_T*) ssGetInputPortSignal(S,2);
    const int16_T   *Set_Speed_Stepper  = (const int16_T*) ssGetInputPortSignal(S,3);
    const real32_T   *Controllers  = (const real32_T*) ssGetInputPortSignal(S,4);
    const uint8_T   *Set_Digital  = (const uint8_T*) ssGetInputPortSignal(S,5);
    uint8_T        *Status  = (uint8_T *)ssGetOutputPortRealSignal(S,0);
    uint16_T        *Current  = (uint16_T *)ssGetOutputPortRealSignal(S,1);
    int16_T        *Motor_Speed  = (int16_T *)ssGetOutputPortRealSignal(S,2);
    int32_T        *Motor_Encoder  = (int32_T *)ssGetOutputPortRealSignal(S,3);
    uint8_T        *Read_Digital  = (uint8_T *)ssGetOutputPortRealSignal(S,4);
    int32_T        *Stepper_Pos  = (int32_T *)ssGetOutputPortRealSignal(S,5);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const uint8_T  *SPIChannel  = (const uint8_T *)mxGetData(PARAM_DEF0(S));
    const uint32_T  *SPIClock  = (const uint32_T *)mxGetData(PARAM_DEF1(S));

    SPI_DUE_Update_wrapper(Select, Sample_Time, Set_Speed_DC, Set_Speed_Stepper, Controllers, Set_Digital, Status, Current, Motor_Speed, Motor_Encoder, Read_Digital, Stepper_Pos,  xD, SPIChannel, p_width0, SPIClock, p_width1);
}


/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{

}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif


