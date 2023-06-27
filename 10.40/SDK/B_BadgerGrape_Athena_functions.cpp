#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_BadgerGrape_Athena.B_BadgerGrape_Athena_C.Completed_BE41CB29498F607004FD09B58498B6DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BadgerGrape_Athena_C::Completed_BE41CB29498F607004FD09B58498B6DA()
{
	static auto Func = Class->GetFunction("B_BadgerGrape_Athena_C", "Completed_BE41CB29498F607004FD09B58498B6DA");

	Params::AB_BadgerGrape_Athena_C_Completed_BE41CB29498F607004FD09B58498B6DA_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BadgerGrape_Athena.B_BadgerGrape_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_BadgerGrape_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_BadgerGrape_Athena_C", "ReceiveBeginPlay");

	Params::AB_BadgerGrape_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BadgerGrape_Athena.B_BadgerGrape_Athena_C.ExecuteUbergraph_B_BadgerGrape_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId>     K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array_2                                         (ConstParm, ZeroConstructor, ReferenceParm)
// class UAsyncActionChangePrimaryAssetBundles*CallFunc_AsyncChangeBundleStateForPrimaryAssetList_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BadgerGrape_Athena_C::ExecuteUbergraph_B_BadgerGrape_Athena(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPrimaryAssetId>& K2Node_MakeArray_Array_1, TArray<class FName>& K2Node_MakeArray_Array_2, class UAsyncActionChangePrimaryAssetBundles* CallFunc_AsyncChangeBundleStateForPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_BadgerGrape_Athena_C", "ExecuteUbergraph_B_BadgerGrape_Athena");

	Params::AB_BadgerGrape_Athena_C_ExecuteUbergraph_B_BadgerGrape_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_AsyncChangeBundleStateForPrimaryAssetList_ReturnValue = CallFunc_AsyncChangeBundleStateForPrimaryAssetList_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
