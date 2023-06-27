#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x11 (0x861 - 0x850)
// BlueprintGeneratedClass AtheaPlayspaceActor.AtheaPlayspaceActor_C
class AAtheaPlayspaceActor_C : public AFortPlayspace
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(Transient, DuplicateTransient)
	class UFortPlaysetItemDefinition*            DefaultPlayset;                                    // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowBounds;                                       // 0x860(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AtheaPlayspaceActor_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, class UFortPlaysetItemDefinition* CallFunc_GetCurrentPlayset_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AtheaPlayspaceActor(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
