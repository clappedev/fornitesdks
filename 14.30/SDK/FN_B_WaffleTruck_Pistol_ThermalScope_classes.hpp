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

// BlueprintGeneratedClass B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C
// 0x0020 (0x1344 - 0x1324)
class AB_WaffleTruck_Pistol_ThermalScope_C : public AB_WaffleTruck_ScopedRevolver_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1324(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ScalePlayerThermal_NewTrack_0_74F122334ABEC082DB6D87A4D6AEF901;// 0x1330(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScalePlayerThermal__Direction_74F122334ABEC082DB6D87A4D6AEF901;// 0x1334(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1335(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScalePlayerThermal;                                       // 0x1338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BlendInTimeThermal;                                       // 0x1340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C");
		
		return ptr;
	}


	void ScalePlayerThermal__FinishedFunc();
	void ScalePlayerThermal__UpdateFunc();
	void OnSetTargeting(bool bNewIsTargeting);
	void PlayScopePP();
	void ReverseScopePP();
	void ForceScopeBackImmediatly();
	void ExecuteUbergraph_B_WaffleTruck_Pistol_ThermalScope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
