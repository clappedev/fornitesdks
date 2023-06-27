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

// BlueprintGeneratedClass B_TNT_Athena.B_TNT_Athena_C
// 0x0008 (0x0910 - 0x0908)
class AB_TNT_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	class USplineComponent*                            Spline;                                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_TNT_Athena.B_TNT_Athena_C");
		return ptr;
	}


	void Spline_Point_Locations(TArray<struct FVector> Array);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
