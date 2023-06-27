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

// BlueprintGeneratedClass B_DtB_LightningZap.B_DtB_LightningZap_C
// 0x002C (0x0394 - 0x0368)
class AB_DtB_LightningZap_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_DtBRiftLightningZap;                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RiftLocation;                                             // 0x0380(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TickDuration;                                             // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickCounter;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DtB_LightningZap.B_DtB_LightningZap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void FireLightning();
	void ExecuteUbergraph_B_DtB_LightningZap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
