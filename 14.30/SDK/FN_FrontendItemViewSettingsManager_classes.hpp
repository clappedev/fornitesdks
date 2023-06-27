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

// BlueprintGeneratedClass FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C
// 0x0000 (0x0028 - 0x0028)
class UFrontendItemViewSettingsManager_C : public UFortFrontendItemViewSettingsManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C");
		
		return ptr;
	}


	bool Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, int SubslotIndex);
	struct FFortItemViewSettings GetItemViewSettings(EFrontEndCamera Camera, ESubGame GameMode, class UFortItemDefinition* ItemDefinition, int SubslotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
