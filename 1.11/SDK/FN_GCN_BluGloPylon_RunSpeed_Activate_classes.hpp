#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C
// 0x0008 (0x0498 - 0x0490)
class AGCN_BluGloPylon_RunSpeed_Activate_C : public AFortGameplayCueNotify_Looping
{
public:
	class UTexture*                                    IconTexture;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C");
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
