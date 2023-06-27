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

// BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C
// 0x0074 (0x0304 - 0x0290)
class AB_HookGunRope_C : public AFortHookGunRope
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Tight_NewTrack_0_FFAA67BE44D4D10C00414E828FA9423F;        // 0x0298(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Tight__Direction_FFAA67BE44D4D10C00414E828FA9423F;        // 0x029C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Tight;                                                    // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Reel_In_Tighten_22145CB34BE582F3E6C3B88B44E066FE;         // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Reel_In_Reel_Lerp_Controller_22145CB34BE582F3E6C3B88B44E066FE;// 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Reel_In__Direction_22145CB34BE582F3E6C3B88B44E066FE;      // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Reel_In;                                                  // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AB_Prj_Hook_Athena_C*                        Projectile_Actor;                                         // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x02C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class USoundBase*                                  ReelSound;                                                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReattachSound;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 RopeGE;                                                   // 0x02E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x02E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                BlockIncomingPickups;                                     // 0x02F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxWiggleAmount;                                          // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_Reattach;                                           // 0x02FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C");
		
		return ptr;
	}


	void Reel_In__FinishedFunc();
	void Reel_In__UpdateFunc();
	void Tight__FinishedFunc();
	void Tight__UpdateFunc();
	void End_Reel();
	void TightenRope();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_HookGunRope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
