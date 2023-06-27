#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x60 (0x3E0 - 0x380)
// BlueprintGeneratedClass LightningLSystem.LightningLsystem_C
class ALightningLsystem_C : public AFortLightningActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sm_LightningStrikes_C_01;                          // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Base;                                              // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sm_LightningStrikes_B_01;                          // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sm_LightningStrikes_A_01;                          // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BoltMesh;                                          // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Start_Location;                                    // 0x3B0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               End_Location;                                      // 0x3BC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDebugMode;                                       // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoltLifetimeMin;                                   // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BoltLifetimeMax;                                   // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BoltLifetime;                                      // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BoltMID;                                           // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LightningLsystem_C");
		return Clss;
	}

	void GetRandomMesh(int32 RandomMeshToUse, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_Array_Get_Item1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void CleanupMesh(bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, float CallFunc_RandomFloatInRange_ReturnValue);
	void OnLightingCleanup();
	void SetupLightning(const struct FVector& Start_Location, const struct FVector& End_Location);
	void DebugStrike();
	void OnLightingInitialized();
	void EndLightning();
	void ExecuteUbergraph_LightningLsystem(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Start_Location, const struct FVector& K2Node_CustomEvent_End_Location, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
