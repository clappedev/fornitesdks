#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C
class UBPI_HuskDance_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPI_HuskDance_C");
		return Clss;
	}

	void OnEndDance();
	void OnBeginDance();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
