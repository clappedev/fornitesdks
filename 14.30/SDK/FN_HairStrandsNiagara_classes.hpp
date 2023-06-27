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

// Class HairStrandsNiagara.NiagaraDataInterfaceHairStrands
// 0x0018 (0x0050 - 0x0038)
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
public:
	class UGroomAsset*                                 DefaultSource;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsNiagara.NiagaraDataInterfaceHairStrands");
		
		return ptr;
	}

};


// Class HairStrandsNiagara.NiagaraDataInterfacePhysicsAsset
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                               DefaultSource;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsNiagara.NiagaraDataInterfacePhysicsAsset");
		
		return ptr;
	}

};


// Class HairStrandsNiagara.NiagaraDataInterfaceVelocityGrid
// 0x0010 (0x00E8 - 0x00D8)
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  GridSize;                                                 // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsNiagara.NiagaraDataInterfaceVelocityGrid");
		
		return ptr;
	}

};


// Class HairStrandsNiagara.NiagaraDataInterfacePressureGrid
// 0x0000 (0x00E8 - 0x00E8)
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsNiagara.NiagaraDataInterfacePressureGrid");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
