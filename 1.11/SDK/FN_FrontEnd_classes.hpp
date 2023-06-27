#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Frontend.FrontEnd_C
// 0x0010 (0x0390 - 0x0380)
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;   // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend.FrontEnd_C");
		return ptr;
	}


	void OnMatchStarted();
	void ReceiveBeginPlay();
	void EnableTutorial();
	void ExecuteUbergraph_FrontEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
