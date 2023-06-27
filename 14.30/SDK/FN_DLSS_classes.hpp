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

// Class DLSS.DLSSUserPreferences
// 0x0008 (0x0040 - 0x0038)
class UDLSSUserPreferences : public UDeveloperSettings
{
public:
	bool                                               bEnableDLSSInEditorViewports;                             // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSInPlayInEditorViewports;                       // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class DLSS.DLSSUserPreferences");
		
		return ptr;
	}

};


// Class DLSS.DLSSSettings
// 0x0038 (0x0060 - 0x0028)
class UDLSSSettings : public UObject
{
public:
	uint32_t                                           NVIDIANGXApplicationId;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     ProductionBinariesPath;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	bool                                               bProductionBinariesExists;                                // 0x0040(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     NonProductionBinariesPath;                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	bool                                               bNonProductionBinariesExists;                             // 0x0058(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	bool                                               bEnableNonProductionBinariesInShipping;                   // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSD3D12;                                         // 0x005A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSD3D11;                                         // 0x005B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSVulkan;                                        // 0x005C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class DLSS.DLSSSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
