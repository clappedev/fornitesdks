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

// Class DataAssetDirectory.DataAssetDirectoryManager
// 0x00D0 (0x00F8 - 0x0028)
class UDataAssetDirectoryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET
	struct FDateTime                                   LastUpdateCheck;                                          // 0x00E0(0x0008) (ZeroConstructor)
	bool                                               bUpdateCheckPending;                                      // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	uint32_t                                           UpdateCheckLimitSeconds;                                  // 0x00EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class DataAssetDirectory.DataAssetDirectoryManager");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
