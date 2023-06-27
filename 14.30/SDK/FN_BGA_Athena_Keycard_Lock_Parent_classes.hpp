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

// BlueprintGeneratedClass BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C
// 0x0069 (0x0969 - 0x0900)
class ABGA_Athena_Keycard_Lock_Parent_C : public ABGA_Athena_Lock_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ScannerScreenActor;                                       // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GC_Fail;                                                  // 0x0910(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TagToCheck;                                               // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Success;                                               // 0x0920(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    KeyID;                                                    // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIDI_ConsoleScreen;                                       // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_UI_ScannerScreen_C*                      ScannerScreen;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       PoINameText;                                              // 0x0940(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                OriginalEmissive;                                         // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScreenWidgetActive;                                       // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C");
		
		return ptr;
	}


	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void LockCheck(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, bool* CheckPassed);
	void ApplyFailCheckEffect();
	void CallOpenVault();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void ReceiveBeginPlay();
	void ShowSuccessScreen();
	void ShowFailScreen();
	void HideAndKill();
	void SetLock(TEnumAsByte<Enum_Athena_Lock> LockState);
	void ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
