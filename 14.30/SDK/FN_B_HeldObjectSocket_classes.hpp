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

// BlueprintGeneratedClass B_HeldObjectSocket.B_HeldObjectSocket_C
// 0x0058 (0x0818 - 0x07C0)
class AB_HeldObjectSocket_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             SocketLocation;                                           // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HasSocketedHeldObject;                                    // 0x07D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	class AB_HeldObject_Parent_C*                      HeldObject;                                               // 0x07E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredHeldObjectTags;                                   // 0x07E8(0x0020) (Edit, BlueprintVisible)
	bool                                               RequireExactTagMatch;                                     // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0809(0x0007) MISSED OFFSET
	class AB_HeldObjectSocketManager_C*                HeldObjectSocketManager;                                  // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HeldObjectSocket.B_HeldObjectSocket_C");
		
		return ptr;
	}


	void ValidateHeldObject(class AB_HeldObject_Parent_C* HeldObject_Input, class AB_HeldObject_Parent_C** HeldObject_Output, bool* IsValid);
	void OnRep_SocketIsFilled();
	void ReceiveBeginPlay();
	void OnHitHeldObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void EventOnSocketFilled();
	void EventOnSocketEmptied();
	void ExecuteUbergraph_B_HeldObjectSocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
