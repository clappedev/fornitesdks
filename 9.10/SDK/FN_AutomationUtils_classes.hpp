#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

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
		static auto ptr = UObject::FindClass("Class AutomationUtils.AutomationUtilsBlueprintLibrary");
		return ptr;
	}


	void STATIC_TakeGameplayAutomationScreenshot(struct FString ScreenshotName, float MaxGlobalError, float MaxLocalError);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
