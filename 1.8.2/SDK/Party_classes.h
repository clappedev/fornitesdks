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

// Class Party.Chatroom
// 0x0030 (0x0058 - 0x0028)
class UChatroom : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

};


// Class Party.Party
// 0x0468 (0x0490 - 0x0028)
class UParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	int                                                DefaultMaxPartySize;                                      // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F4];                                     // 0x009C(0x03F4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Party");
		return ptr;
	}

};


// Class Party.PartyGameState
// 0x05B8 (0x05E0 - 0x0028)
class UPartyGameState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x0028(0x05B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyGameState");
		return ptr;
	}

};


// Class Party.PartyMemberState
// 0x0050 (0x0078 - 0x0028)
class UPartyMemberState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyMemberState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
