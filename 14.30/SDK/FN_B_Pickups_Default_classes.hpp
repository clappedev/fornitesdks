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

// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// 0x002C (0x04C0 - 0x0494)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        sm_rare_pickup;                                           // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Background;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFXSystemComponent*                          ParticleSystem;                                           // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C");
		
		return ptr;
	}


	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid);
	void Setup_Light();
	void UserConstructionScript();
	void OnTossed();
	void OnPickedUp();
	void HideBackgroundAndSpotlight();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups_Default(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
