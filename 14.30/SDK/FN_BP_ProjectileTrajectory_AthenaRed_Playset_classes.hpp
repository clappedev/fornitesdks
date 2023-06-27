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

// BlueprintGeneratedClass BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C
// 0x0010 (0x0308 - 0x02F8)
class ABP_ProjectileTrajectory_AthenaRed_Playset_C : public ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Creative_Grenade_LoopRed_Cue;                             // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
