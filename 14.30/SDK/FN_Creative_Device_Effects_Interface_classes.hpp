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

// BlueprintGeneratedClass Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UCreative_Device_Effects_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C");
		
		return ptr;
	}


	void Get_Creative_Effect_Data(struct FFCreativeEffectColorIndex* Effect_Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
