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

// BlueprintGeneratedClass BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C
// 0x00D0 (0x0430 - 0x0360)
class ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C : public ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Looping_Sound;                                            // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TEnumAsByte<ECardinalDirection>, float>       OrientationYawOffsets;                                    // 0x0370(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationLocationOffsets;                               // 0x03C0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Traced;                                      // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Traced;                                      // 0x0420(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void HandleGridSnapUpdates(const struct FVector& NewLocation);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_ProjectileTrajectory_SnapToGrid_BirthdayBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
