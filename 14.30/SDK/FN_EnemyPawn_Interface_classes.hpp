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

// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UEnemyPawn_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C");
		
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
