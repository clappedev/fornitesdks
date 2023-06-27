#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SquadSelection.SquadSelection_C
// 0x0008 (0x03B8 - 0x03B0)
class USquadSelection_C : public UFortSquadSelectionMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SquadSelection.SquadSelection_C");
		return ptr;
	}


	void OnLocalPlayerParticipationChanged(bool bIsParticipating);
	void ExecuteUbergraph_SquadSelection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
