#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWaveLIbrary.BPWaveLIbrary_C.Generate Wave Spectrum
struct UBPWaveLIbrary_C_Generate_Wave_Spectrum_Params
{
	struct FWaveSpectrumSettings                       Spectrum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWaterWaveParams>                    Waves;                                                    // (Parm, OutParm)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Harvest Wave Params
struct UBPWaveLIbrary_C_Harvest_Wave_Params_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Water Depth to Wavespeed
struct UBPWaveLIbrary_C_Water_Depth_to_Wavespeed_Params
{
	float                                              Water_Depth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              s;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave_MPC_Shallow
struct UBPWaveLIbrary_C_Gerstner_Wave_MPC_Shallow_Params
{
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWaveParams                                 Wave_Params;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Phase_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Water_Depth__wave0_only_;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   XY;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Pos;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Time;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Sine;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner 3 Waves
struct UBPWaveLIbrary_C_Gerstner_3_Waves_Params
{
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num_Waves;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWaveParams>                         Wave_Array;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Water_Depth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Break_Tangent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Break_Cos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   XY;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_0_Pos;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_0_Time;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_0_Sine;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Rotation from Normal
struct UBPWaveLIbrary_C_Rotation_from_Normal_Params
{
	struct FVector                                     X_Vector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Z_Vector__Normal_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Additional_Tilt;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Additional_Pitch;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Finalize Gerstner Normal
struct UBPWaveLIbrary_C_Finalize_Gerstner_Normal_Params
{
	struct FVector                                     N;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     N_;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Wave Rotation Setup
struct UBPWaveLIbrary_C_Wave_Rotation_Setup_Params
{
	float                                              Wave_Pos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Time;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Crash_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wavelength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Wave_Direction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Local_Pivot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Beach_X_Pos;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Break_Distance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Sine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Crest_Power;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Crash_Power;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Crash_Power;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation_Angle;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     World_Pivot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Raw_Shore_Mask;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Wavelength to Wavespeed
struct UBPWaveLIbrary_C_Wavelength_to_Wavespeed_Params
{
	float                                              Wavelength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              s;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Exp2
struct UBPWaveLIbrary_C_Exp2_Params
{
	float                                              Depth;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave_MPC_Deep
struct UBPWaveLIbrary_C_Gerstner_Wave_MPC_Deep_Params
{
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWaveParams                                 Wave_Params;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Phase_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   XY;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Pos;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Time;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Sine;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave
struct UBPWaveLIbrary_C_Gerstner_Wave_Params
{
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   K;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Steepness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Phase_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   XY;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
