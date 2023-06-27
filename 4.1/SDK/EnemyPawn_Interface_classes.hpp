#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
class UEnemyPawn_Interface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnemyPawn_Interface_C");
		return Clss;
	}

	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
