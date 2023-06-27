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

// BlueprintGeneratedClass BP_ProjectileTrajectory_HeldObjectSocket.BP_ProjectileTrajectory_HeldObjectSocket_C
// 0x000F (0x0278 - 0x0269)
class ABP_ProjectileTrajectory_HeldObjectSocket_C : public ABP_ProjectileTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_HeldObjectSocket.BP_ProjectileTrajectory_HeldObjectSocket_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectileTrajectory_HeldObjectSocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
