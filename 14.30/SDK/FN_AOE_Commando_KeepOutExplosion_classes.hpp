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

// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// 0x03D8 (0x0978 - 0x05A0)
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AOE_Audio_Effect;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Grenade_Linger;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageArea;                                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x05C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	struct FSoundAttenuationSettings                   AOE_Sound_Attenuation_Based_On_Radius;                    // 0x05D0(0x03A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  AOE_Electric_Sound;                                       // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C");
		
		return ptr;
	}


	void OnRep_Radius();
	void Send_Info(float Radius);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
