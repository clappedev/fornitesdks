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

// WidgetBlueprintGeneratedClass SquadMarker.SquadMarker_C
// 0x0008 (0x05D0 - 0x05C8)
class USquadMarker_C : public UAthenaSquadIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SquadMarker.SquadMarker_C");
		
		return ptr;
	}


	void ExecuteUbergraph_SquadMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
