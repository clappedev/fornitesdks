#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.RequestUpdateAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftboxUnownedMessage_C::RequestUpdateAnim()
{
	static auto Func = Class->GetFunction("AthenaGiftboxUnownedMessage_C", "RequestUpdateAnim");

	Params::UAthenaGiftboxUnownedMessage_C_RequestUpdateAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.RequestIntroAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftboxUnownedMessage_C::RequestIntroAnim()
{
	static auto Func = Class->GetFunction("AthenaGiftboxUnownedMessage_C", "RequestIntroAnim");

	Params::UAthenaGiftboxUnownedMessage_C_RequestIntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.RequestOutroAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftboxUnownedMessage_C::RequestOutroAnim()
{
	static auto Func = Class->GetFunction("AthenaGiftboxUnownedMessage_C", "RequestOutroAnim");

	Params::UAthenaGiftboxUnownedMessage_C_RequestOutroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.OutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaGiftboxUnownedMessage_C::OutroFinished()
{
	static auto Func = Class->GetFunction("AthenaGiftboxUnownedMessage_C", "OutroFinished");

	Params::UAthenaGiftboxUnownedMessage_C_OutroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.ExecuteUbergraph_AthenaGiftboxUnownedMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGiftboxUnownedMessage_C::ExecuteUbergraph_AthenaGiftboxUnownedMessage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static auto Func = Class->GetFunction("AthenaGiftboxUnownedMessage_C", "ExecuteUbergraph_AthenaGiftboxUnownedMessage");

	Params::UAthenaGiftboxUnownedMessage_C_ExecuteUbergraph_AthenaGiftboxUnownedMessage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
