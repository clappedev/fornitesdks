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

// BlueprintGeneratedClass GCN_Commando_InAPinch.GCN_Commando_InAPinch_C
// 0x0010 (0x0348 - 0x0338)
class AGCN_Commando_InAPinch_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Bullet_Ambient;                                           // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Commando_InAPinch.GCN_Commando_InAPinch_C");
		return ptr;
	}


	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GCN_Commando_InAPinch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
