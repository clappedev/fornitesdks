#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x298 - 0x288)
// WidgetBlueprintGeneratedClass LoginUnavailable.LoginUnavailable_C
class ULoginUnavailable_C : public UFortLoginUnavailable
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     Button_Status;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoginUnavailable_C");
		return Clss;
	}

	void BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnMessageSet(bool bDisableMessage);
	void ExecuteUbergraph_LoginUnavailable(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bDisableMessage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
