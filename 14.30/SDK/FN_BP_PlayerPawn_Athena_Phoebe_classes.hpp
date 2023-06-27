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

// BlueprintGeneratedClass BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C
// 0x0010 (0x4120 - 0x4110)
class ABP_PlayerPawn_Athena_Phoebe_C : public APlayerPawn_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x4110(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       AIEvaluator_CharacterLaunchedKeyName;                     // 0x4118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C");
		
		return ptr;
	}


	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
