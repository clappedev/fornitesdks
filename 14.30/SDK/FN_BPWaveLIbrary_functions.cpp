// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWaveLIbrary.BPWaveLIbrary_C.Generate Wave Spectrum
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWaveSpectrumSettings   Spectrum                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWaterWaveParams> Waves                          (Parm, OutParm)

void UBPWaveLIbrary_C::STATIC_Generate_Wave_Spectrum(class UObject* __WorldContext, struct FWaveSpectrumSettings* Spectrum, TArray<struct FWaterWaveParams>* Waves)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Generate Wave Spectrum");

	UBPWaveLIbrary_C_Generate_Wave_Spectrum_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spectrum != nullptr)
		*Spectrum = params.Spectrum;
	if (Waves != nullptr)
		*Waves = params.Waves;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Harvest Wave Params
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Harvest_Wave_Params(class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Harvest Wave Params");

	UBPWaveLIbrary_C_Harvest_Wave_Params_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Water Depth to Wavespeed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Water_Depth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          s                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Water_Depth_to_Wavespeed(float Water_Depth, class UObject* __WorldContext, float* s)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Water Depth to Wavespeed");

	UBPWaveLIbrary_C_Water_Depth_to_Wavespeed_Params params;
	params.Water_Depth = Water_Depth;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (s != nullptr)
		*s = params.s;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave_MPC_Shallow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWaveParams             Wave_Params                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Phase_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Water_Depth__wave0_only_       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               XY                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Pos                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Time                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Sine                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Gerstner_Wave_MPC_Shallow(const struct FVector& Pos, const struct FWaveParams& Wave_Params, float Time, float Phase_Offset, float Water_Depth__wave0_only_, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_Pos, float* Wave_Time, float* Wave_Sine)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave_MPC_Shallow");

	UBPWaveLIbrary_C_Gerstner_Wave_MPC_Shallow_Params params;
	params.Pos = Pos;
	params.Wave_Params = Wave_Params;
	params.Time = Time;
	params.Phase_Offset = Phase_Offset;
	params.Water_Depth__wave0_only_ = Water_Depth__wave0_only_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XY != nullptr)
		*XY = params.XY;
	if (Z != nullptr)
		*Z = params.Z;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Wave_Pos != nullptr)
		*Wave_Pos = params.Wave_Pos;
	if (Wave_Time != nullptr)
		*Wave_Time = params.Wave_Time;
	if (Wave_Sine != nullptr)
		*Wave_Sine = params.Wave_Sine;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner 3 Waves
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num_Waves                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWaveParams>     Wave_Array                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Water_Depth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Break_Tangent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Break_Cos                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               XY                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_0_Pos                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_0_Time                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_0_Sine                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Gerstner_3_Waves(const struct FVector& Pos, int Num_Waves, float Time, float Water_Depth, float Break_Tangent, float Break_Cos, class UObject* __WorldContext, TArray<struct FWaveParams>* Wave_Array, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_0_Pos, float* Wave_0_Time, float* Wave_0_Sine)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner 3 Waves");

	UBPWaveLIbrary_C_Gerstner_3_Waves_Params params;
	params.Pos = Pos;
	params.Num_Waves = Num_Waves;
	params.Time = Time;
	params.Water_Depth = Water_Depth;
	params.Break_Tangent = Break_Tangent;
	params.Break_Cos = Break_Cos;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wave_Array != nullptr)
		*Wave_Array = params.Wave_Array;
	if (XY != nullptr)
		*XY = params.XY;
	if (Z != nullptr)
		*Z = params.Z;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Wave_0_Pos != nullptr)
		*Wave_0_Pos = params.Wave_0_Pos;
	if (Wave_0_Time != nullptr)
		*Wave_0_Time = params.Wave_0_Time;
	if (Wave_0_Sine != nullptr)
		*Wave_0_Sine = params.Wave_0_Sine;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Rotation from Normal
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 X_Vector                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Z_Vector__Normal_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Additional_Tilt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Additional_Pitch               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Rotation_from_Normal(const struct FVector& X_Vector, const struct FVector& Z_Vector__Normal_, float Additional_Tilt, float Additional_Pitch, class UObject* __WorldContext, struct FRotator* Rotator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Rotation from Normal");

	UBPWaveLIbrary_C_Rotation_from_Normal_Params params;
	params.X_Vector = X_Vector;
	params.Z_Vector__Normal_ = Z_Vector__Normal_;
	params.Additional_Tilt = Additional_Tilt;
	params.Additional_Pitch = Additional_Pitch;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Finalize Gerstner Normal
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 N                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 N_                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Finalize_Gerstner_Normal(const struct FVector& N, class UObject* __WorldContext, struct FVector* N_)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Finalize Gerstner Normal");

	UBPWaveLIbrary_C_Finalize_Gerstner_Normal_Params params;
	params.N = N;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (N_ != nullptr)
		*N_ = params.N_;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Wave Rotation Setup
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Wave_Pos                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Time                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Crash_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wavelength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Wave_Direction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Local_Pivot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Beach_X_Pos                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Break_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Sine                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Crest_Power                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Crash_Power              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Crash_Power                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation_Angle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 World_Pivot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Raw_Shore_Mask                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Wave_Rotation_Setup(float Wave_Pos, float Wave_Time, float Crash_Offset, float Wavelength, const struct FVector& Wave_Direction, const struct FVector& Local_Pivot, float Beach_X_Pos, float Break_Distance, float Wave_Sine, float Crest_Power, float Start_Crash_Power, float End_Crash_Power, float MaxRotation, class UObject* __WorldContext, float* Rotation_Angle, struct FVector* World_Pivot, float* Raw_Shore_Mask)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Wave Rotation Setup");

	UBPWaveLIbrary_C_Wave_Rotation_Setup_Params params;
	params.Wave_Pos = Wave_Pos;
	params.Wave_Time = Wave_Time;
	params.Crash_Offset = Crash_Offset;
	params.Wavelength = Wavelength;
	params.Wave_Direction = Wave_Direction;
	params.Local_Pivot = Local_Pivot;
	params.Beach_X_Pos = Beach_X_Pos;
	params.Break_Distance = Break_Distance;
	params.Wave_Sine = Wave_Sine;
	params.Crest_Power = Crest_Power;
	params.Start_Crash_Power = Start_Crash_Power;
	params.End_Crash_Power = End_Crash_Power;
	params.MaxRotation = MaxRotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation_Angle != nullptr)
		*Rotation_Angle = params.Rotation_Angle;
	if (World_Pivot != nullptr)
		*World_Pivot = params.World_Pivot;
	if (Raw_Shore_Mask != nullptr)
		*Raw_Shore_Mask = params.Raw_Shore_Mask;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Wavelength to Wavespeed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Wavelength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          s                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Wavelength_to_Wavespeed(float Wavelength, class UObject* __WorldContext, float* s)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Wavelength to Wavespeed");

	UBPWaveLIbrary_C_Wavelength_to_Wavespeed_Params params;
	params.Wavelength = Wavelength;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (s != nullptr)
		*s = params.s;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Exp2
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Depth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Density                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Exp2(float Depth, float Density, class UObject* __WorldContext, float* NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Exp2");

	UBPWaveLIbrary_C_Exp2_Params params;
	params.Depth = Depth;
	params.Density = Density;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave_MPC_Deep
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWaveParams             Wave_Params                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Phase_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               XY                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Pos                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Time                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wave_Sine                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Gerstner_Wave_MPC_Deep(const struct FVector& Pos, const struct FWaveParams& Wave_Params, float Time, float Phase_Offset, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_Pos, float* Wave_Time, float* Wave_Sine)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave_MPC_Deep");

	UBPWaveLIbrary_C_Gerstner_Wave_MPC_Deep_Params params;
	params.Pos = Pos;
	params.Wave_Params = Wave_Params;
	params.Time = Time;
	params.Phase_Offset = Phase_Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XY != nullptr)
		*XY = params.XY;
	if (Z != nullptr)
		*Z = params.Z;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Wave_Pos != nullptr)
		*Wave_Pos = params.Wave_Pos;
	if (Wave_Time != nullptr)
		*Wave_Time = params.Wave_Time;
	if (Wave_Sine != nullptr)
		*Wave_Sine = params.Wave_Sine;
}


// Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               K                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Steepness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Phase_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               XY                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWaveLIbrary_C::STATIC_Gerstner_Wave(const struct FVector& Pos, const struct FVector2D& K, float W, float A, float Steepness, float Phase_Offset, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPWaveLIbrary.BPWaveLIbrary_C.Gerstner Wave");

	UBPWaveLIbrary_C_Gerstner_Wave_Params params;
	params.Pos = Pos;
	params.K = K;
	params.W = W;
	params.A = A;
	params.Steepness = Steepness;
	params.Phase_Offset = Phase_Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XY != nullptr)
		*XY = params.XY;
	if (Z != nullptr)
		*Z = params.Z;
	if (Normal != nullptr)
		*Normal = params.Normal;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
