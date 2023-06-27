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

// Class UACBase.UACNetworkComponent
// 0x0160 (0x0210 - 0x00B0)
class UUACNetworkComponent : public UActorComponent
{
public:
	int                                                PlayerId;                                                 // 0x00B0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15C];                                     // 0x00B4(0x015C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UACBase.UACNetworkComponent");
		
		return ptr;
	}


	void SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet);
	void SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet);
	void SendClientHello(uint32_t SessionKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
