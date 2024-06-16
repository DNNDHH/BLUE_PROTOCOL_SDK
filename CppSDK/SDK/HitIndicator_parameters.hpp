#pragma once

 

// Package: HitIndicator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HitIndicator.HitIndicator_C.ExecuteUbergraph_HitIndicator
// 0x0004 (0x0004 - 0x0000)
struct HitIndicator_C_ExecuteUbergraph_HitIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitIndicator_C_ExecuteUbergraph_HitIndicator) == 0x000004, "Wrong alignment on HitIndicator_C_ExecuteUbergraph_HitIndicator");
static_assert(sizeof(HitIndicator_C_ExecuteUbergraph_HitIndicator) == 0x000004, "Wrong size on HitIndicator_C_ExecuteUbergraph_HitIndicator");
static_assert(offsetof(HitIndicator_C_ExecuteUbergraph_HitIndicator, EntryPoint) == 0x000000, "Member 'HitIndicator_C_ExecuteUbergraph_HitIndicator::EntryPoint' has a wrong offset!");

// Function HitIndicator.HitIndicator_C.AddMarker
// 0x0038 (0x0038 - 0x0000)
struct HitIndicator_C_AddMarker final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EEF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHitIndicatorMarker_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF0[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitIndicator_C_AddMarker) == 0x000008, "Wrong alignment on HitIndicator_C_AddMarker");
static_assert(sizeof(HitIndicator_C_AddMarker) == 0x000038, "Wrong size on HitIndicator_C_AddMarker");
static_assert(offsetof(HitIndicator_C_AddMarker, HitLocation) == 0x000000, "Member 'HitIndicator_C_AddMarker::HitLocation' has a wrong offset!");
static_assert(offsetof(HitIndicator_C_AddMarker, CallFunc_Create_ReturnValue) == 0x000010, "Member 'HitIndicator_C_AddMarker::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicator_C_AddMarker, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000018, "Member 'HitIndicator_C_AddMarker::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicator_C_AddMarker, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'HitIndicator_C_AddMarker::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(HitIndicator_C_AddMarker, CallFunc_AddChildToOverlay_ReturnValue) == 0x000030, "Member 'HitIndicator_C_AddMarker::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

}

