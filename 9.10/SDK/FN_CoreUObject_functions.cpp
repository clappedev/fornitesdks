// Fortnite (7.3) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
	//---------------------------------------------------------------------------
	//Functions
	//---------------------------------------------------------------------------
	
	FString UObject::GetNameFStr()
	{
		return Name.ToStringFStr();
	}

	std::string UObject::GetName()
	{
		std::string name(Name.ToString());
		if (Name.Number > 0)
		{
			name += '_' + std::to_string(Name.Number);
		}

		auto pos = name.rfind('/');
		if (pos == std::string::npos)
		{
			return name;
		}

		return name.substr(pos + 1);
	}

	std::string UObject::GetFullName()
	{
		std::string name;

		if (Class != nullptr)
		{
			std::string temp;
			for (auto p = Outer; p; p = p->Outer)
			{
				temp = p->GetName() + "." + temp;
			}

			name = Class->GetName();
			name += " ";
			name += temp;
			name += GetName();
		}

		return name;
	}

	bool UObject::IsA(UClass* cmp) const
	{
		for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
		{
			if (super == cmp)
			{
				return true;
			}
		}

		return false;
	}

	// Function CoreUObject.Object.ExecuteUbergraph
	// (Event, Public, BlueprintEvent)
	// Parameters:
	// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

	void UObject::ExecuteUbergraph(int EntryPoint)
	{
		static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

		UObject_ExecuteUbergraph_Params params;
		params.EntryPoint = EntryPoint;

		auto flags = fn->FunctionFlags;

		((UObject*)(this))->ProcessEvent(fn, &params);

		fn->FunctionFlags = flags;
	}


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
