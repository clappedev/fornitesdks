#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xE0 - 0xD8)
// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	uint8                                        Pad_336F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EasyAntiCheatNetComponent");
		return Clss;
	}

	void ServerMessage(TArray<uint8>& MESSAGE);
	void ClientMessage(TArray<uint8>& MESSAGE);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
