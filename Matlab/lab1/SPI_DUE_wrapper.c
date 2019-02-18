

/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include <stdio.h>
#ifndef MATLAB_MEX_FILE
#include </home/pi/wiringPi/wiringPi/wiringPi.h>
#include </home/pi/wiringPi/wiringPi/wiringPi.c>
#include </home/pi/wiringPi/wiringPi/softPwm.c>
#include </home/pi/wiringPi/wiringPi/softTone.c>
#include </home/pi/wiringPi/wiringPi/piHiPri.c>
#include </home/pi/wiringPi/wiringPi/wiringPiSPI.c>
#endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 2
#define y_width 1
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output functions
 *
 */
void SPI_DUE_Outputs_wrapper(const uint8_T *Select,
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
			const uint32_T  *SPIClock, const int_T  p_width1)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
// Only do something when wi r ingPi and its SPI sub system are initialized.
// Initializing is done by the code in the discrete update tab .

// Only do something when wiring Pi and its SPI sub system are initialized.
// Initializing is done by the code in the discrete update tab .
if(xD[0] == 1 ){

    uint8_T  SPIBuffer[32];
    
    SPIBuffer[0] =  Select[0]; //status
    SPIBuffer[1] =  Select[1]; //control
    memcpy(SPIBuffer+2,Sample_Time,4); //sample time current/speed
    memcpy(SPIBuffer+6,Set_Speed_DC,8); //Desired Value: Speed M0/M1 and PWM M0/M1
    SPIBuffer[14] = Set_Digital[0]; //Digital D0 to D7
    SPIBuffer[15] = 0; // spare
    memcpy(SPIBuffer+16,Controllers,12); //PID-Controller
    memcpy(SPIBuffer+28,Set_Speed_Stepper,2); //Speed Stepper
    SPIBuffer[30] =  0; //Servo
    SPIBuffer[31] = 0x1; // heart beat
    
#ifndef  MATLAB_MEX_FILE
// Write and  read  the  SPI  bus
    wiringPiSPIDataRW(*SPIChannel, SPIBuffer, 32);
#endif
// Set  the  output  to  the  received register value
    Status[0] = SPIBuffer[0];//registerToRead[0];// 
    Read_Digital[0] = SPIBuffer[1];
    memcpy(Current,SPIBuffer+2,4); //Current
    memcpy(Motor_Speed,SPIBuffer+6,4); //Speed
    memcpy(Motor_Encoder,SPIBuffer+12,8); //Encoder values
    memcpy(Stepper_Pos,SPIBuffer+20,4); //Position Stepper
}
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
  * Updates function
  *
  */
void SPI_DUE_Update_wrapper(const uint8_T *Select,
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
			const uint32_T  *SPIClock,  const int_T  p_width1)
{
  /* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
// Make sure  this code executes only once
if(xD[0] != 1){
    
#ifndef MATLAB_MEX_FILE
//  Initialize  wiringPi
    wiringPiSetup();
//  Initialize SPI channel and  clock  frequency
    wiringPiSPISetup(*SPIChannel ,  *SPIClock);
// SPI initialization like  ’power on’ SPI device  etc starts  below
/*    uint8_T  SPIBuffer[32];
// Power on the  accelerometer  testSPI device
    SPIBuffer[0]  = SPI_WRITE_INSTRUCTION;
    SPIBuffer[1]  = 0x2d;
    SPIBuffer[2]  = 0x02;
    SPIBuffer[31] = 1;
// Write and  read  the  SPI  bus
    wiringPiSPIDataRW(SPIChannel, SPIBuffer, 32);*/
#endif
//  Set  initialization ’done’ flag
    xD[0] = 1;
}
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
