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

// BlueprintGeneratedClass B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C
// 0x0012 (0x090A - 0x08F8)
class AB_Prj_Athena_PurpleMouse_C : public AB_Prj_Athena_BGASpawner_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      Team;                                                     // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeamHasBeenSet;                                           // 0x0909(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C");
		
		return ptr;
	}


	class AActor* SpawnBGA_(const struct FVector& Normal, class AActor* HitActor, class UPrimitiveComponent* HitComp, const struct FVector& Pos, bool FromWater);
	void ReceiveBeginPlay();
	void SetTeam(unsigned char Team);
	void ExecuteUbergraph_B_Prj_Athena_PurpleMouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
