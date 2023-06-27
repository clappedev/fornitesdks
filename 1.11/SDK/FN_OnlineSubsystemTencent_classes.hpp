#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemTencent.TencentHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UTencentHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemTencent.TencentHandlerComponentFactory");
		return ptr;
	}

};


// Class OnlineSubsystemTencent.TssAntiComponent
// 0x0038 (0x0128 - 0x00F0)
class UTssAntiComponent : public UActorComponent
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x00F0(0x0028) (Net)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemTencent.TssAntiComponent");
		return ptr;
	}


	void ServerHandleDataFromClient(TArray<unsigned char> Data);
	void ClientPlayerLogin();
	void ClientHandleDataFromServer(TArray<unsigned char> Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
