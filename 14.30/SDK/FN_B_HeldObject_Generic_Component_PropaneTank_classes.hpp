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

// BlueprintGeneratedClass B_HeldObject_Generic_Component_PropaneTank.B_HeldObject_Generic_Component_PropaneTank_C
// 0x0000 (0x0CC4 - 0x0CC4)
class AB_HeldObject_Generic_Component_PropaneTank_C : public AB_HeldObject_Generic_Component_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HeldObject_Generic_Component_PropaneTank.B_HeldObject_Generic_Component_PropaneTank_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
