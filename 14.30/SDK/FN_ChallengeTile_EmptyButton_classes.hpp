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

// BlueprintGeneratedClass ChallengeTile_EmptyButton.ChallengeTile_EmptyButton_C
// 0x0000 (0x0570 - 0x0570)
class UChallengeTile_EmptyButton_C : public UCommonButtonStyle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeTile_EmptyButton.ChallengeTile_EmptyButton_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
