#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LiveLink_BP.LiveLink_BP_C
// 0x0000 (0x00D0 - 0x00D0)
class ULiveLink_BP_C : public ULiveLinkRemapAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LiveLink_BP.LiveLink_BP_C");
		return ptr;
	}


	struct FName GetRemappedBoneName(struct FName BoneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
