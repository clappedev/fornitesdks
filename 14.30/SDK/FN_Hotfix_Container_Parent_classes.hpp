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

// BlueprintGeneratedClass Hotfix_Container_Parent.Hotfix_Container_Parent_C
// 0x0069 (0x0D91 - 0x0D28)
class AHotfix_Container_Parent_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                              Row_ActorEnabled;                                         // 0x0D30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_InteractEnabled;                                      // 0x0D50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             FX_Open;                                                  // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FX_OpenOffsetLocation;                                    // 0x0D78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FX_OpenPitchOffset;                                       // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Open;                                               // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableLootOnDisableInteract;                             // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hotfix_Container_Parent.Hotfix_Container_Parent_C");
		
		return ptr;
	}


	void OnReady_8BE6ADB6479A5EF3145F32B245E584C6(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void OnLoot();
	void ExecuteUbergraph_Hotfix_Container_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
