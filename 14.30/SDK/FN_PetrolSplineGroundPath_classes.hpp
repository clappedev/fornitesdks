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

// BlueprintGeneratedClass PetrolSplineGroundPath.PetrolSplineGroundPath_C
// 0x0008 (0x0A48 - 0x0A40)
class APetrolSplineGroundPath_C : public AFortSplineGroundPath
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PetrolSplineGroundPath.PetrolSplineGroundPath_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
