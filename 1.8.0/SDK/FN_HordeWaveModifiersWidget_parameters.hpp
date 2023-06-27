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

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.PresentNextModifier
struct UHordeWaveModifiersWidget_C_PresentNextModifier_Params
{
};

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnModifiersAdded
struct UHordeWaveModifiersWidget_C_OnModifiersAdded_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               StartPresentationImmediately;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature
struct UHordeWaveModifiersWidget_C_OnAllModifiersPresented__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
