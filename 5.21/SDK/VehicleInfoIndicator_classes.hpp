#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x290 - 0x280)
// WidgetBlueprintGeneratedClass VehicleInfoIndicator.VehicleInfoIndicator_C
class UVehicleInfoIndicator_C : public UFortVehicleInfoIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UCommonHealthBar_C*                    CommonHealthBar;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleInfoIndicator_C");
		return Clss;
	}

	void OnVehicleChanged();
	void OnVehicleHealthChanged();
	void ExecuteUbergraph_VehicleInfoIndicator(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
