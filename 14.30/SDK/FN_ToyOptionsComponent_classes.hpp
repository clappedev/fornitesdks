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

// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
// 0x00B1 (0x02D1 - 0x0220)
class UToyOptionsComponent_C : public UFortActorOptionsComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0228(0x0028) UNKNOWN PROPERTY: SoftClassProperty ToyOptionsComponent.ToyOptionsComponent_C.OptionsWidgetClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0250(0x0028) UNKNOWN PROPERTY: SoftClassProperty ToyOptionsComponent.ToyOptionsComponent_C.MyIslandTabList
	bool                                               IsMachine;                                                // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class AFortPlayerController*                       InteractingPlayer;                                        // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortMatchmakingKnobsModal*                  outModalWidget;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bInteractSuccess;                                         // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UObject*                                     ClassToLoad;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty ToyOptionsComponent.ToyOptionsComponent_C.PropertyEditorWidgetClass
	class UUserWidget*                                 CachedDisplayWidget;                                      // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               LoadingAssets;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C");
		
		return ptr;
	}


	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UObject* Loaded);
	void DisplayOptions(class APlayerController* InteractingPlayer);
	void ExecuteUbergraph_ToyOptionsComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
