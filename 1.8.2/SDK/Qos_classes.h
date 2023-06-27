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

// Class Qos.QosBeaconClient
// 0x0060 (0x04A0 - 0x0440)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0440(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}


	void ServerQosRequest();
	void ClientQosResponse();
};


// Class Qos.QosBeaconHost
// 0x0010 (0x03C0 - 0x03B0)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x0080 (0x00A8 - 0x0028)
class UQosRegionManager : public UObject
{
public:
	bool                                               bUseOldQosServers;                                        // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                NumTestsPerRegion;                                        // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PingTimeout;                                              // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FQosDatacenterInfo>                  Datacenters;                                              // 0x0038(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x00F8 (0x0120 - 0x0028)
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
