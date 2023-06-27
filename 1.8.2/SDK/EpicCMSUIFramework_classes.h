#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0080 (0x0460 - 0x03E0)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSScreenBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x09B8 - 0x08A0)
class UEpicCMSTileBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x08A0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0298 - 0x0230)
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0230(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSLayoutBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSManager
// 0x00B8 (0x00E0 - 0x0028)
class UEpicCMSManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSManager");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0280 - 0x0230)
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0230(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileCarousel");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
