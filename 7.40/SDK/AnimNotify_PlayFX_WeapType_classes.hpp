#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x2C (0x64 - 0x38)
// BlueprintGeneratedClass AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C
class UAnimNotify_PlayFX_WeapType_C : public UAnimNotify
{
public:
	class FString                                Socket;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Attach;                                            // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation;                                          // 0x4C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Location;                                          // 0x58(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayFX_WeapType_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AB_Melee_Generic_C* K2Node_DynamicCast_AsB_Melee_Generic, bool K2Node_DynamicCast_bSuccess1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
