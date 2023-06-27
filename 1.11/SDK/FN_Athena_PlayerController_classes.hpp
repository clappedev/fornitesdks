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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x0010 (0x3420 - 0x3410)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3410(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x3418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		return ptr;
	}


	bool IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState** SquadMember);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayWinEffects();
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
