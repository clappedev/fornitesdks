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

// BlueprintGeneratedClass B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C
// 0x0038 (0x1348 - 0x1310)
class AB_Shotgun_Charge_Athena_C : public AB_Shotgun_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_PartialCharged_MF;                                      // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FullyCharged_MF;                                        // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChargeState;                                              // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MaxChargeForSwap;                                         // 0x132C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x132D(0x0003) MISSED OFFSET
	class USoundBase*                                  MaxChargeSwapAudio;                                       // 0x1330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AudioVisualizerEnabled;                                   // 0x1338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1339(0x0007) MISSED OFFSET
	struct FTimerHandle                                AudioVisualizerTimer;                                     // 0x1340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C");
		
		return ptr;
	}


	void K2_OnUnEquip();
	void OnStartCharge();
	void OnReachedMaxCharge();
	void OnEndCharge();
	void ChargeAudioVisualizer();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ExecuteUbergraph_B_Shotgun_Charge_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
