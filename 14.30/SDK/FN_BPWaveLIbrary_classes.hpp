#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWaveLIbrary.BPWaveLIbrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPWaveLIbrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWaveLIbrary.BPWaveLIbrary_C");
		
		return ptr;
	}


	void STATIC_Generate_Wave_Spectrum(class UObject* __WorldContext, struct FWaveSpectrumSettings* Spectrum, TArray<struct FWaterWaveParams>* Waves);
	void STATIC_Harvest_Wave_Params(class UObject* __WorldContext);
	void STATIC_Water_Depth_to_Wavespeed(float Water_Depth, class UObject* __WorldContext, float* s);
	void STATIC_Gerstner_Wave_MPC_Shallow(const struct FVector& Pos, const struct FWaveParams& Wave_Params, float Time, float Phase_Offset, float Water_Depth__wave0_only_, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_Pos, float* Wave_Time, float* Wave_Sine);
	void STATIC_Gerstner_3_Waves(const struct FVector& Pos, int Num_Waves, float Time, float Water_Depth, float Break_Tangent, float Break_Cos, class UObject* __WorldContext, TArray<struct FWaveParams>* Wave_Array, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_0_Pos, float* Wave_0_Time, float* Wave_0_Sine);
	void STATIC_Rotation_from_Normal(const struct FVector& X_Vector, const struct FVector& Z_Vector__Normal_, float Additional_Tilt, float Additional_Pitch, class UObject* __WorldContext, struct FRotator* Rotator);
	void STATIC_Finalize_Gerstner_Normal(const struct FVector& N, class UObject* __WorldContext, struct FVector* N_);
	void STATIC_Wave_Rotation_Setup(float Wave_Pos, float Wave_Time, float Crash_Offset, float Wavelength, const struct FVector& Wave_Direction, const struct FVector& Local_Pivot, float Beach_X_Pos, float Break_Distance, float Wave_Sine, float Crest_Power, float Start_Crash_Power, float End_Crash_Power, float MaxRotation, class UObject* __WorldContext, float* Rotation_Angle, struct FVector* World_Pivot, float* Raw_Shore_Mask);
	void STATIC_Wavelength_to_Wavespeed(float Wavelength, class UObject* __WorldContext, float* s);
	void STATIC_Exp2(float Depth, float Density, class UObject* __WorldContext, float* NewParam);
	void STATIC_Gerstner_Wave_MPC_Deep(const struct FVector& Pos, const struct FWaveParams& Wave_Params, float Time, float Phase_Offset, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal, float* Wave_Pos, float* Wave_Time, float* Wave_Sine);
	void STATIC_Gerstner_Wave(const struct FVector& Pos, const struct FVector2D& K, float W, float A, float Steepness, float Phase_Offset, class UObject* __WorldContext, struct FVector2D* XY, float* Z, struct FVector* Normal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
