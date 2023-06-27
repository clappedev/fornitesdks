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

// BlueprintGeneratedClass Frontend_BG_Main.Frontend_BG_Main_C
// 0x0018 (0x0250 - 0x0238)
class AFrontend_BG_Main_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Frontend_ShopBG_C*                       BP_Frontend_ShopBG_9_ExecuteUbergraph_Frontend_BG_Main_RefProperty;// 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortStaticMeshActor*                        S_UI_FrontendInspect_HexDonut_ExecuteUbergraph_Frontend_BG_Main_RefProperty;// 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_BG_Main.Frontend_BG_Main_C");
		
		return ptr;
	}


	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature();
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature();
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage);
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const struct FString& PresetEnvironmentName);
	void ReceiveBeginPlay();
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature();
	void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature();
	void ExecuteUbergraph_Frontend_BG_Main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
