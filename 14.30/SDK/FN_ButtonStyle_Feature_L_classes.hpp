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

// BlueprintGeneratedClass ButtonStyle_Feature_L.ButtonStyle_Feature_L_C
// 0x0000 (0x0570 - 0x0570)
class UButtonStyle_Feature_L_C : public UCommonButtonStyle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_Feature_L.ButtonStyle_Feature_L_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
