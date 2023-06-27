#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C
// 0x00D8 (0x0318 - 0x0240)
class AStoreWeaponMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WeaponHiddenLocation;                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SKMeleeWeapon;                                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDefaultPosition;                               // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponRoot;                                               // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0270(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.SoundWeaponReady
	unsigned char                                      UnknownData01[0x28];                                      // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.SoundWeaponSwing
	unsigned char                                      UnknownData02[0x28];                                      // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.SoundWeaponImpact
	class USkeletalMeshComponent*                      WeaponObject;                                             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.WeaponAssetID

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C");
		return ptr;
	}


	void OnLoaded_F90E39F1410BE83EB4E318A6426EF786(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
