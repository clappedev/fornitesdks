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

// BlueprintGeneratedClass VaultSceneSinglePedestal.VaultSceneSinglePedestal_C
// 0x0000 (0x02B8 - 0x02B8)
class AVaultSceneSinglePedestal_C : public AItemPreviewScene
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VaultSceneSinglePedestal.VaultSceneSinglePedestal_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
