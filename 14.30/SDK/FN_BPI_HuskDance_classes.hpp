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

// BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_HuskDance_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C");
		
		return ptr;
	}


	void OnEndDance();
	void OnBeginDance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
