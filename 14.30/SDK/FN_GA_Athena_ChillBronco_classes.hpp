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

// BlueprintGeneratedClass GA_Athena_ChillBronco.GA_Athena_ChillBronco_C
// 0x0014 (0x0E38 - 0x0E24)
class UGA_Athena_ChillBronco_C : public UGA_ThrowConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Added_X_SpawnRotation;                                    // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Added_Y_SpawnRotation;                                    // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ChillBronco.GA_Athena_ChillBronco_C");
		
		return ptr;
	}


	void SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile);
	void OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile);
	void ExecuteUbergraph_GA_Athena_ChillBronco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
