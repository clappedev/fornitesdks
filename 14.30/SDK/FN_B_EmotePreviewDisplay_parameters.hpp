#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds
struct AB_EmotePreviewDisplay_C_CleanupDynamicSounds_Params
{
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet
struct AB_EmotePreviewDisplay_C_ApplyEmoteToPet_Params
{
	bool                                               IsRemoval;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958
struct AB_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote
struct AB_EmotePreviewDisplay_C_PreviewEmote_Params
{
	class UFortMontageItemDefinitionBase*              Emote;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction
struct AB_EmotePreviewDisplay_C_PerformSpecialAction_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay
struct AB_EmotePreviewDisplay_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.SpecialCaseShoutHandler
struct AB_EmotePreviewDisplay_C_SpecialCaseShoutHandler_Params
{
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay
struct AB_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished__DelegateSignature
struct AB_EmotePreviewDisplay_C_OnEmoteSetupFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
