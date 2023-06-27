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

// Class EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge
// 0x0020 (0x0048 - 0x0028)
class UEmbeddedCommunicationJSBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge");
		return ptr;
	}


	void SetEventListener(struct FWebJSFunction Callback);
	void RunCommand(struct FName Subsystem, struct FString Command, struct FString JsonParams, struct FWebJSResponse Response);
	void PostMessage(struct FString ID, struct FName Subsystem, struct FString Command, struct FString JsonParams);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
