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

// BlueprintGeneratedClass Frontend_HeroLoadout2.Frontend_HeroLoadout2_C
// 0x0010 (0x07F0 - 0x07E0)
class AFrontend_HeroLoadout2_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_HeroLoadout2.Frontend_HeroLoadout2_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Frontend_HeroLoadout2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
