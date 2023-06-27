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

// BlueprintGeneratedClass CommonUI_XboxBrushData.CommonUI_XboxBrushData_C
// 0x0000 (0x00A0 - 0x00A0)
class UCommonUI_XboxBrushData_C : public UFortInputControllerData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CommonUI_XboxBrushData.CommonUI_XboxBrushData_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
