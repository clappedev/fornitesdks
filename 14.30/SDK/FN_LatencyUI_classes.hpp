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

// Class LatencyUI.LatencyGraph
// 0x0040 (0x02A0 - 0x0260)
class ULatencyGraph : public UUserWidget
{
public:
	struct FColor                                      TotalLatencyLineColor;                                    // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      GameLatencyLineColor;                                     // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RenderLatencyLineColor;                                   // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DriverLatencyLineColor;                                   // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      OSWorkQueueLatencyLineColor;                              // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      GPURenderLatencyLineColor;                                // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BackgroundColor;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLatencyToGraph;                                        // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DesiredSize;                                              // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LatencyUI.LatencyGraph");
		
		return ptr;
	}

};


// Class LatencyUI.LatencyWidget
// 0x00F8 (0x0358 - 0x0260)
class ULatencyWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UCommonTextBlock*                            TotalLatencyUI;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            GameLatencyUI;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            RenderLatencyUI;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            OSWorkLatencyUI;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            DriverLatencyUI;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            GPURenderLatencyUI;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            TweakLatencyUI;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x02A0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LatencyUI.LatencyWidget");
		
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
