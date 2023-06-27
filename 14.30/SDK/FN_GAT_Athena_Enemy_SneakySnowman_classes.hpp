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

// BlueprintGeneratedClass GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C
// 0x0017 (0x0AD0 - 0x0AB9)
class UGAT_Athena_Enemy_SneakySnowman_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C");
		
		return ptr;
	}


	void Remove_Snowman(class AFortPlayerPawn* PlayerPawn);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
