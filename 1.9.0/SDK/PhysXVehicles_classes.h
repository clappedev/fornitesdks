#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0168 (0x02E0 - 0x0178)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0178(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}

};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x02E0 - 0x02E0)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetSteerAngle();
	void SetDriveTorque();
	void SetBrakeTorque();
};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0160 (0x0440 - 0x02E0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x02E0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


// Class PhysXVehicles.TireConfig
// 0x0020 (0x0048 - 0x0028)
class UTireConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

};


// Class PhysXVehicles.VehicleAnimInstance
// 0x0498 (0x07F0 - 0x0358)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x488];                                     // 0x0358(0x0488) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x07E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	void GetVehicle();
};


// Class PhysXVehicles.VehicleWheel
// 0x00C0 (0x00E8 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x03F8 - 0x03E8)
class AWheeledVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
