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

// Class CommonInput.CommonInputSettings
// 0x01E0 (0x0208 - 0x0028)
class UCommonInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonInput.CommonInputSettings.InputData
	struct FCommonInputPlatformData                    CommonInputPlatformData[0x9];                             // 0x0050(0x0028) (Edit, Config)
	bool                                               bEnableInputMethodThrashingProtection;                    // 0x01B8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	int                                                InputMethodThrashingLimit;                                // 0x01BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             InputMethodThrashingWindowInSeconds;                      // 0x01C0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             InputMethodThrashingCooldownInSeconds;                    // 0x01C8(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowOutOfFocusDeviceInput;                              // 0x01D0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	class UCommonUIInputData*                          InputDataClass;                                           // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCommonInputPlatformData                    CurrentPlatform;                                          // 0x01E0(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputSettings");
		
		return ptr;
	}

};


// Class CommonInput.CommonInputSubsystem
// 0x00C0 (0x00F0 - 0x0030)
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonInput.CommonInputSubsystem.OnInputMethodChanged
	int                                                NumberOfInputMethodChangesRecently;                       // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	double                                             LastInputMethodChangeTime;                                // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             LastTimeInputMethodThrashingBegan;                        // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	ECommonInputType                                   LastInputType;                                            // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ECommonInputType                                   CurrentInputType;                                         // 0x0079(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ECommonGamepadType                                 GamepadInputType;                                         // 0x007A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	TMap<struct FName, ECommonInputType>               CurrentInputLocks;                                        // 0x0080(0x0050) (Transient)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	bool                                               bIsGamepadSimulatedClick;                                 // 0x00E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputSubsystem");
		
		return ptr;
	}


	bool ShouldShowInputKeys();
	void SetGamepadInputType(ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	bool IsInputMethodActive(ECommonInputType InputMethod);
	ECommonInputType GetDefaultInputType();
	ECommonInputType GetCurrentInputType();
	ECommonGamepadType GetCurrentGamepadType();
};


// Class CommonInput.CommonUIInputData
// 0x0020 (0x0048 - 0x0028)
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                         DefaultClickAction;                                       // 0x0028(0x0010) (Edit, DisableEditOnInstance)
	struct FDataTableRowHandle                         DefaultBackAction;                                        // 0x0038(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonUIInputData");
		
		return ptr;
	}

};


// Class CommonInput.CommonInputControllerData
// 0x0078 (0x00A0 - 0x0028)
class UCommonInputControllerData : public UObject
{
public:
	ECommonInputType                                   InputType;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECommonGamepadType                                 GamepadType;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x002A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonInput.CommonInputControllerData.ControllerTexture
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonInput.CommonInputControllerData.ControllerButtonMaskTexture
	TArray<struct FCommonInputKeyBrushConfiguration>   InputBrushDataMap;                                        // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                        // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputControllerData");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
