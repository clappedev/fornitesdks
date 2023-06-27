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

// BlueprintGeneratedClass FXStaticMeshComponent.FXStaticMeshComponent_C
// 0x0000 (0x04B0 - 0x04B0)
class UFXStaticMeshComponent_C : public UFortFXStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FXStaticMeshComponent.FXStaticMeshComponent_C");
		return ptr;
	}


	void ApplyAwakenEffect();
	void ApplyEffect(class UMaterialInterface* Source_Material, float FadeInTime, float Duration, float FadeOutTimer);
	void ApplyBuildingHitEffect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
