#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C
// 0x0024 (0x091C - 0x08F8)
class AB_Prj_Athena_AppleSun__C : public AB_Prj_Athena_BGASpawner_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_AppleSun_Projectile_Trail;                              // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Apple_Sun;                                                // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CrashpadsBouncedOffOf;                                    // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C");
		
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnStop(const struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
