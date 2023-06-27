#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C
// 0x00D8 (0x0440 - 0x0368)
class AStoreWeaponMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WeaponHiddenLocation;                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SKMeleeWeapon;                                            // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDefaultPosition;                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponRoot;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0398(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.SoundWeaponReady
	unsigned char                                      UnknownData01[0x28];                                      // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.SoundWeaponSwing
	unsigned char                                      UnknownData02[0x28];                                      // 0x03E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.SoundWeaponImpact
	class USkeletalMeshComponent*                      WeaponObject;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0418(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.WeaponAssetID

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded_F90E39F1410BE83EB4E318A6426EF786(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
