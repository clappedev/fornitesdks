#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x238 - 0x230)
// WidgetBlueprintGeneratedClass CreativeServerFriend.CreativeServerFriend_C
class UCreativeServerFriend_C : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_FriendName;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeServerFriend_C");
		return Clss;
	}

	void InitData(const class FString& FriendName, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
