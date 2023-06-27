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

// BlueprintGeneratedClass GCL_Shotgun_MaxCharge.GCL_Shotgun_MaxCharge_C
// 0x0000 (0x07C0 - 0x07C0)
class AGCL_Shotgun_MaxCharge_C : public AFortGameplayCueNotify_Loop
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Shotgun_MaxCharge.GCL_Shotgun_MaxCharge_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
