#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedMatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return ptr;
	}


	void OnMatchReceivedTurn();
	void OnMatchEnded();
};


// Class OnlineSubsystem.NamedInterfaces
// 0x0098 (0x00C0 - 0x0028)
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
