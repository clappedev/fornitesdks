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

// BlueprintGeneratedClass BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C
// 0x0008 (0x0250 - 0x0248)
class ABP_Decal_Tomato_Splat_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Decal_Tomato_Splat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
