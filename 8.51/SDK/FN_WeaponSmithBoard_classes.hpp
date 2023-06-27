#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C
// 0x00B0 (0x02F8 - 0x0248)
class AWeaponSmithBoard_C : public AFortWeaponAsyncLoadHelper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalSlot_Hammers;                                     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Swords;                                        // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_RocketLauncher;                                // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Pistol;                                        // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Shotgun;                                       // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Assault;                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Sniper;                                        // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Prison_Fence01wire;                                    // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UFortSchematicItem*>                  FavSchematics;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              StaticMeshArray;                                          // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSchematicItem*                          RocketLauncher;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          SniperRifle;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          AssaultRifle;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          shotgun;                                                  // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          pistol;                                                   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          SMG;                                                      // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Counter;                                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UFortQuestItemDefinition*                    QuestToShow;                                              // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C");
		return ptr;
	}


	void GetCustomMeleeSchematics();
	void GetCustomRangedSchematics();
	void PopulateSceneWithCustomStoredMeleeSchematics(TArray<class UFortAccountItem*>* CustomizedMeleeWeaponSchematics);
	void PopulateSceneFromCustomStoredRangedSchematics(TArray<class UFortAccountItem*>* CustomizedRangedWeaponSchematics);
	void RandomizeMeleeSchematics(TArray<class UFortAccountItem*>* MeleeSchematicsForBoard);
	void RandomizeRangedSchematics(TArray<class UFortSchematicItem*>* RangedSchematicsForBoard);
	void UpdateVisibility();
	void PopulateSceneWithBestMeleeWeaponSchematics(bool Make_Visible);
	void PopulateSceneWithBestRangedWeaponSchematics(bool MakeVisible);
	void Populate_Skeletal_Mesh_Slots();
	void Populate_Ranged();
	void Generate_StaticMesh_Array();
	void Populate_Schematic_Favs();
	void OnLoaded(class UObject* Loaded);
	void ReceiveBeginPlay();
	void LoadAsync(class UStaticMeshComponent* MeshComponent);
	void PopulateWeaponBoard(TEnumAsByte<EWeaponSmithBoardOrganizationEnum> Organization);
	void CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnAsyncLoadComplete();
	void ExecuteUbergraph_WeaponSmithBoard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
