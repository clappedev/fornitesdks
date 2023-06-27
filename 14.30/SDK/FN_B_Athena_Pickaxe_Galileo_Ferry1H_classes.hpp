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

// BlueprintGeneratedClass B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C
// 0x000A (0x0DB8 - 0x0DAE)
class AB_Athena_Pickaxe_Galileo_Ferry1H_C : public AB_Athena_Pickaxe_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0DAE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnInitWeaponCosmetics();
	void FrontEndIdle();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
