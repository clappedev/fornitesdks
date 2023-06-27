#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x50 (0x78 - 0x28)
// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
public:
	uint8                                        Pad_14D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceDetectionResult                  FaceDetectionResult;                               // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AppleVisionDetectFacesAsyncTaskBlueprintProxy");
		return Clss;
	}

	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* CreateProxyObjectForDetectFaces(class UTexture* SourceImage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
