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

// BlueprintGeneratedClass GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C
// 0x0064 (0x0E88 - 0x0E24)
class UGA_Athena_PurpleMouse_Throw_C : public UGA_ThrowConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FX_OnHand;                                                // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                ChargeUpCue;                                              // 0x0E38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RectSize;                                                 // 0x0E40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Range;                                                    // 0x0E60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      AimedPlayer;                                              // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C");
		
		return ptr;
	}


	void GetPlayer(class AActor* PlayerOrVehicle, class AActor** Player);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_PurpleMouse_Throw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
