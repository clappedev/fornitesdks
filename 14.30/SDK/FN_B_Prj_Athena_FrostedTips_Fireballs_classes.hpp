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

// BlueprintGeneratedClass B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C
// 0x0010 (0x0900 - 0x08F0)
class AB_Prj_Athena_FrostedTips_Fireballs_C : public AB_Prj_Athena_Generic_CurieFireball_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             LoopingAudioTell;                                         // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnStop(const struct FHitResult& Hit);
	void Play_Impact_Sound();
	void SpawnCurieBGA();
	void OnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_B_Prj_Athena_FrostedTips_Fireballs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
