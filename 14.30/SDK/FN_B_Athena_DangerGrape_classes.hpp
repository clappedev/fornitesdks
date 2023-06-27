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

// BlueprintGeneratedClass B_Athena_DangerGrape.B_Athena_DangerGrape_C
// 0x00F0 (0x0310 - 0x0220)
class AB_Athena_DangerGrape_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAthenaAIBotCustomizationData*           BotDataDefault;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        DecoyLifetimeRow;                                         // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                       BotPawn;                                                  // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LeashUpdateInterval;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BB_Key_LeashLocation;                                     // 0x0254(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BB_Key_Radius;                                            // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FScalableFloat                              LeashRadius;                                              // 0x0268(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       BB_Key_Destination;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              DistanceFromPlayerToMoveDecoy;                            // 0x0290(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_QuestAbsorbDamage;                                      // 0x02B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*                    Quest_Item;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Quest_Backend_Name;                                       // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       No_Starting_Weapons_Tag;                                  // 0x02E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAthenaAIBotCustomizationData*           BotDataNoStartingWeapons;                                 // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_DangerGrape.B_Athena_DangerGrape_C");
		
		return ptr;
	}


	void RemoveDecoy();
	void UpdateLeashLocation();
	void ReceiveBeginPlay();
	void PawnDied(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser);
	void PawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_B_Athena_DangerGrape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
