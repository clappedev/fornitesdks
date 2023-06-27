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

// BlueprintGeneratedClass GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C
// 0x0016 (0x0EA0 - 0x0E8A)
class UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C : public UGA_Athena_PlaysetGrenadeWithTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0E8A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Throw_Loop_Sound;                                         // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C");
		
		return ptr;
	}


	void GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void SetPlaysetData(class AFortProjectileBase* Projectile_Reference);
	void SetActivePlaysetOnPlayer();
	void ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
