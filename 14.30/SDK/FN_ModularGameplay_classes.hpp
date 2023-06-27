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

// Class ModularGameplay.GameFrameworkComponent
// 0x0000 (0x00B0 - 0x00B0)
class UGameFrameworkComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ModularGameplay.GameFrameworkComponent");
		
		return ptr;
	}

};


// Class ModularGameplay.ControllerComponent
// 0x0000 (0x00B0 - 0x00B0)
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ModularGameplay.ControllerComponent");
		
		return ptr;
	}

};


// Class ModularGameplay.GameFrameworkComponentManager
// 0x0140 (0x0168 - 0x0028)
class UGameFrameworkComponentManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ModularGameplay.GameFrameworkComponentManager");
		
		return ptr;
	}

};


// Class ModularGameplay.GameStateComponent
// 0x0000 (0x00B0 - 0x00B0)
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ModularGameplay.GameStateComponent");
		
		return ptr;
	}

};


// Class ModularGameplay.PawnComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ModularGameplay.PawnComponent");
		
		return ptr;
	}

};


// Class ModularGameplay.PlayerStateComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ModularGameplay.PlayerStateComponent");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
