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

// BlueprintGeneratedClass B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C
// 0x001C (0x132C - 0x1310)
class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ScalePlayerThermal_NewTrack_0_253E51B74F624080BF58BDA99C8B5B64;// 0x1318(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScalePlayerThermal__Direction_253E51B74F624080BF58BDA99C8B5B64;// 0x131C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x131D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScalePlayerThermal;                                       // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C");
		
		return ptr;
	}


	void ScalePlayerThermal__FinishedFunc();
	void ScalePlayerThermal__UpdateFunc();
	void OnSetTargeting(bool bNewIsTargeting);
	void PlayScopePP();
	void ReverseScopePP();
	void ForceScopeBackImmediatly();
	void ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
