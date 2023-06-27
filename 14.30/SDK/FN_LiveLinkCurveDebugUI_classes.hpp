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

// Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkDebuggerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary");
		
		return ptr;
	}


	void STATIC_HideLiveLinkDebugger();
	void STATIC_DisplayLiveLinkDebugger(const struct FString& SubjectName);
};


// Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkDebuggerSettings : public UObject
{
public:
	struct FSlateColor                                 MinBarColor;                                              // 0x0028(0x0028) (Edit, Config)
	struct FSlateColor                                 MaxBarColor;                                              // 0x0050(0x0028) (Edit, Config)
	float                                              DPIScaleMultiplier;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings");
		
		return ptr;
	}


	float GetDPIScaleBasedOnSize(const struct FIntPoint& Size);
	struct FSlateColor GetBarColorForCurveValue(float CurveValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
