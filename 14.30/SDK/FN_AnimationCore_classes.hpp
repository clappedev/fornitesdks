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

// Class AnimationCore.AnimationDataSourceRegistry
// 0x0050 (0x0078 - 0x0028)
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<struct FName, TWeakObjectPtr<class UObject>>  DataSources;                                              // 0x0028(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
