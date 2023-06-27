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

// BlueprintGeneratedClass VaultWorld.VaultWorld_C
// 0x0009 (0x02C9 - 0x02C0)
class AVaultWorld_C : public AFortItemPreviewWorld
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bIsPrimaryBackgroundActive;                               // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VaultWorld.VaultWorld_C");
		
		return ptr;
	}


	void GetVaultRotator(class AVaultRotator_C** VaultRotator);
	void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, const struct FTrackDynamicBackground& BackgroundInfo);
	void OnTransitionBackground(bool bPlayForward);
	void ReceiveBeginPlay();
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void ExecuteUbergraph_VaultWorld(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
