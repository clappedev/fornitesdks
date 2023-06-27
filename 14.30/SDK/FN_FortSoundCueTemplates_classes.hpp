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

// Class FortSoundCueTemplates.FortSoundCueTemplateBase
// 0x0000 (0x0570 - 0x0570)
class UFortSoundCueTemplateBase : public USoundCueTemplate
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.FortSoundCueTemplateBase");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.EmoteBase
// 0x0000 (0x0570 - 0x0570)
class UEmoteBase : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.EmoteBase");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.EmoteFoley
// 0x0000 (0x0570 - 0x0570)
class UEmoteFoley : public UEmoteBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.EmoteFoley");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.EmoteMusic
// 0x0000 (0x0570 - 0x0570)
class UEmoteMusic : public UEmoteBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.EmoteMusic");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.EmoteMusic3P
// 0x0000 (0x0570 - 0x0570)
class UEmoteMusic3P : public UEmoteBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.EmoteMusic3P");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.GliderOpenClose
// 0x0000 (0x0570 - 0x0570)
class UGliderOpenClose : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.GliderOpenClose");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.GliderOpen
// 0x0000 (0x0570 - 0x0570)
class UGliderOpen : public UGliderOpenClose
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.GliderOpen");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.GliderClose
// 0x0000 (0x0570 - 0x0570)
class UGliderClose : public UGliderOpenClose
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.GliderClose");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.GliderThrustLoop
// 0x0000 (0x0570 - 0x0570)
class UGliderThrustLoop : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.GliderThrustLoop");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.GliderThrustStart
// 0x0000 (0x0570 - 0x0570)
class UGliderThrustStart : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.GliderThrustStart");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.PickaxeImpactEnemy
// 0x0000 (0x0570 - 0x0570)
class UPickaxeImpactEnemy : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.PickaxeImpactEnemy");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.PickaxeReady
// 0x0000 (0x0570 - 0x0570)
class UPickaxeReady : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.PickaxeReady");
		
		return ptr;
	}

};


// Class FortSoundCueTemplates.PickaxeSwing
// 0x0000 (0x0570 - 0x0570)
class UPickaxeSwing : public UFortSoundCueTemplateBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FortSoundCueTemplates.PickaxeSwing");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
