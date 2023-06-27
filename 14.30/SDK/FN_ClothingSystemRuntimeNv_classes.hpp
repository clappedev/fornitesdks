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

// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x0118 (0x0140 - 0x0028)
class UClothConfigNv : public UClothConfigCommon
{
public:
	EClothingWindMethodNv                              ClothingWindMethod;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FClothConstraintSetupNv                     VerticalConstraint;                                       // 0x002C(0x0010) (Edit)
	struct FClothConstraintSetupNv                     HorizontalConstraint;                                     // 0x003C(0x0010) (Edit)
	struct FClothConstraintSetupNv                     BendConstraint;                                           // 0x004C(0x0010) (Edit)
	struct FClothConstraintSetupNv                     ShearConstraint;                                          // 0x005C(0x0010) (Edit)
	float                                              SelfCollisionRadius;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0078(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearDrag;                                               // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x009C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x00A8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x00C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EClothingWindMethod_Legacy                         WindMethod;                                               // 0x00FC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FClothConstraintSetup_Legacy                VerticalConstraintConfig;                                 // 0x0100(0x0010) (Deprecated)
	struct FClothConstraintSetup_Legacy                HorizontalConstraintConfig;                               // 0x0110(0x0010) (Deprecated)
	struct FClothConstraintSetup_Legacy                BendConstraintConfig;                                     // 0x0120(0x0010) (Deprecated)
	struct FClothConstraintSetup_Legacy                ShearConstraintConfig;                                    // 0x0130(0x0010) (Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothConfigNv");
		
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
		
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0010 (0x0040 - 0x0030)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
		
		return ptr;
	}


	void SetAnimDriveDamperStiffness(float InStiffness);
};


// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// 0x0040 (0x0120 - 0x00E0)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                      MaxDistances;                                             // 0x00E0(0x0010) (ZeroConstructor)
	TArray<float>                                      BackstopDistances;                                        // 0x00F0(0x0010) (ZeroConstructor)
	TArray<float>                                      BackstopRadiuses;                                         // 0x0100(0x0010) (ZeroConstructor)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x0110(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
