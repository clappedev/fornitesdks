#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x890 - 0x880)
// BlueprintGeneratedClass Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C
class AFrontend_Upgrades_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_Upgrades_Camera_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_Frontend_Upgrades_Camera(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
