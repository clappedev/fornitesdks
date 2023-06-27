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

// BlueprintGeneratedClass DefaultAppActivationSoundMixManager.DefaultAppActivationSoundMixManager_C
// 0x0000 (0x0058 - 0x0058)
class UDefaultAppActivationSoundMixManager_C : public UFortAppActivationSoundMixManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultAppActivationSoundMixManager.DefaultAppActivationSoundMixManager_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
