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

// BlueprintGeneratedClass GCN_Athena_Backpack.GCN_Athena_Backpack_C
// 0x0010 (0x04A0 - 0x0490)
class AGCN_Athena_Backpack_C : public AFortGameplayCueNotify_Looping
{
public:
	class USkeletalMeshComponent*                      BackpackSkelMesh;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerPawn;                                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_Backpack.GCN_Athena_Backpack_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
