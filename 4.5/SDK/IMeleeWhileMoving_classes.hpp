#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IMeleeWhileMoving.IMeleeWhileMoving_C
class UIMeleeWhileMoving_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IMeleeWhileMoving_C");
		return Clss;
	}

	void GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
