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

// BlueprintGeneratedClass GA_DudeBro_Vent.GA_DudeBro_Vent_C
// 0x0034 (0x0ADC - 0x0AA8)
class UGA_DudeBro_Vent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      VehicleSkelMesh;                                          // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              GravFloorAltitude;                                        // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpwardLaunchVelocity;                                     // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              VentsHitBeforeLanding;                                    // 0x0AC8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                NumVentsToHitForQuest;                                    // 0x0AD8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_DudeBro_Vent.GA_DudeBro_Vent_C");
		
		return ptr;
	}


	void ActuallyCleanPlayerUp();
	void PlayerCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void MovementModeChangedDelegate_Event_1(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_DudeBro_Vent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
