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

// BlueprintGeneratedClass B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
// 0x0078 (0x02B0 - 0x0238)
class AB_EmotePreviewDisplay_C : public AFortEmotePreviewActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAthenaEmojiItemDefinition*                  EmojiItemDefinition;                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0250(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.Animation
	class UFortMontageItemDefinitionBase*              DanceOrEmojiItemDefinition;                               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0288(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished
	class UAthenaShoutItemDefinition*                  ShoutItemDefinition;                                      // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAudioComponent*>                     DynamicallySpawnedSounds;                                 // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_EmotePreviewDisplay.B_EmotePreviewDisplay_C");
		
		return ptr;
	}


	void CleanupDynamicSounds();
	void ApplyEmoteToPet(bool IsRemoval);
	void OnLoaded_638F148342254A777E929B88915A8958(class UObject* Loaded);
	void PreviewEmote(class UFortMontageItemDefinitionBase* Emote);
	void PerformSpecialAction(const struct FName& ActionName);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SpecialCaseShoutHandler();
	void ExecuteUbergraph_B_EmotePreviewDisplay(int EntryPoint);
	void OnEmoteSetupFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
