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

// BlueprintGeneratedClass FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
// 0x0000 (0x0058 - 0x0058)
class UFortNavArea_JumpDownSmashable2_C : public UFortNavArea_SmashableJump
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
