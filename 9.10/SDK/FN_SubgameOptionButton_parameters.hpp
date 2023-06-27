#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SubgameOptionButton.SubgameOptionButton_C.SetupTile
struct USubgameOptionButton_C_SetupTile_Params
{
	class UTexture2D*                                  Key_Art;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_Fill;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_Gradient;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SpecialMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Message_BackgroundColor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       StandardMessageLine1;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       StandardMessageLine2;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SubgameOptionButton.SubgameOptionButton_C.OnTileFocused
struct USubgameOptionButton_C_OnTileFocused_Params
{
};

// Function SubgameOptionButton.SubgameOptionButton_C.OnTileUnfocused
struct USubgameOptionButton_C_OnTileUnfocused_Params
{
};

// Function SubgameOptionButton.SubgameOptionButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent
struct USubgameOptionButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameOptionButton.SubgameOptionButton_C.PreConstruct
struct USubgameOptionButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameOptionButton.SubgameOptionButton_C.BP_OnClicked
struct USubgameOptionButton_C_BP_OnClicked_Params
{
};

// Function SubgameOptionButton.SubgameOptionButton_C.Construct
struct USubgameOptionButton_C_Construct_Params
{
};

// Function SubgameOptionButton.SubgameOptionButton_C.EventOtherTileFocused
struct USubgameOptionButton_C_EventOtherTileFocused_Params
{
};

// Function SubgameOptionButton.SubgameOptionButton_C.RefreshSubGameDisplay
struct USubgameOptionButton_C_RefreshSubGameDisplay_Params
{
	struct FSubgameDisplayData                         SubGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SubgameOptionButton.SubgameOptionButton_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent
struct USubgameOptionButton_C_BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_Params
{
};

// Function SubgameOptionButton.SubgameOptionButton_C.ExecuteUbergraph_SubgameOptionButton
struct USubgameOptionButton_C_ExecuteUbergraph_SubgameOptionButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameOptionButton.SubgameOptionButton_C.OnSubgameOptionSelected__DelegateSignature
struct USubgameOptionButton_C_OnSubgameOptionSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
