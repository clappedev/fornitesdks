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

// Class HoagieUI.FortHoagieVehicleReticle
// 0x0010 (0x02D8 - 0x02C8)
class UFortHoagieVehicleReticle : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	class AFortHoagieVehicle*                          OwningHoagieVehicle;                                      // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieUI.FortHoagieVehicleReticle");
		
		return ptr;
	}


	void OnSetupComplete();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
