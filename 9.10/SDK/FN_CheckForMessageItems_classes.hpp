#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CheckForMessageItems.CheckForMessageItems_C
// 0x0018 (0x02B8 - 0x02A0)
class ACheckForMessageItems_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortGiftBoxItem*                            GiftBox;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckForMessageItems.CheckForMessageItems_C");
		return ptr;
	}


	void Closed(class UCommonActivatablePanel* Closed);
	void ShowMessage();
	void Execute(struct FFortScriptedActionParams Params);
	void ExecuteUbergraph_CheckForMessageItems(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
