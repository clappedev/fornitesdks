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

// BlueprintGeneratedClass B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C
// 0x0008 (0x0A58 - 0x0A50)
class AB_BGA_Athena_CampFire_Trap_C : public AB_BGA_Athena_EnvCampFire_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C");
		
		return ptr;
	}


	void OnBuildingActorInitialized(TEnumAsByte<EFortBuildingInitializationReason> InitializationReason, TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState);
	void ExecuteUbergraph_B_BGA_Athena_CampFire_Trap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
