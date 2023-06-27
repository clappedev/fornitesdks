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

// BlueprintGeneratedClass FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
// 0x0020 (0x0800 - 0x07E0)
class AFrontendCamera_VaultRotator_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBattlepass;                                             // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class AVaultRotator_C*                             ActiveVaultRotator;                                       // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C");
		
		return ptr;
	}


	void SetVaultRotatorLighting(const struct FName& ItemRotatorTag);
	void OnActivated(class AFortPlayerController* PlayerController);
	void OnDeactivated(class AFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_VaultRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
