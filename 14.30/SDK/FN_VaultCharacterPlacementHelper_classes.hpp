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

// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// 0x0090 (0x02B0 - 0x0220)
class AVaultCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Floor;                                                    // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  OriginalTransform;                                        // 0x0240(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetTranslate;                                          // 0x0270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetRotate;                                             // 0x027C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Athena;                                                   // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0289(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated
	class USoundBase*                                  Zoom_Out_Sound;                                           // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Zoom_In_Sound;                                            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C");
		
		return ptr;
	}


	void UpdatePosition_For_Camera(EFrontEndCamera FrontEndCamera);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SubGameChanged_Event_1(ESubGame SubGame);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int EntryPoint);
	void OnZoomLevelUpdated__DelegateSignature(float CurrentZoomLevel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
