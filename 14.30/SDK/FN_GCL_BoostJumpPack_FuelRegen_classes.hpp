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

// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
// 0x003C (0x0474 - 0x0438)
class AGCL_BoostJumpPack_FuelRegen_C : public AGameplayCueNotify_Jetpack_FuelRegen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1;// 0x0444(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FullBlinkTimeline;                                        // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedParticleEmitter;                                   // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UAudioComponent*                             OnFuelRechargeRamp_Comp;                                  // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ReserveFuelMax;                                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C");
		
		return ptr;
	}


	void FullBlinkTimeline__FinishedFunc();
	void FullBlinkTimeline__UpdateFunc();
	void ResetBlink(class AFortPlayerPawn* PlayerPawn);
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
