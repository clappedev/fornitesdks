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

// BlueprintGeneratedClass GalileoFerryPlayerToWeaponAnimNotify.GalileoFerryPlayerToWeaponAnimNotify_C
// 0x0000 (0x0038 - 0x0038)
class UGalileoFerryPlayerToWeaponAnimNotify_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GalileoFerryPlayerToWeaponAnimNotify.GalileoFerryPlayerToWeaponAnimNotify_C");
		
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif