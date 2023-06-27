#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x268 - 0x250)
// WidgetBlueprintGeneratedClass PCB_InfoPannel.PCB_InfoPannel_C
class UPCB_InfoPannel_C : public UFortPCBInfoPannel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_Body;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Header;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PCB_InfoPannel_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_PCB_InfoPannel(int32 EntryPoint, class FText CallFunc_GetPCBDescription_ReturnValue, class FText CallFunc_GetPCBHeader_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
