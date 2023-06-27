#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ScoreDetailsRow.ScoreDetailsRow_C.UpdateRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              TotalScore                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Combat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Building                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Utility                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreDetailsRow_C::UpdateRow(class FText PlayerName, int32 TotalScore, int32 Combat, int32 Building, int32 Utility, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue12, bool CallFunc_NotEqual_IntInt_ReturnValue123, float CallFunc_Conv_IntToFloat_ReturnValue123, bool CallFunc_NotEqual_TextText_ReturnValue)
{
	static auto Func = Class->GetFunction("ScoreDetailsRow_C", "UpdateRow");

	Params::UScoreDetailsRow_C_UpdateRow_Params Parms;
	Parms.PlayerName = PlayerName;
	Parms.TotalScore = TotalScore;
	Parms.Combat = Combat;
	Parms.Building = Building;
	Parms.Utility = Utility;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue1 = CallFunc_NotEqual_IntInt_ReturnValue1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue12 = CallFunc_NotEqual_IntInt_ReturnValue12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue123 = CallFunc_NotEqual_IntInt_ReturnValue123;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue123 = CallFunc_Conv_IntToFloat_ReturnValue123;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
