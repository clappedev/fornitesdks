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

// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C
// 0x0039 (0x08F1 - 0x08B8)
class AGCL_BoostJumpPack_Hovering_Infinite_C : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bJetpackAudioEnabled;                                     // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08C1(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundOnStart;                                             // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnStop;                                              // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnIdle;                                          // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnAccel;                                         // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnThrust;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFirstJump;                                             // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C");
		
		return ptr;
	}


	void SetJetpackAudioEnabled(bool Enabled);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void On_Pawn_Landed(const struct FHitResult& Hit);
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
