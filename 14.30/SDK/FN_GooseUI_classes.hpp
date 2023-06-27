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

// Class GooseUI.GooseInventoryWidget
// 0x0060 (0x0378 - 0x0318)
class UGooseInventoryWidget : public ULTMWidgetBase
{
public:
	struct FScalableFloat                              WidgetEnabled;                                            // 0x0318(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GooseInventoryWidget");
		
		return ptr;
	}


	void OpenWidget(class UTexture2D* IconTexture, class UFortWorldItemDefinition* ItemDef);
	void CloseWidget();
};


// Class GooseUI.GooseWidgetBase
// 0x0018 (0x0330 - 0x0318)
class UGooseWidgetBase : public ULTMWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0318(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GooseWidgetBase");
		
		return ptr;
	}


	void OnUpdateNumberOfPlanes(int FriendlyPlaneCount, int EnemyPlaneCount);
};


// Class GooseUI.GooseLeaderboardWidget
// 0x0008 (0x0338 - 0x0330)
class UGooseLeaderboardWidget : public UGooseWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0330(0x0004) MISSED OFFSET
	bool                                               bOnlyListEnemySquads;                                     // 0x0334(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0335(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GooseLeaderboardWidget");
		
		return ptr;
	}


	void UpdateLeaderboardUI(TArray<struct FGooseLeaderboardData> SortedLeaderboardInfo);
};


// Class GooseUI.GoosePlanePickupWidget
// 0x0030 (0x0348 - 0x0318)
class UGoosePlanePickupWidget : public ULTMWidgetBase
{
public:
	TArray<struct FGoosePickupDisplayData>             DisplayData;                                              // 0x0318(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0328(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GoosePlanePickupWidget");
		
		return ptr;
	}


	void OpenWidget(int DisplayIndex, const struct FName& ChestName, const struct FText& DisplayText);
	void CloseWidget();
};


// Class GooseUI.GoosePlaneWeaponWidget
// 0x0030 (0x0348 - 0x0318)
class UGoosePlaneWeaponWidget : public ULTMWidgetBase
{
public:
	TArray<struct FGooseWeaponDisplayData>             DisplayData;                                              // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0328(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GoosePlaneWeaponWidget");
		
		return ptr;
	}


	void OpenWidget(int DisplayIndex, const struct FGooseWeaponDisplayData& InDisplayData, float StartTime);
	void CloseWidget();
};


// Class GooseUI.GooseRadarIconWidget
// 0x0010 (0x0298 - 0x0288)
class UGooseRadarIconWidget : public UCommonUserWidget
{
public:
	ERadarIconState                                    IconState;                                                // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0289(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GooseRadarIconWidget");
		
		return ptr;
	}


	void OnNewIconState(ERadarIconState NewState);
};


// Class GooseUI.GooseRadarWidgetBase
// 0x0018 (0x02E0 - 0x02C8)
class UGooseRadarWidgetBase : public UFortHUDElementWidget
{
public:
	class UCanvasPanel*                                MyPanel;                                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UGooseRadarIconWidget*>               IconWidgets;                                              // 0x02D0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GooseRadarWidgetBase");
		
		return ptr;
	}


	void OnPlaneRep(TArray<class AFortAthenaVehicle*> Planes);
};


// Class GooseUI.GooseSkydivingWidget
// 0x0010 (0x0328 - 0x0318)
class UGooseSkydivingWidget : public ULTMWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseUI.GooseSkydivingWidget");
		
		return ptr;
	}


	void OnStartSkydiving();
	void OnEndSkydiving();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
