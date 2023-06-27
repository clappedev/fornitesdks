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

// BlueprintGeneratedClass B_HeldObject_Generic.B_HeldObject_Generic_C
// 0x0010 (0x0CC8 - 0x0CB8)
class AB_HeldObject_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HeldObject_Generic.B_HeldObject_Generic_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_HeldObject_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
