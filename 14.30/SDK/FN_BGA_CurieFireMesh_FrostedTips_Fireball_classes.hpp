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

// BlueprintGeneratedClass BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C
// 0x0008 (0x0858 - 0x0850)
class ABGA_CurieFireMesh_FrostedTips_Fireball_C : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
