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

// Class EntityCore.EntityComponent
// 0x0030 (0x0058 - 0x0028)
class UEntityComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityComponent");
		
		return ptr;
	}

};


// Class EntityCore.EntityEnableableComponent
// 0x0020 (0x0078 - 0x0058)
class UEntityEnableableComponent : public UEntityComponent
{
public:
	unsigned char                                      IsEnabled : 1;                                            // 0x0058(0x0001) (Edit, Net)
	unsigned char                                      LastIsEnabled : 1;                                        // 0x0058(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0059(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityEnableableComponent");
		
		return ptr;
	}


	void OnRep_Enabled();
};


// Class EntityCore.EntityDataBackedComponent
// 0x0008 (0x0060 - 0x0058)
class UEntityDataBackedComponent : public UEntityComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityDataBackedComponent");
		
		return ptr;
	}

};


// Class EntityCore.EntityPositionComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityPositionComponent : public UEntityDataBackedComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityPositionComponent");
		
		return ptr;
	}

};


// Class EntityCore.EntityRotationComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityRotationComponent : public UEntityDataBackedComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityRotationComponent");
		
		return ptr;
	}

};


// Class EntityCore.EntityScaleComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityScaleComponent : public UEntityDataBackedComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityScaleComponent");
		
		return ptr;
	}

};


// Class EntityCore.Entity
// 0x0010 (0x0038 - 0x0028)
class UEntity : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class ULevel*                                      Level;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.Entity");
		
		return ptr;
	}

};


// Class EntityCore.EntityCoreSubsystem
// 0x0120 (0x0150 - 0x0030)
class UEntityCoreSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
	TArray<class UEntityComponent*>                    ComponentArray;                                           // 0x00E8(0x0010) (ZeroConstructor, Transient)
	TMap<uint32_t, class UEntity*>                     Entities;                                                 // 0x00F8(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityCoreSubsystem");
		
		return ptr;
	}

};


// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityCoreDataBackedRelativePositionComponent");
		
		return ptr;
	}

};


// Class EntityCore.EntityTickableComponent
// 0x0038 (0x00B0 - 0x0078)
class UEntityTickableComponent : public UEntityEnableableComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityTickableComponent");
		
		return ptr;
	}

};


// Class EntityCore.EntityScriptComponent
// 0x0000 (0x00B0 - 0x00B0)
class UEntityScriptComponent : public UEntityTickableComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EntityCore.EntityScriptComponent");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
