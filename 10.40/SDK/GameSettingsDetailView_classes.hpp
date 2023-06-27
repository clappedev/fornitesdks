#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x338 - 0x338)
// WidgetBlueprintGeneratedClass GameSettingsDetailView.GameSettingsDetailView_C
class UGameSettingsDetailView_C : public UFortSettingDetailView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameSettingsDetailView_C");
		return Clss;
	}

	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> GatherDetailExtensions(class UFortSetting* InSetting, TArray<TSoftClassPtr<class UFortSettingDetailExtension>>& K2Node_MakeArray_Array, class UFortSettingControllerInput* K2Node_DynamicCast_AsFort_Setting_Controller_Input, bool K2Node_DynamicCast_bSuccess, class UFortSettingValueDiscrete* K2Node_DynamicCast_AsFort_Setting_Value_Discrete, bool K2Node_DynamicCast_bSuccess_1, TArray<TSoftClassPtr<class UFortSettingDetailExtension>>& K2Node_MakeArray_Array_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
