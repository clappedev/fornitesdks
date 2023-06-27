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

// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
// 0x0010 (0x0370 - 0x0360)
class UEulaWidget_C : public UFortEulaWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty EulaWidget.EulaWidget_C.OnEulaResponse

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C");
		return ptr;
	}


	void OnEulaResponse__DelegateSignature(bool Accepted);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
