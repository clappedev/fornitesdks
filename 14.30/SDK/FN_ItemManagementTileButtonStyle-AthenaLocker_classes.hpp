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

// BlueprintGeneratedClass ItemManagementTileButtonStyle-AthenaLocker.ItemManagementTileButtonStyle-AthenaLocker_C
// 0x0000 (0x0570 - 0x0570)
class UItemManagementTileButtonStyle_AthenaLocker_C : public UButtonStyle_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ItemManagementTileButtonStyle-AthenaLocker.ItemManagementTileButtonStyle-AthenaLocker_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
