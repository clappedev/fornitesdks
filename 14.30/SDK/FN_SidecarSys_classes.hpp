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

// Class SidecarSys.SidecarDss
// 0x00A0 (0x00C8 - 0x0028)
class USidecarDss : public UObject
{
public:
	TMap<struct FString, struct FSidecarFileInfo>      FileInfoMap;                                              // 0x0028(0x0050)
	struct FString                                     DssDownloadUrl;                                           // 0x0078(0x0010) (ZeroConstructor, Config)
	struct FString                                     DssCheckoutUrl;                                           // 0x0088(0x0010) (ZeroConstructor, Config)
	struct FString                                     DssUploadUrl;                                             // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     DssRestoreUrl;                                            // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     DssCheckinUrl;                                            // 0x00B8(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SidecarSys.SidecarDss");
		
		return ptr;
	}

};


// Class SidecarSys.SidecarInventorySys
// 0x00B8 (0x00E0 - 0x0028)
class USidecarInventorySys : public UObject
{
public:
	struct FString                                     InventoryDownloadUrl;                                     // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     InventoryLockUrl;                                         // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     ItemUpdateUrl;                                            // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FString                                     ReleaseAllUrl;                                            // 0x0058(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0068(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SidecarSys.SidecarInventorySys");
		
		return ptr;
	}

};


// Class SidecarSys.SidecarSys
// 0x0030 (0x0058 - 0x0028)
class USidecarSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class USidecarDss*                                 SidecarDss;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class USidecarInventorySys*                        SidecarInventory;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SidecarSys.SidecarSys");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
