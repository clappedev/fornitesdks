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

// BlueprintGeneratedClass Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C
// 0x0008 (0x00B8 - 0x00B0)
class UCreative_DeviceComponent_Parent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C");
		
		return ptr;
	}


	void Owning_Actor_Activated();
	void Owning_Actor_Initialized();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Creative_DeviceComponent_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
