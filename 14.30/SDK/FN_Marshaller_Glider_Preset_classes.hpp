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

// BlueprintGeneratedClass Marshaller_Glider_Preset.Marshaller_Glider_Preset_C
// 0x0008 (0x00A0 - 0x0098)
class UMarshaller_Glider_Preset_C : public UMarshalledVFX_AuthoredDataConfig
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Marshaller_Glider_Preset.Marshaller_Glider_Preset_C");
		
		return ptr;
	}


	void ExecuteUbergraph_Marshaller_Glider_Preset(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
