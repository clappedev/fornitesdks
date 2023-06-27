#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x238 - 0x208)
// WidgetBlueprintGeneratedClass ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C
class UChallengeBundleLockedReasonDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      LockedText;                                        // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortChallengeBundleInfoLockedReason  LockReason;                                        // 0x218(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UInterfaceProperty_                          TimespanSource;                                    // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeBundleLockedReasonDisplay_C");
		return Clss;
	}

	void GetTimespanValue(struct FTimespan* Result, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FTimespan& CallFunc_GetValue_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleTick(class UObject* Source);
	void SetTimespanSource(UInterfaceProperty_ Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void UpdateLockReasonDisplay(const struct FTimespan& CallFunc_GetTimespanValue_Result, class FText CallFunc_FormatLockedReason_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void SetLockReason(const struct FFortChallengeBundleInfoLockedReason& Value);
	void Construct();
	void ExecuteUbergraph_ChallengeBundleLockedReasonDisplay(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
