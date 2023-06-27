#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Set View Model
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*      View_Model                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusLocalPlayerInfo_C::Set_View_Model(class UAthenaPlayerViewModel* View_Model)
{
	static auto Func = Class->GetFunction("BacchusLocalPlayerInfo_C", "Set View Model");

	Params::UBacchusLocalPlayerInfo_C_Set_View_Model_Params Parms;
	Parms.View_Model = View_Model;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBacchusLocalPlayerInfo_C::Construct()
{
	static auto Func = Class->GetFunction("BacchusLocalPlayerInfo_C", "Construct");

	Params::UBacchusLocalPlayerInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Player Name Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBacchusLocalPlayerInfo_C::On_Player_Name_Change(const class FString& NewName)
{
	static auto Func = Class->GetFunction("BacchusLocalPlayerInfo_C", "On Player Name Change");

	Params::UBacchusLocalPlayerInfo_C_On_Player_Name_Change_Params Parms;
	Parms.NewName = NewName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Local Player View Target Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusLocalPlayerInfo_C::On_Local_Player_View_Target_Change()
{
	static auto Func = Class->GetFunction("BacchusLocalPlayerInfo_C", "On Local Player View Target Change");

	Params::UBacchusLocalPlayerInfo_C_On_Local_Player_View_Target_Change_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.ExecuteUbergraph_BacchusLocalPlayerInfo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetPlayerColor_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UAthenaPlayerViewModel*      K2Node_CustomEvent_View_Model                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_NewName                                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSpectatingPlayerName_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          ()
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBacchusLocalPlayerInfo_C::ExecuteUbergraph_BacchusLocalPlayerInfo(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FLinearColor& CallFunc_GetPlayerColor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, class UAthenaPlayerViewModel* K2Node_CustomEvent_View_Model, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, const class FString& K2Node_CustomEvent_NewName, class FText CallFunc_Conv_StringToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BacchusLocalPlayerInfo_C", "ExecuteUbergraph_BacchusLocalPlayerInfo");

	Params::UBacchusLocalPlayerInfo_C_ExecuteUbergraph_BacchusLocalPlayerInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlayerColor_ReturnValue = CallFunc_GetPlayerColor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_CustomEvent_View_Model = K2Node_CustomEvent_View_Model;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CustomEvent_NewName = K2Node_CustomEvent_NewName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpectatingPlayerName_ReturnValue = CallFunc_GetSpectatingPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
