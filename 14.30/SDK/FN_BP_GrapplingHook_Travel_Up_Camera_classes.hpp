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

// BlueprintGeneratedClass BP_GrapplingHook_Travel_Up_Camera.BP_GrapplingHook_Travel_Up_Camera_C
// 0x0000 (0x0160 - 0x0160)
class UBP_GrapplingHook_Travel_Up_Camera_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrapplingHook_Travel_Up_Camera.BP_GrapplingHook_Travel_Up_Camera_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
