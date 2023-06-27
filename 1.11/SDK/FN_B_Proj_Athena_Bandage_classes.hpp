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

// BlueprintGeneratedClass B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C
// 0x0010 (0x07F0 - 0x07E0)
class AB_Proj_Athena_Bandage_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MedBandage;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnStop(struct FHitResult* Hit);
	void OnBounce(struct FHitResult* Hit);
	void ExecuteUbergraph_B_Proj_Athena_Bandage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
