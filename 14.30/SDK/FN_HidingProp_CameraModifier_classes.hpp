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

// BlueprintGeneratedClass HidingProp_CameraModifier.HidingProp_CameraModifier_C
// 0x0008 (0x0050 - 0x0048)
class UHidingProp_CameraModifier_C : public UCameraModifier
{
public:
	class AFortPlayerPawn*                             Pawn;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HidingProp_CameraModifier.HidingProp_CameraModifier_C");
		
		return ptr;
	}


	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
