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

// BlueprintGeneratedClass FXStaticMeshComponent.FXStaticMeshComponent_C
// 0x0000 (0x04F0 - 0x04F0)
class UFXStaticMeshComponent_C : public UFortFXStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FXStaticMeshComponent.FXStaticMeshComponent_C");
		
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
