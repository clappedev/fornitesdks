// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence FinishingSentence              (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            FinishingSentenceSentenceIndex (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_Gen_Conversation_C::OnConversationFinished(struct FFortConversationSentence FinishingSentence, int FinishingSentenceSentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.OnConversationFinished");

	AAnnounce_Gen_Conversation_C_OnConversationFinished_Params params;
	params.FinishingSentence = FinishingSentence;
	params.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.ExecuteUbergraph_Announce_Gen_Conversation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_Gen_Conversation_C::ExecuteUbergraph_Announce_Gen_Conversation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.ExecuteUbergraph_Announce_Gen_Conversation");

	AAnnounce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
