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

// WidgetBlueprintGeneratedClass LetoPlayerAvatar.LetoPlayerAvatar_C
// 0x0000 (0x0290 - 0x0290)
class ULetoPlayerAvatar_C : public ULetoPlayerAvatar
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LetoPlayerAvatar.LetoPlayerAvatar_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
