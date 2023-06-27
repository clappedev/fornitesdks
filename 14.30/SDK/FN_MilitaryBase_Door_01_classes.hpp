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

// BlueprintGeneratedClass MilitaryBase_Door_01.MilitaryBase_Door_01_C
// 0x0098 (0x0D80 - 0x0CE8)
class AMilitaryBase_Door_01_C : public AParent_BuildingWall_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               DoorSlideOverlapVolume;                                   // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorStaticMesh1;                                          // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F;// 0x0D00(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F;// 0x0D04(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F;   // 0x0D08(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D09(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumberOfPawnsWithinVolume;                                // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorOpen;                                                 // 0x0D1C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D1D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DoorMID;                                                  // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultDoorEmissiveValue;                                 // 0x0D28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ActiveDoorEmissiveValue;                                  // 0x0D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        DoorStaticMesh;                                           // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          DoorBaseMaterial;                                         // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Door_Source_Materials;                                    // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SlidingDoorClose_Sound;                                   // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SlidingDoorOpen_Sound;                                    // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0D70(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MilitaryBase_Door_01.MilitaryBase_Door_01_C");
		
		return ptr;
	}


	bool IsOpen();
	TArray<class UPrimitiveComponent*> GetComponentToLock();
	void OnRep_DoorOpen();
	void GetDoorMID();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OpenDoor();
	void CloseDoor();
	void Open(class AController* ControllerInstigator);
	void Close(class AController* ControllerInstigator);
	void OnUnLocked();
	void OnLocked();
	void ExecuteUbergraph_MilitaryBase_Door_01(int EntryPoint);
	void OnDoorOpened__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
