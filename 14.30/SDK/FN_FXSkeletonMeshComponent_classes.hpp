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

// BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C
// 0x0000 (0x0B80 - 0x0B80)
class UFXSkeletonMeshComponent_C : public UFortFXSkeletonMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C");
		
		return ptr;
	}


	void ApplyAwakenEffect();
	void ApplyEffect(class UMaterialInterface* SourceMaterial, float FadeInTime, float Duration, float FadeOutTime);
	void ApplyBuildingHitEffect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
