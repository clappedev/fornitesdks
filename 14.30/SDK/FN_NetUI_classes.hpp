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

// Class NetUI.BadNetworkIndicator
// 0x0028 (0x0288 - 0x0260)
class UBadNetworkIndicator : public UUserWidget
{
public:
	bool                                               bEnabled;                                                 // 0x0260(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              MinimumDisplayTime;                                       // 0x0264(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x0268(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x026C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0270(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NetUI.BadNetworkIndicator");
		
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
// 0x00E8 (0x0348 - 0x0260)
class UNetDebugWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                            PingUI;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInRateUI;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutRateUI;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInLossUI;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutLossUI;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            UpBandwidthUI;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            DownBandwidthUI;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0298(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NetUI.NetDebugWidget");
		
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


// Class NetUI.NetGraph
// 0x0030 (0x0290 - 0x0260)
class UNetGraph : public UUserWidget
{
public:
	struct FColor                                      BackgroundColor;                                          // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PingLineColor;                                            // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      QueuedBunchesLineColor;                                   // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      PacketLossLineColor;                                      // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DesiredSize;                                              // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPingToGraph;                                           // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x027C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NetUI.NetGraph");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
