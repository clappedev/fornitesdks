#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{

};


// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{

};


// Enum Qos.EQosRegionResult
enum class EQosRegionResult : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosDatacenterInfo
// 0x0040
struct FQosDatacenterInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct Qos.QosRegionInfo
// 0x0078
struct FQosRegionInfo
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
struct FQosPingServerInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Qos.QosSearchPass
// 0x0008
struct FQosSearchPass
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
