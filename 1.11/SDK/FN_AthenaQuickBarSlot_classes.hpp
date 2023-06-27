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

// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
// 0x0009 (0x0360 - 0x0357)
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0357(0x0001) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C");
		return ptr;
	}


	void UpdateKeyBindingText_SpecialCases();
	void GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction);
	void UpdateKeyBindingText();
	void ExecuteUbergraph_AthenaQuickBarSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
