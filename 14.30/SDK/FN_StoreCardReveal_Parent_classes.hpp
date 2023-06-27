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

// BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C
// 0x0010 (0x0230 - 0x0220)
class AStoreCardReveal_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C");
		
		return ptr;
	}


	void InitiatePinata();
	void ExecuteUbergraph_StoreCardReveal_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
