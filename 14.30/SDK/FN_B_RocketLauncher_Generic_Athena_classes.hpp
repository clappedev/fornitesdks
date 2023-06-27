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

// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C
// 0x0010 (0x1320 - 0x1310)
class AB_RocketLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    RearMuzzle;                                               // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C");
		
		return ptr;
	}


	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
