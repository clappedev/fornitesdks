#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C
// 0x0010 (0x0250 - 0x0240)
class AStorePinataMaster_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C");
		return ptr;
	}


	void InitiatePinata();
	void CameraResetComplete();
	void CameraTransitionComplete();
	void ExecuteUbergraph_StorePinataMaster_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
