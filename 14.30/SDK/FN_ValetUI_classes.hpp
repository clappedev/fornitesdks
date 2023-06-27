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

// Class ValetUI.FortAthenaVehicleDashboardWidget_Valet
// 0x0010 (0x0340 - 0x0330)
class UFortAthenaVehicleDashboardWidget_Valet : public UFortAthenaVehicleDashboardWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class UCommonTextBlock*                            Text_ItemName;                                            // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetUI.FortAthenaVehicleDashboardWidget_Valet");
		
		return ptr;
	}


	void SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost);
	void OnValetNameUpdated();
	void OnUpdateRechargeableBoostPercent(float BoostPercent);
	void OnRPMChanged(float NormalizedRPM);
	void OnRechargableBoostFilled();
	class AFortDagwoodVehicle* GetDagwoodVehicle();
};


// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
// 0x0008 (0x00B8 - 0x00B0)
class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetUI.FortMobileActionButtonBehavior_ValetBoost");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
