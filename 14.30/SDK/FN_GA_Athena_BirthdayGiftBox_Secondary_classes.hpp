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

// BlueprintGeneratedClass GA_Athena_BirthdayGiftBox_Secondary.GA_Athena_BirthdayGiftBox_Secondary_C
// 0x001C (0x0E68 - 0x0E4C)
class UGA_Athena_BirthdayGiftBox_Secondary_C : public UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectoryRed;                                  // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TrajectoryIndicatorRedClass;                              // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_BirthdayGiftBox_Secondary.GA_Athena_BirthdayGiftBox_Secondary_C");
		
		return ptr;
	}


	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void SetupDummyProjectileRed();
	bool IsTrajectoryHidden();
	void K2_ActivateAbility();
	void CleanupTrajectory();
	void UpdateTrajectorySpline();
	void ExecuteUbergraph_GA_Athena_BirthdayGiftBox_Secondary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
