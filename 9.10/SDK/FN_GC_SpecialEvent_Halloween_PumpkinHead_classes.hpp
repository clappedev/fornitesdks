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

// BlueprintGeneratedClass GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C
// 0x0020 (0x02D0 - 0x02B0)
class AGC_SpecialEvent_Halloween_PumpkinHead_C : public AGameplayCueNotify_Actor
{
public:
	class UParticleSystemComponent*                    Husk_Pumpkin_EyeFX;                                       // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_Husk_PumpkinHead_Rays;                                 // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Husk_pumpkin;                                             // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C");
		return ptr;
	}


	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
