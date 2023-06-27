#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_SneakySnowman_Athena.B_SneakySnowman_Athena_C
// 0x0048 (0x0950 - 0x0908)
class AB_SneakySnowman_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*                    SnowmanItemDef;                                           // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ShouldSnowmanInTurret;                                    // 0x0920(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFortItem*>                           SnowmanItemInstances;                                     // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SneakySnowman_Athena.B_SneakySnowman_Athena_C");
		return ptr;
	}


	void K2_OnUnEquip();
	void ExecuteUbergraph_B_SneakySnowman_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
