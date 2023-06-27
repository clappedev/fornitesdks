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

// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// 0x0000 (0x27AC - 0x27AC)
class ANPC_Pawn_Wildlife_Parent_C : public ANPC_Pawn_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
