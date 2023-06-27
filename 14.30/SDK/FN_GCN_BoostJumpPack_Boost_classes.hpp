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

// BlueprintGeneratedClass GCN_BoostJumpPack_Boost.GCN_BoostJumpPack_Boost_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_BoostJumpPack_Boost_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_BoostJumpPack_Boost.GCN_BoostJumpPack_Boost_C");
		
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
