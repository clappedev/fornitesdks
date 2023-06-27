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

// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
// 0x0080 (0x0348 - 0x02C8)
class UToyOptionsComponent_C : public UFortActorOptionsComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty ToyOptionsComponent.ToyOptionsComponent_C.OptionsWidgetClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty ToyOptionsComponent.ToyOptionsComponent_C.MyIslandTabList
	bool                                               IsMachine;                                                // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class AFortPlayerController*                       InteractingPlayer;                                        // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortMatchmakingKnobsModal*                  outModalWidget;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bInteractSuccess;                                         // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class UClass*                                      ClassToLoad;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C");
		return ptr;
	}


	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UClass* Loaded);
	void DisplayOptions(class APlayerController* InteractingPlayer);
	void ExecuteUbergraph_ToyOptionsComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
