#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SelectEvolutionChoice
struct UItemInspectEvolutionChoiceEntry_C_SelectEvolutionChoice_Params
{
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.DoDesignTimeRandomization
struct UItemInspectEvolutionChoiceEntry_C_DoDesignTimeRandomization_Params
{
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent
struct UItemInspectEvolutionChoiceEntry_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnabledChoice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnSelected
struct UItemInspectEvolutionChoiceEntry_C_OnSelected_Params
{
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.PreConstruct
struct UItemInspectEvolutionChoiceEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry
struct UItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected__DelegateSignature
struct UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceSelected__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered__DelegateSignature
struct UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceUnhovered__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered__DelegateSignature
struct UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceHovered__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
