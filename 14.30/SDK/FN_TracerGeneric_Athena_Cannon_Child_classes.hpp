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

// BlueprintGeneratedClass TracerGeneric_Athena_Cannon_Child.TracerGeneric_Athena_Cannon_Child_C
// 0x0000 (0x02B8 - 0x02B8)
class ATracerGeneric_Athena_Cannon_Child_C : public ATracerGeneric_Athena_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TracerGeneric_Athena_Cannon_Child.TracerGeneric_Athena_Cannon_Child_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
