#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x380 - 0x360)
// WidgetBlueprintGeneratedClass BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C
class UBacchusLocalPlayerInfo_C : public UBacchusHUDElement
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	class UAthenaLocalPlayerHitPointInfo_C*      AthenaLocalPlayerHitPointInfo;                     // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Marker;                                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusLocalPlayerInfo_C");
		return Clss;
	}

	void Set_View_Model(class UAthenaPlayerViewModel* View_Model);
	void Construct();
	void On_Player_Name_Change(const class FString& NewName);
	void On_Local_Player_View_Target_Change();
	void ExecuteUbergraph_BacchusLocalPlayerInfo(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FLinearColor& CallFunc_GetPlayerColor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, class UAthenaPlayerViewModel* K2Node_CustomEvent_View_Model, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, const class FString& K2Node_CustomEvent_NewName, class FText CallFunc_Conv_StringToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
