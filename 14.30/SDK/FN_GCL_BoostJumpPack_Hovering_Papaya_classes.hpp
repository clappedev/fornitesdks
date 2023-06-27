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

// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Papaya.GCL_BoostJumpPack_Hovering_Papaya_C
// 0x0000 (0x08F1 - 0x08F1)
class AGCL_BoostJumpPack_Hovering_Papaya_C : public AGCL_BoostJumpPack_Hovering_Infinite_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Papaya.GCL_BoostJumpPack_Hovering_Papaya_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
