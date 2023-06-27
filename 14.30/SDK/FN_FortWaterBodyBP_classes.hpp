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

// BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C
// 0x0058 (0x0F78 - 0x0F20)
class AFortWaterBodyBP_C : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FWaveSpectrumSettings                       Wave_Spectrum_Settings;                                   // 0x0F28(0x0048) (Edit, BlueprintVisible, IsPlainOldData)
	class ABP_FluidSim_FN_C*                           FluidSimBP;                                               // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnReceivedBulletImpact(const struct FHitResult& Hit);
	void ExecuteUbergraph_FortWaterBodyBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
