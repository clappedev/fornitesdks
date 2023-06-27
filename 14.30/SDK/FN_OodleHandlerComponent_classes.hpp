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

// Class OodleHandlerComponent.OodleTrainerCommandlet
// 0x0020 (0x00A0 - 0x0080)
class UOodleTrainerCommandlet : public UCommandlet
{
public:
	bool                                               bCompressionTest;                                         // 0x0080(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                HashTableSize;                                            // 0x0084(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DictionarySize;                                           // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DictionaryTrials;                                         // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialRandomness;                                          // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialGenerations;                                         // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoTrials;                                                // 0x0098(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class OodleHandlerComponent.OodleTrainerCommandlet");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
