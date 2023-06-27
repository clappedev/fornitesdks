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

// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
// 0x00BC (0x0974 - 0x08B8)
class AGCL_BoostJumpPack_Hovering_C : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bJetpackAudioEnabled;                                     // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08C1(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundOnStart;                                             // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnStop;                                              // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnIdle;                                          // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnAccel;                                         // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnOutOfFuel;                                     // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFuelWarning;                                       // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnOutOfFuel;                                         // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnThrust;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFirstJump;                                             // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    GroundInteract;                                           // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0918(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Milo Check
	unsigned char                                      UnknownData03[0x28];                                      // 0x0940(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Milo Backpack
	struct FVector                                     Milo_LightScale;                                          // 0x0968(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C");
		
		return ptr;
	}


	void SetJetpackAudioEnabled(bool Enabled);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void On_Pawn_Landed(const struct FHitResult& Hit);
	void ResetFX();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void PlayLowFuelWarning();
	void TryToPlayGroundEffects();
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
