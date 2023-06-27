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

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Orphaned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOrphaned                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               AttachedPawn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Orphaned");

	AEnemyPawn_Parent_Deimos_C_Orphaned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOrphaned != nullptr)
		*IsOrphaned = params.IsOrphaned;
	if (AttachedPawn != nullptr)
		*AttachedPawn = params.AttachedPawn;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::DeregisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectSkeletalMesh");

	AEnemyPawn_Parent_Deimos_C_DeregisterEffectSkeletalMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::DeregisterEffectStaticMesh(class UStaticMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectStaticMesh");

	AEnemyPawn_Parent_Deimos_C_DeregisterEffectStaticMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToStaticMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ApplyAwakenEffectToStaticMesh(class UStaticMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToStaticMesh");

	AEnemyPawn_Parent_Deimos_C_ApplyAwakenEffectToStaticMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToSkeletalMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ApplyAwakenEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToSkeletalMesh");

	AEnemyPawn_Parent_Deimos_C_ApplyAwakenEffectToSkeletalMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::RegisterEffectStaticMesh(class UStaticMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectStaticMesh");

	AEnemyPawn_Parent_Deimos_C_RegisterEffectStaticMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectSkeletalMesh
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::RegisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectSkeletalMesh");

	AEnemyPawn_Parent_Deimos_C_RegisterEffectSkeletalMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToStaticMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ApplyBuildingHitEffectToStaticMesh(class UStaticMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToStaticMesh");

	AEnemyPawn_Parent_Deimos_C_ApplyBuildingHitEffectToStaticMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToSkeletalMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ApplyBuildingHitEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToSkeletalMesh");

	AEnemyPawn_Parent_Deimos_C_ApplyBuildingHitEffectToSkeletalMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.CharacterSpawnInSafetyCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::CharacterSpawnInSafetyCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.CharacterSpawnInSafetyCheck");

	AEnemyPawn_Parent_Deimos_C_CharacterSpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnParticleSystemOnCharacterMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystemTemplate         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ParticleSystemComponentReferenceVar (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FParticleSysParam> InstanceParameters             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           AutoActivate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteRotation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* PSComponentReference           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnParticleSystemOnCharacterMesh");

	AEnemyPawn_Parent_Deimos_C_SpawnParticleSystemOnCharacterMesh_Params params;
	params.ParticleSystemTemplate = ParticleSystemTemplate;
	params.ParticleSystemComponentReferenceVar = ParticleSystemComponentReferenceVar;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.AutoActivate = AutoActivate;
	params.AutoDestroy = AutoDestroy;
	params.AbsoluteLocation = AbsoluteLocation;
	params.AbsoluteRotation = AbsoluteRotation;
	params.AbsoluteScale = AbsoluteScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceParameters != nullptr)
		*InstanceParameters = params.InstanceParameters;
	if (PSComponentReference != nullptr)
		*PSComponentReference = params.PSComponentReference;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PlayAdditiveHitReacts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Direction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PlayAdditiveHitReacts");

	AEnemyPawn_Parent_Deimos_C_PlayAdditiveHitReacts_Params params;
	params.Hit_Direction = Hit_Direction;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetScalarParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlsoModifyOriginalMIDs         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value, bool AlsoModifyOriginalMIDs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetScalarParameterOnAllCharacterMIDs");

	AEnemyPawn_Parent_Deimos_C_SetScalarParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Scalar_Value = Scalar_Value;
	params.AlsoModifyOriginalMIDs = AlsoModifyOriginalMIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetVectorParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Propagate_to_Auxiliary_Meshes  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FVector& Vector_Value, bool Propagate_to_Auxiliary_Meshes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetVectorParameterOnAllCharacterMIDs");

	AEnemyPawn_Parent_Deimos_C_SetVectorParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Vector_Value = Vector_Value;
	params.Propagate_to_Auxiliary_Meshes = Propagate_to_Auxiliary_Meshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.UserConstructionScript");

	AEnemyPawn_Parent_Deimos_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__FinishedFunc");

	AEnemyPawn_Parent_Deimos_C_Enemy_Spawn_Out_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__UpdateFunc");

	AEnemyPawn_Parent_Deimos_C_Enemy_Spawn_Out_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__FinishedFunc");

	AEnemyPawn_Parent_Deimos_C_EnemySpawnInTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__UpdateFunc");

	AEnemyPawn_Parent_Deimos_C_EnemySpawnInTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__Spawn__EventFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__Spawn__EventFunc");

	AEnemyPawn_Parent_Deimos_C_EnemySpawnInTL__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBeginDance
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::OnBeginDance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBeginDance");

	AEnemyPawn_Parent_Deimos_C_OnBeginDance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnEndDance
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::OnEndDance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnEndDance");

	AEnemyPawn_Parent_Deimos_C_OnEndDance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ReceiveBeginPlay");

	AEnemyPawn_Parent_Deimos_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AEnemyPawn_Parent_Deimos_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDeathPlayEffects");

	AEnemyPawn_Parent_Deimos_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualDespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ManualDespawnEnemy(const struct FVector& RiftLocationWS)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualDespawnEnemy");

	AEnemyPawn_Parent_Deimos_C_ManualDespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ManualEnemySpawnIn(const struct FVector& RiftLocationWS)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualEnemySpawnIn");

	AEnemyPawn_Parent_Deimos_C_ManualEnemySpawnIn_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnInSafetyCheck
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::SpawnInSafetyCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnInSafetyCheck");

	AEnemyPawn_Parent_Deimos_C_SpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::PostSpawnIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PostSpawnIn");

	AEnemyPawn_Parent_Deimos_C_PostSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DespawnEnemy");

	AEnemyPawn_Parent_Deimos_C_DespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DebugEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::DebugEnemySpawnIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DebugEnemySpawnIn");

	AEnemyPawn_Parent_Deimos_C_DebugEnemySpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::OnFinishedEncounterSpawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnFinishedEncounterSpawn");

	AEnemyPawn_Parent_Deimos_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::OnStartedEncounterSpawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnStartedEncounterSpawn");

	AEnemyPawn_Parent_Deimos_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AEnemyPawn_Parent_Deimos_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDamagePlayEffects");

	AEnemyPawn_Parent_Deimos_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::AdditiveHitReactDelay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.AdditiveHitReactDelay");

	AEnemyPawn_Parent_Deimos_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DestroyBuildingHitEffect
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_Deimos_C::DestroyBuildingHitEffect()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DestroyBuildingHitEffect");

	AEnemyPawn_Parent_Deimos_C_DestroyBuildingHitEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBuildingHitPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bPlayerPlaced                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::OnBuildingHitPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, const struct FGameplayEffectContextHandle& EffectContext, bool bPlayerPlaced)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBuildingHitPlayEffects");

	AEnemyPawn_Parent_Deimos_C_OnBuildingHitPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.EffectContext = EffectContext;
	params.bPlayerPlaced = bPlayerPlaced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ExecuteUbergraph_EnemyPawn_Parent_Deimos
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_Deimos_C::ExecuteUbergraph_EnemyPawn_Parent_Deimos(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ExecuteUbergraph_EnemyPawn_Parent_Deimos");

	AEnemyPawn_Parent_Deimos_C_ExecuteUbergraph_EnemyPawn_Parent_Deimos_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
