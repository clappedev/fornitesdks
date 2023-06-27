#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x1B0 - 0x1A0)
// BlueprintGeneratedClass GCN_Athena_Ostrich_Death.GCN_Athena_Ostrich_Death_C
class UGCN_Athena_Ostrich_Death_C : public UFortGameplayCueNotify_Burst
{
public:
	TArray<class USoundCue*>                     OverrideSoundCues;                                 // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_Ostrich_Death_C");
		return Clss;
	}

	void ShouldUseBurstOverrides(class AActor* ForActor, bool* UseOverrides, class ATestMechVehicle_C* K2Node_DynamicCast_AsTest_Mech_Vehicle, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ShouldUseBurstOverrides_UseOverrides, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class USoundCue* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
