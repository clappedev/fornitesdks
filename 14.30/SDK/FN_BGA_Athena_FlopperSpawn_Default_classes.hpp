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

// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Default.BGA_Athena_FlopperSpawn_Default_C
// 0x0000 (0x0B9C - 0x0B9C)
class ABGA_Athena_FlopperSpawn_Default_C : public ABGA_Athena_FlopperSpawn_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Default.BGA_Athena_FlopperSpawn_Default_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
