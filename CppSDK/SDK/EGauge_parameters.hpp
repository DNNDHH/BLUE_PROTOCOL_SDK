#pragma once

 

// Package: EGauge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EGauge.EGauge_C.OnPlayAnimNormal
// 0x0018 (0x0018 - 0x0000)
struct EGauge_C_OnPlayAnimNormal final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BFD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EGauge_C_OnPlayAnimNormal) == 0x000008, "Wrong alignment on EGauge_C_OnPlayAnimNormal");
static_assert(sizeof(EGauge_C_OnPlayAnimNormal) == 0x000018, "Wrong size on EGauge_C_OnPlayAnimNormal");
static_assert(offsetof(EGauge_C_OnPlayAnimNormal, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'EGauge_C_OnPlayAnimNormal::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_OnPlayAnimNormal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'EGauge_C_OnPlayAnimNormal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_OnPlayAnimNormal, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000010, "Member 'EGauge_C_OnPlayAnimNormal::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_OnPlayAnimNormal, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'EGauge_C_OnPlayAnimNormal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function EGauge.EGauge_C.OnPlayAnimBlink
// 0x0018 (0x0018 - 0x0000)
struct EGauge_C_OnPlayAnimBlink final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BFE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EGauge_C_OnPlayAnimBlink) == 0x000008, "Wrong alignment on EGauge_C_OnPlayAnimBlink");
static_assert(sizeof(EGauge_C_OnPlayAnimBlink) == 0x000018, "Wrong size on EGauge_C_OnPlayAnimBlink");
static_assert(offsetof(EGauge_C_OnPlayAnimBlink, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'EGauge_C_OnPlayAnimBlink::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_OnPlayAnimBlink, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'EGauge_C_OnPlayAnimBlink::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_OnPlayAnimBlink, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000010, "Member 'EGauge_C_OnPlayAnimBlink::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_OnPlayAnimBlink, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'EGauge_C_OnPlayAnimBlink::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function EGauge.EGauge_C.DebugPrintTime
// 0x0020 (0x0020 - 0x0000)
struct EGauge_C_DebugPrintTime final
{
public:
	float                                         CallFunc_GetTime_ReturnValue;                      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BFF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
};
static_assert(alignof(EGauge_C_DebugPrintTime) == 0x000008, "Wrong alignment on EGauge_C_DebugPrintTime");
static_assert(sizeof(EGauge_C_DebugPrintTime) == 0x000020, "Wrong size on EGauge_C_DebugPrintTime");
static_assert(offsetof(EGauge_C_DebugPrintTime, CallFunc_GetTime_ReturnValue) == 0x000000, "Member 'EGauge_C_DebugPrintTime::CallFunc_GetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_DebugPrintTime, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'EGauge_C_DebugPrintTime::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function EGauge.EGauge_C.SetDefaultGaugeSize
// 0x0068 (0x0068 - 0x0000)
struct EGauge_C_SetDefaultGaugeSize final
{
public:
	struct FVector2D                              InDefaultGaugeSize;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGaugeLVRate_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGaugeLVRate_ReturnValue_1;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EGauge_C_SetDefaultGaugeSize) == 0x000008, "Wrong alignment on EGauge_C_SetDefaultGaugeSize");
static_assert(sizeof(EGauge_C_SetDefaultGaugeSize) == 0x000068, "Wrong size on EGauge_C_SetDefaultGaugeSize");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, InDefaultGaugeSize) == 0x000000, "Member 'EGauge_C_SetDefaultGaugeSize::InDefaultGaugeSize' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_BreakVector2D_X) == 0x000008, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_BreakVector2D_X_1) == 0x000010, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_BreakVector2D_Y_1) == 0x000014, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_GetGaugeLVRate_ReturnValue) == 0x000018, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_GetGaugeLVRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x00001C, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_GetGaugeLVRate_ReturnValue_1) == 0x000028, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_GetGaugeLVRate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_MakeVector2D_ReturnValue) == 0x00002C, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000034, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_MakeVector2D_ReturnValue_1) == 0x000038, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000040, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000048, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000050, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000058, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EGauge_C_SetDefaultGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000060, "Member 'EGauge_C_SetDefaultGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");

}

