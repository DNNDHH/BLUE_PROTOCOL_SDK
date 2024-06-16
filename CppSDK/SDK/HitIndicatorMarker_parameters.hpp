#pragma once

 

// Package: HitIndicatorMarker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HitIndicatorMarker.HitIndicatorMarker_C.ExecuteUbergraph_HitIndicatorMarker
// 0x0050 (0x0050 - 0x0000)
struct HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker) == 0x000008, "Wrong alignment on HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker");
static_assert(sizeof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker) == 0x000050, "Wrong size on HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker");
static_assert(offsetof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker, EntryPoint) == 0x000000, "Member 'HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker, K2Node_Event_MyGeometry) == 0x000004, "Member 'HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker, K2Node_Event_Animation) == 0x000040, "Member 'HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function HitIndicatorMarker.HitIndicatorMarker_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct HitIndicatorMarker_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitIndicatorMarker_C_OnAnimationFinished) == 0x000008, "Wrong alignment on HitIndicatorMarker_C_OnAnimationFinished");
static_assert(sizeof(HitIndicatorMarker_C_OnAnimationFinished) == 0x000008, "Wrong size on HitIndicatorMarker_C_OnAnimationFinished");
static_assert(offsetof(HitIndicatorMarker_C_OnAnimationFinished, Animation) == 0x000000, "Member 'HitIndicatorMarker_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function HitIndicatorMarker.HitIndicatorMarker_C.Tick
// 0x003C (0x003C - 0x0000)
struct HitIndicatorMarker_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitIndicatorMarker_C_Tick) == 0x000004, "Wrong alignment on HitIndicatorMarker_C_Tick");
static_assert(sizeof(HitIndicatorMarker_C_Tick) == 0x00003C, "Wrong size on HitIndicatorMarker_C_Tick");
static_assert(offsetof(HitIndicatorMarker_C_Tick, MyGeometry) == 0x000000, "Member 'HitIndicatorMarker_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_Tick, InDeltaTime) == 0x000038, "Member 'HitIndicatorMarker_C_Tick::InDeltaTime' has a wrong offset!");

// Function HitIndicatorMarker.HitIndicatorMarker_C.UpdateDirection
// 0x00B0 (0x00B0 - 0x0000)
struct HitIndicatorMarker_C_UpdateDirection final
{
public:
	class APlayerCameraManager*                   CameraManager;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             PlayerCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VecPcToHitLocation;                                // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BB4[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB5[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAtan2_ReturnValue;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB6[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitIndicatorMarker_C_UpdateDirection) == 0x000008, "Wrong alignment on HitIndicatorMarker_C_UpdateDirection");
static_assert(sizeof(HitIndicatorMarker_C_UpdateDirection) == 0x0000B0, "Wrong size on HitIndicatorMarker_C_UpdateDirection");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CameraManager) == 0x000000, "Member 'HitIndicatorMarker_C_UpdateDirection::CameraManager' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, PlayerCharacter) == 0x000008, "Member 'HitIndicatorMarker_C_UpdateDirection::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, VecPcToHitLocation) == 0x000010, "Member 'HitIndicatorMarker_C_UpdateDirection::VecPcToHitLocation' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_IsValid_ReturnValue_1) == 0x00001D, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_GetActorForwardVector_ReturnValue) == 0x000020, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_X) == 0x00002C, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_Y) == 0x000030, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_Z) == 0x000034, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_Dot_VectorVector_ReturnValue) == 0x000044, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_X_1) == 0x000048, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_Y_1) == 0x00004C, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_Z_1) == 0x000050, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000058, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000060, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000064, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000068, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00006C, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_DegAtan2_ReturnValue) == 0x000078, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_DegAtan2_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_Normal_ReturnValue) == 0x00007C, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_X_2) == 0x000088, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_Y_2) == 0x00008C, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_BreakVector_Z_2) == 0x000090, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000098, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HitIndicatorMarker_C_UpdateDirection, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'HitIndicatorMarker_C_UpdateDirection::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

}

