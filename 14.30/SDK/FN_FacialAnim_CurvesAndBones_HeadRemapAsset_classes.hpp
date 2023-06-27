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

// BlueprintGeneratedClass FacialAnim_CurvesAndBones_HeadRemapAsset.FacialAnim_CurvesAndBones_HeadRemapAsset_C
// 0x0000 (0x0030 - 0x0030)
class UFacialAnim_CurvesAndBones_HeadRemapAsset_C : public UFacialLiveLinkRemapAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FacialAnim_CurvesAndBones_HeadRemapAsset.FacialAnim_CurvesAndBones_HeadRemapAsset_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
