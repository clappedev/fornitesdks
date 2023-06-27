#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x180 (0x1A8 - 0x28)
// Class CommonInput.CommonInputSettings
class UCommonInputSettings : public UObject
{
public:
	bool                                         bAutoLoadData;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FEC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UCommonUIInputData>      InputData;                                         // 0x30(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformData              CommonInputPlatformData;                           // 0x58(0x28)(Edit, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FED[0xF8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonUIInputData>        InputDataClass;                                    // 0x178(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformData              CurrentPlatform;                                   // 0x180(0x28)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputSettings");
		return Clss;
	}

};

// 0xA0 (0xC8 - 0x28)
// Class CommonInput.CommonInputSubsystem
class UCommonInputSubsystem : public UGameInstanceSubsystem
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonInputType                  LastInputType;                                     // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  CurrentInputType;                                  // 0x51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonGamepadType                GamepadInputType;                                  // 0x52(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FEF[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class ECommonInputType> CurrentInputLocks;                                 // 0x58(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF0[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsGamepadSimulatedClick;                          // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputSubsystem");
		return Clss;
	}

	bool ShouldShowInputKeys();
	void SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(enum class ECommonInputType bNewInputType);
	enum class ECommonInputType GetDefaultInputType();
	enum class ECommonInputType GetCurrentInputType();
	enum class ECommonGamepadType GetCurrentGamepadType();
};

// 0x10 (0x38 - 0x28)
// Class CommonInput.CommonUIInputData
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                   DefaultClickAction;                                // 0x28(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIInputData");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class CommonInput.CommonInputControllerData
class UCommonInputControllerData : public UObject
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonGamepadType                GamepadType;                                       // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;                                 // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputControllerData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
