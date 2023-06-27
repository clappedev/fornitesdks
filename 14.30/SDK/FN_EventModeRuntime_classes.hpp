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

// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
// 0x0148 (0x01F8 - 0x00B0)
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EventModeRuntime.FortGameFrameworkComponent_EventMode.ActivatorAsset
	TArray<struct FUIExtension>                        UIExtensions;                                             // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0148(0x0050) UNKNOWN PROPERTY: MapProperty EventModeRuntime.FortGameFrameworkComponent_EventMode.TaggedUIExtensions
	TArray<struct FEventModeFocusActor>                FocusActors;                                              // 0x0198(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x01B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FEventModeWidgetCachedData>          CachedWidgetData;                                         // 0x01B8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x28];                                      // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EventModeRuntime.FortGameFrameworkComponent_EventMode.CurrentlyFocusedActor
	unsigned char                                      UnknownData05[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EventModeRuntime.FortGameFrameworkComponent_EventMode");
		
		return ptr;
	}


	void OnPlayerPawnPossessed(class APawn* PossessedPawn);
	void OnExitVehicle();
	void OnEnterVehicle();
	bool GetIsFocusing();
	bool GetIsFocusAvailable();
	bool GetIsEventModeActive();
};


// Class EventModeRuntime.FortWeapon_EventMode
// 0x0000 (0x0CB8 - 0x0CB8)
class AFortWeapon_EventMode : public AFortWeapon
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EventModeRuntime.FortWeapon_EventMode");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
