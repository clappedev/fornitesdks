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

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ViewVaultItemWithBackpack
struct UAthenaDirectAquisitionStyleScreen_C_ViewVaultItemWithBackpack_Params
{
	class UFortItemDefinition*                         ItemToRepresent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SetupCharacterItem
struct UAthenaDirectAquisitionStyleScreen_C_SetupCharacterItem_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetOfferGrantedItemDef
struct UAthenaDirectAquisitionStyleScreen_C_GetOfferGrantedItemDef_Params
{
	class UFortAccountItemDefinition*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer
struct UAthenaDirectAquisitionStyleScreen_C_RebuildStylesFromOffer_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer
struct UAthenaDirectAquisitionStyleScreen_C_SwitchToNextItemInOffer_Params
{
	int                                                Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants
struct UAthenaDirectAquisitionStyleScreen_C_ScanOfferForVariants_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant
struct UAthenaDirectAquisitionStyleScreen_C_UpdateFromVariant_Params
{
	struct FGameplayTag                                VariantChannelTag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                VariantTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Variant_CustomData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsOwned;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem
struct UAthenaDirectAquisitionStyleScreen_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
struct UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnOfferSet
struct UAthenaDirectAquisitionStyleScreen_C_BP_OnOfferSet_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnActivated
struct UAthenaDirectAquisitionStyleScreen_C_BP_OnActivated_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnDeactivated
struct UAthenaDirectAquisitionStyleScreen_C_BP_OnDeactivated_Params
{
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnVariantChanged
struct UAthenaDirectAquisitionStyleScreen_C_OnVariantChanged_Params
{
	struct FGameplayTag                                VariantChannel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                VariantTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     VariantCustomData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsOwned;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
struct UAthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
