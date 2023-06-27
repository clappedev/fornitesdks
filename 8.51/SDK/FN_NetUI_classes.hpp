#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NetUI.BadNetworkIndicator
// 0x0050 (0x0280 - 0x0230)
class UBadNetworkIndicator : public UUserWidget
{
public:
	float                                              BadPingThreshold;                                         // 0x0230(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SeverePingThreshold;                                      // 0x0234(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BadPacketLossThreshold;                                   // 0x0238(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SeverePacketLossThreshold;                                // 0x023C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0240(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              MinimumDisplayTime;                                       // 0x0244(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x024C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0250(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.BadNetworkIndicator");
		return ptr;
	}


	void UpdateDisplay();
	bool ShouldDisplay();
	bool HasSeverePing();
	bool HasSeverePacketLoss();
	bool HasBadPing();
	bool HasBadPacketLoss();
	float GetPing();
	float GetPacketLoss();
};


// Class NetUI.NetDebugWidget
// 0x0100 (0x0330 - 0x0230)
class UNetDebugWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                            PingUI;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInRateUI;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutRateUI;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInLossUI;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutLossUI;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            UpBandwidthUI;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            DownBandwidthUI;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0268(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.NetDebugWidget");
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


// Class NetUI.NetGraph
// 0x0030 (0x0260 - 0x0230)
class UNetGraph : public UUserWidget
{
public:
	struct FColor                                      BackgroundColor;                                          // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PingLineColor;                                            // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PacketLossLineColor;                                      // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DesiredSize;                                              // 0x023C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPingToGraph;                                           // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0248(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.NetGraph");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
