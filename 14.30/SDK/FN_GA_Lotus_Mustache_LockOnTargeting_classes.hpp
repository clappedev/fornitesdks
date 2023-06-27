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

// BlueprintGeneratedClass GA_Lotus_Mustache_LockOnTargeting.GA_Lotus_Mustache_LockOnTargeting_C
// 0x01BC (0x0C64 - 0x0AA8)
class UGA_Lotus_Mustache_LockOnTargeting_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LowGravRemoveDelay;                                       // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Float;                                                    // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityResetThreshold;                                   // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0AC8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              PotentialTargets;                                         // 0x0AF0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TargetPriorityFloat;                                      // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class AActor*                                      PotentialTarget;                                          // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainer                EffectContainer;                                          // 0x0B18(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DistanceInfluenceMultiple;                                // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BD4(0x0004) MISSED OFFSET
	struct FScalableFloat                              LockOnRange;                                              // 0x0BD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              LockOnRectSize;                                           // 0x0BF8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Tick;                                                     // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C1C(0x0004) MISSED OFFSET
	struct FGameplayAttribute                          Attribute;                                                // 0x0C20(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_Ranged_Lotus_Mustache_C*                  Weapon;                                                   // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DotCheckValue;                                            // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Lotus_Mustache_LockOnTargeting.GA_Lotus_Mustache_LockOnTargeting_C");
		
		return ptr;
	}


	void OnChange_B230F5A34FBD93E78E242A8524699628();
	void OnNotifyEnd_9AB91A59481723B332308EBEA7FC15AD(const struct FName& NotifyName);
	void OnNotifyBegin_9AB91A59481723B332308EBEA7FC15AD(const struct FName& NotifyName);
	void OnInterrupted_9AB91A59481723B332308EBEA7FC15AD(const struct FName& NotifyName);
	void OnBlendOut_9AB91A59481723B332308EBEA7FC15AD(const struct FName& NotifyName);
	void OnCompleted_9AB91A59481723B332308EBEA7FC15AD(const struct FName& NotifyName);
	void Added_0D35071B4FEDC4CD0463C99574134FAB();
	void Removed_58908BB54D428427AF9ABCB9028B681F();
	void K2_ActivateAbility();
	void LockOnTickOld();
	void LookForHomingTarget();
	void LockOnTickNew(class AActor* Target_Pawn);
	void ExecuteUbergraph_GA_Lotus_Mustache_LockOnTargeting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
