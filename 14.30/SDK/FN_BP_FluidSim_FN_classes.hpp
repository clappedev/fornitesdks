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

// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
// 0x0108 (0x0551 - 0x0449)
class ABP_FluidSim_FN_C : public ABP_FluidSim_01_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFluidForceDynamic                          BoatForceSettings;                                        // 0x0458(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFluidForceDynamic                          PlayerForceSettings;                                      // 0x04C8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NearPawns;                                                // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	TArray<class AFortPawn*>                           RelevantFortPawns;                                        // 0x0540(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Use_FN_Pawn_Forces;                                       // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C");
		
		return ptr;
	}


	void GetFortnitePawnForces();
	void GetLocalPawn(class APawn** Pawn);
	void GetPlayerPawnForces();
	void ExecuteUbergraph_BP_FluidSim_FN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
