#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
// 0x0149 (0x08F1 - 0x07A8)
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A8(0x0008) (Transient, DuplicateTransient)
	class USpacer*                                     InternalSpacer;                                           // 0x07B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      SelectionPulseEffect;                                     // 0x07B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              SelectionGlowPercentage;                                  // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverGlowPercentage;                                      // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HoverGlowTimerHandle;                                     // 0x07C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                SelectionGlowTimerHandle;                                 // 0x07D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSkillTreePageColors                        PageColors;                                               // 0x07D8(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ESkillTreePages>                       Pages;                                                    // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	struct FSkillTreeGroupColors                       GroupColors;                                              // 0x089C(0x0054) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ESkillTreeGroups>                      Groups;                                                   // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C");
		return ptr;
	}


	void SetBackgroundColor();
	void UpdateFromButtonState();
	void UpdateSelectionGlow();
	void UpdateHoverGlow();
	void StepSelectionGlowInterpolation();
	void StepHoverGlowInterpolation();
	void UpdateFromNodeData();
	void UpdateFromNodeState();
	void Construct();
	void HandleSkillTreeNodeStateChanged();
	void PreConstruct(bool* IsDesignTime);
	void OnUnhovered();
	void OnHovered();
	void OnSelected();
	void OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
