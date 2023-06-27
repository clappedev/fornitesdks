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

// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// 0x0020 (0x0800 - 0x07E0)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            CameraActor_1;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             CachedPawn;                                               // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C");
		
		return ptr;
	}


	void HandleMousePress();
	void HandleMouseRelease();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnActivated(class AFortPlayerController* PlayerController);
	void OnDeactivated(class AFortPlayerController* PlayerController);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
