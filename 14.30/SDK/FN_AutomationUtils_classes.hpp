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

// Class AutomationUtils.AutomationUtilsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AutomationUtils.AutomationUtilsBlueprintLibrary");
		
		return ptr;
	}


	void STATIC_TakeGameplayAutomationScreenshot(const struct FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const struct FString& MapNameOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
