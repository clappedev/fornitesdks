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

// BlueprintGeneratedClass ButtonStyle_CycleArrow_Right_Double.ButtonStyle_CycleArrow_Right_Double_C
// 0x0000 (0x0570 - 0x0570)
class UButtonStyle_CycleArrow_Right_Double_C : public UButtonStyle_MediumTransparentNoCues_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_CycleArrow_Right_Double.ButtonStyle_CycleArrow_Right_Double_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
