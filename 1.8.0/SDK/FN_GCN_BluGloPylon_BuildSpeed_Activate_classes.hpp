#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C
// 0x0008 (0x0470 - 0x0468)
class AGCN_BluGloPylon_BuildSpeed_Activate_C : public AFortGameplayCueNotify_Looping
{
public:
	class UTexture*                                    IconTexture;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C");
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
