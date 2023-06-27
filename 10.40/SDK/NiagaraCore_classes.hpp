#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// Class NiagaraCore.NiagaraMergeable
class UNiagaraMergeable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraMergeable");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class NiagaraCore.NiagaraDataInterfaceBase
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
