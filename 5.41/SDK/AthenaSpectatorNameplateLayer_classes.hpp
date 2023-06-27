#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x2A8 - 0x298)
// WidgetBlueprintGeneratedClass AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C
class UAthenaSpectatorNameplateLayer_C : public UAthenaSpectatorNameplateLayerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	class UFortActorCanvas*                      NameplateIndicatorsCanvas;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorNameplateLayer_C");
		return Clss;
	}

	void AddNameplate(class UAthenaSpectatorNameplateBase* NameplateWidget);
	void RemoveNameplate(class UAthenaSpectatorNameplateBase* NameplateWidget);
	void ExecuteUbergraph_AthenaSpectatorNameplateLayer(int32 EntryPoint, class UAthenaSpectatorNameplateBase* K2Node_Event_NameplateWidget1, class UAthenaSpectatorNameplateBase* K2Node_Event_NameplateWidget, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
