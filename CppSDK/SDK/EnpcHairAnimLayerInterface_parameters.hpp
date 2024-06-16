#pragma once

 

// Package: EnpcHairAnimLayerInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C.HairLayer
// 0x0030 (0x0030 - 0x0000)
struct EnpcHairAnimLayerInterface_C_HairLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                                Acceralation;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F22[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseLink                              Param_HairLayer;                                   // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(EnpcHairAnimLayerInterface_C_HairLayer) == 0x000008, "Wrong alignment on EnpcHairAnimLayerInterface_C_HairLayer");
static_assert(sizeof(EnpcHairAnimLayerInterface_C_HairLayer) == 0x000030, "Wrong size on EnpcHairAnimLayerInterface_C_HairLayer");
static_assert(offsetof(EnpcHairAnimLayerInterface_C_HairLayer, InPose) == 0x000000, "Member 'EnpcHairAnimLayerInterface_C_HairLayer::InPose' has a wrong offset!");
static_assert(offsetof(EnpcHairAnimLayerInterface_C_HairLayer, Acceralation) == 0x000010, "Member 'EnpcHairAnimLayerInterface_C_HairLayer::Acceralation' has a wrong offset!");
static_assert(offsetof(EnpcHairAnimLayerInterface_C_HairLayer, Active) == 0x00001C, "Member 'EnpcHairAnimLayerInterface_C_HairLayer::Active' has a wrong offset!");
static_assert(offsetof(EnpcHairAnimLayerInterface_C_HairLayer, Param_HairLayer) == 0x000020, "Member 'EnpcHairAnimLayerInterface_C_HairLayer::Param_HairLayer' has a wrong offset!");

}

