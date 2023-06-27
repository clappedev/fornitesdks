#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C
class UBPI_Building_Actor_Destroyed_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPI_Building_Actor_Destroyed_C");
		return Clss;
	}

	void Event_Building_Actor_Destroyed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
