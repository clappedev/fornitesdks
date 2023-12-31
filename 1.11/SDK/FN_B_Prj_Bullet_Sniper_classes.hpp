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

// BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
// 0x0020 (0x08A0 - 0x0880)
class AB_Prj_Bullet_Sniper_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_SR_Ribbon_SmokeTrail;                                   // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletWhipTrackerComponent_C*               BulletWhipTrackerComponent;                               // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Trail;                                                  // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_Bullet_Sniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
