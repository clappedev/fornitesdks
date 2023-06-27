#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x360 - 0x278)
// ControlRigBlueprintGeneratedClass Mech_Veh_AmmoFeed_ControlRig.Mech_Veh_AmmoFeed_ControlRig_C
class UMech_Veh_AmmoFeed_ControlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x278(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ChainSlide;                                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_510D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain                   SlideChain;                                        // 0x2C0(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mech_Veh_AmmoFeed_ControlRig_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
