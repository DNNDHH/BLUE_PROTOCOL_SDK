#pragma once

 

// Package: UMG_LiquidMemoryFilledIconL

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.ExecuteUbergraph_UMG_LiquidMemoryFilledIconL
// 0x0048 (0x0048 - 0x0000)
struct UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InLiquidMemoryId;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InFilledLevel;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED6[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLiquidMemoryFillingColor_OutFillingColor; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED7[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ED8[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL) == 0x000008, "Wrong alignment on UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL");
static_assert(sizeof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL) == 0x000048, "Wrong size on UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, EntryPoint) == 0x000000, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, K2Node_CustomEvent_InLiquidMemoryId) == 0x000004, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::K2Node_CustomEvent_InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, K2Node_CustomEvent_InFilledLevel) == 0x000008, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::K2Node_CustomEvent_InFilledLevel' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, K2Node_Event_IsDesignTime) == 0x00000C, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, CallFunc_GetLiquidMemoryFillingColor_OutFillingColor) == 0x000018, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::CallFunc_GetLiquidMemoryFillingColor_OutFillingColor' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, CallFunc_GetSize_ReturnValue) == 0x00002C, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, K2Node_Event_Animation) == 0x000038, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished");
static_assert(sizeof(UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_LiquidMemoryFilledIconL_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryFilledIconL_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_LiquidMemoryFilledIconL_C_PreConstruct");
static_assert(sizeof(UMG_LiquidMemoryFilledIconL_C_PreConstruct) == 0x000001, "Wrong size on UMG_LiquidMemoryFilledIconL_C_PreConstruct");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_LiquidMemoryFilledIconL_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetLiquidMemory
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFilledLevel;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory) == 0x000004, "Wrong alignment on UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory");
static_assert(sizeof(UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory) == 0x000008, "Wrong size on UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory, InLiquidMemoryId) == 0x000000, "Member 'UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory, InFilledLevel) == 0x000004, "Member 'UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory::InFilledLevel' has a wrong offset!");

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetFilledLevel
// 0x0058 (0x0058 - 0x0000)
struct UMG_LiquidMemoryFilledIconL_C_SetFilledLevel final
{
public:
	int32                                         InFilledLevel;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpFilledRate;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpFilledLevel;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED9[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDA[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDB[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EDC[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel) == 0x000008, "Wrong alignment on UMG_LiquidMemoryFilledIconL_C_SetFilledLevel");
static_assert(sizeof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel) == 0x000058, "Wrong size on UMG_LiquidMemoryFilledIconL_C_SetFilledLevel");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, InFilledLevel) == 0x000000, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::InFilledLevel' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, TmpFilledRate) == 0x000004, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::TmpFilledRate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, TmpFilledLevel) == 0x000008, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::TmpFilledLevel' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, Temp_bool_Variable) == 0x00000C, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, Temp_float_Variable) == 0x000010, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, Temp_bool_Variable_1) == 0x000015, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, Temp_float_Variable_1) == 0x000018, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00001C, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000020, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_BreakVector2D_X) == 0x000028, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, K2Node_Select_Default) == 0x000030, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000034, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000038, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, K2Node_Select_Default_1) == 0x00003C, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_Clamp_ReturnValue) == 0x000040, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_MakeVector2D_ReturnValue) == 0x000044, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_SetFilledLevel, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000050, "Member 'UMG_LiquidMemoryFilledIconL_C_SetFilledLevel::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PlayDrinkingAnimation
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation) == 0x000008, "Wrong alignment on UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation");
static_assert(sizeof(UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation) == 0x000008, "Wrong size on UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation");
static_assert(offsetof(UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

