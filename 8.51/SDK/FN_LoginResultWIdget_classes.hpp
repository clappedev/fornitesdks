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

// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
// 0x0028 (0x0390 - 0x0368)
class ULoginResultWIdget_C : public UFortLoginResultWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         RetryAction;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Restart_Action;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C");
		return ptr;
	}


	void SetForceQuitButtons(bool bForceQuit);
	void ExecuteUbergraph_LoginResultWIdget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
