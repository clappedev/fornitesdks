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

// BlueprintGeneratedClass FrontendCamera_Main.FrontendCamera_Main_C
// 0x0010 (0x07F0 - 0x07E0)
class AFrontendCamera_Main_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCamera_Main.FrontendCamera_Main_C");
		
		return ptr;
	}


	void OnActivated(class AFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_Main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
