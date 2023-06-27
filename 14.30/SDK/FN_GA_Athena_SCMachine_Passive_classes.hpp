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

// BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
// 0x001C (0x0AC4 - 0x0AA8)
class UGA_Athena_SCMachine_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnZOffset;                                             // 0x0AB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C");
		
		return ptr;
	}


	void Check_Resurrection_Active(bool* bEnabled);
	void SaveOutPlayer();
	void Spawn();
	void HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
