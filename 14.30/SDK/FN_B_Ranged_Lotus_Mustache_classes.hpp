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

// BlueprintGeneratedClass B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C
// 0x00D7 (0x1280 - 0x11A9)
class AB_Ranged_Lotus_Mustache_C : public AB_Ranged_Generic_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x11A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_1_NewTrack_0_8351400740E359EACF6851AB2B2BF762;   // 0x11B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_8351400740E359EACF6851AB2B2BF762;   // 0x11BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x11BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_1366F380457842955A635D98E5E62F34;   // 0x11C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_1366F380457842955A635D98E5E62F34;   // 0x11CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x11CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x11D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableRowHandle                         DataRow;                                                  // 0x11D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                Screen_Full_Color__Material_;                             // 0x11E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Screen_Empty_Color__Material_;                            // 0x11F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Test_AmmoClipMax;                                         // 0x1208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Screen_Empty_Color__Light_;                               // 0x120C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Screen_Full_Color__Light_;                                // 0x121C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlay_;                                                 // 0x122C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x122D(0x0003) MISSED OFFSET
	class AActor*                                      LockOnTarget;                                             // 0x1230(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeedMax;                                             // 0x1238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HomingDistanceThreshold;                                  // 0x123C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeUntilMax;                                             // 0x1240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1244(0x0004) MISSED OFFSET
	class ULotus_Mustache_HealthBar_C*                 LockOnWidget;                                             // 0x1248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AAthena_LockOnWidgetActor_Proto_C*           WidgetActor;                                              // 0x1250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercent;                                            // 0x1258(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTime;                                                  // 0x125C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ShouldSpawnBandages;                                      // 0x1260(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C");
		
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ReceiveTick(float DeltaSeconds);
	void NewTarget();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void SetHealthPercentServer();
	void SetHealthPercentClient(float HealthPercent);
	void ExecuteUbergraph_B_Ranged_Lotus_Mustache(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
