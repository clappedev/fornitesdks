// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.SpawnThrownProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileSpawnLocation        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ProjectileSpawnDirection       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec HitEffectContainerSpec         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ProjectileInitialSpeed         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileGravityScale         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     SpawnedProjectile              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ChillBronco_C::SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.SpawnThrownProjectile");

	UGA_Athena_ChillBronco_C_SpawnThrownProjectile_Params params;
	params.ProjectileClass = ProjectileClass;
	params.ProjectileSpawnLocation = ProjectileSpawnLocation;
	params.ProjectileSpawnDirection = ProjectileSpawnDirection;
	params.HitEffectContainerSpec = HitEffectContainerSpec;
	params.ExplosionEffectContainerSpec = ExplosionEffectContainerSpec;
	params.ProjectileInitialSpeed = ProjectileInitialSpeed;
	params.ProjectileGravityScale = ProjectileGravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedProjectile != nullptr)
		*SpawnedProjectile = params.SpawnedProjectile;
}


// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.OnProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnedProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ChillBronco_C::OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.OnProjectileSpawned");

	UGA_Athena_ChillBronco_C_OnProjectileSpawned_Params params;
	params.SpawnedProjectile = SpawnedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.ExecuteUbergraph_GA_Athena_ChillBronco
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ChillBronco_C::ExecuteUbergraph_GA_Athena_ChillBronco(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.ExecuteUbergraph_GA_Athena_ChillBronco");

	UGA_Athena_ChillBronco_C_ExecuteUbergraph_GA_Athena_ChillBronco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
