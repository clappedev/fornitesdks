#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xF (0xEC8 - 0xEB9)
// BlueprintGeneratedClass B_BadgerGrape_Athena.B_BadgerGrape_Athena_C
class AB_BadgerGrape_Athena_C : public AB_Hookgun_Athena_C
{
public:
	uint8                                        Pad_468F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_BadgerGrape_Athena_C");
		return Clss;
	}

	void Completed_BE41CB29498F607004FD09B58498B6DA();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_BadgerGrape_Athena(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPrimaryAssetId>& K2Node_MakeArray_Array_1, TArray<class FName>& K2Node_MakeArray_Array_2, class UAsyncActionChangePrimaryAssetBundles* CallFunc_AsyncChangeBundleStateForPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
