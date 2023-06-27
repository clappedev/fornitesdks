#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnRep_SavedBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::OnRep_SavedBase()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "OnRep_SavedBase");

	Params::APlayerPawn_Constructor_C_OnRep_SavedBase_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetIFFMeshesEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIFFBoneConfig              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Constructor_C::SetIFFMeshesEnabled(bool IsEnabled, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FIFFBoneConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "SetIFFMeshesEnabled");

	Params::APlayerPawn_Constructor_C_SetIFFMeshesEnabled_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "UserConstructionScript");

	Params::APlayerPawn_Constructor_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::TakeDamageTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "TakeDamageTimeline__FinishedFunc");

	Params::APlayerPawn_Constructor_C_TakeDamageTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::TakeDamageTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "TakeDamageTimeline__UpdateFunc");

	Params::APlayerPawn_Constructor_C_TakeDamageTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Constructor_C::GameplayCue_Damage(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "GameplayCue.Damage");

	Params::APlayerPawn_Constructor_C_GameplayCue_Damage_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Constructor_C::GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX");

	Params::APlayerPawn_Constructor_C_GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.KineticOverload.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Constructor_C::GameplayCue_Constructor_KineticOverload_ActiveFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "GameplayCue.Constructor.KineticOverload.ActiveFX");

	Params::APlayerPawn_Constructor_C_GameplayCue_Constructor_KineticOverload_ActiveFX_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "ReceiveBeginPlay");

	Params::APlayerPawn_Constructor_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testIFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::TestIFF()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "testIFF");

	Params::APlayerPawn_Constructor_C_TestIFF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::OnCharacterPartsReinitialized()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "OnCharacterPartsReinitialized");

	Params::APlayerPawn_Constructor_C_OnCharacterPartsReinitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.PlasmaPulse.IFFCoding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Constructor_C::GameplayCue_Constructor_PlasmaPulse_IFFCoding(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "GameplayCue.Constructor.PlasmaPulse.IFFCoding");

	Params::APlayerPawn_Constructor_C_GameplayCue_Constructor_PlasmaPulse_IFFCoding_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Constructor_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::APlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Constructor_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::APlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::PlayArm()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "PlayArm");

	Params::APlayerPawn_Constructor_C_PlayArm_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testEndIFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::TestEndIFF()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "testEndIFF");

	Params::APlayerPawn_Constructor_C_TestEndIFF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::SetMenuScreenClassName()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "SetMenuScreenClassName");

	Params::APlayerPawn_Constructor_C_SetMenuScreenClassName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.MultiToggleShield
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Constructor_C::MultiToggleShield(bool Toggle)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "MultiToggleShield");

	Params::APlayerPawn_Constructor_C_MultiToggleShield_Params Parms;
	Parms.Toggle = Toggle;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ToggleShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Constructor_C::ToggleShield(bool Toggle)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "ToggleShield");

	Params::APlayerPawn_Constructor_C_ToggleShield_Params Parms;
	Parms.Toggle = Toggle;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Constructor_BASE_C*       SavedBase                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Constructor_C::SetBase(class AB_Constructor_BASE_C* SavedBase)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "SetBase");

	Params::APlayerPawn_Constructor_C_SetBase_Params Parms;
	Parms.SavedBase = SavedBase;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ExecuteUbergraph_PlayerPawn_Constructor
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters5                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters4                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters3                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum5_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGender_IsMale                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGender_IsFemale                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C*K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Toggle1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Toggle                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Constructor_BASE_C*       K2Node_CustomEvent_SavedBase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Constructor_C::ExecuteUbergraph_PlayerPawn_Constructor(int32 EntryPoint, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, bool K2Node_SwitchEnum1_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool K2Node_SwitchEnum2_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, bool K2Node_SwitchEnum3_CmpSuccess, bool K2Node_SwitchEnum4_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum5_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool Temp_bool_Variable, const struct FVector& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_Toggle1, bool K2Node_CustomEvent_Toggle, class AB_Constructor_BASE_C* K2Node_CustomEvent_SavedBase)
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "ExecuteUbergraph_PlayerPawn_Constructor");

	Params::APlayerPawn_Constructor_C_ExecuteUbergraph_PlayerPawn_Constructor_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType5 = K2Node_GameplayCueEvent_EventType5;
	Parms.K2Node_GameplayCueEvent_Parameters5 = K2Node_GameplayCueEvent_Parameters5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType4 = K2Node_GameplayCueEvent_EventType4;
	Parms.K2Node_GameplayCueEvent_Parameters4 = K2Node_GameplayCueEvent_Parameters4;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType3 = K2Node_GameplayCueEvent_EventType3;
	Parms.K2Node_GameplayCueEvent_Parameters3 = K2Node_GameplayCueEvent_Parameters3;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum5_CmpSuccess = K2Node_SwitchEnum5_CmpSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue1 = CallFunc_K2_GetRootComponent_ReturnValue1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetGender_IsMale = CallFunc_GetGender_IsMale;
	Parms.CallFunc_GetGender_IsFemale = CallFunc_GetGender_IsFemale;
	Parms.K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP = K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Toggle1 = K2Node_CustomEvent_Toggle1;
	Parms.K2Node_CustomEvent_Toggle = K2Node_CustomEvent_Toggle;
	Parms.K2Node_CustomEvent_SavedBase = K2Node_CustomEvent_SavedBase;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Constructor_C::PlayArmAnim__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Constructor_C", "PlayArmAnim__DelegateSignature");

	Params::APlayerPawn_Constructor_C_PlayArmAnim__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
