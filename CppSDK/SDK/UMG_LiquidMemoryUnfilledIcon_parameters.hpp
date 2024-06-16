#pragma once

 

// Package: UMG_LiquidMemoryUnfilledIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon
// 0x0038 (0x0038 - 0x0000)
struct UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InLiquidMemoryId;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InAccumulatedRate;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLiquidMemoryFillingColor_OutFillingColor; // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon) == 0x000008, "Wrong alignment on UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon");
static_assert(sizeof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon) == 0x000038, "Wrong size on UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, EntryPoint) == 0x000000, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, K2Node_CustomEvent_InLiquidMemoryId) == 0x000008, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::K2Node_CustomEvent_InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, K2Node_CustomEvent_InAccumulatedRate) == 0x00000C, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::K2Node_CustomEvent_InAccumulatedRate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, CallFunc_GetSize_ReturnValue) == 0x00001C, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon, CallFunc_GetLiquidMemoryFillingColor_OutFillingColor) == 0x000024, "Member 'UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon::CallFunc_GetLiquidMemoryFillingColor_OutFillingColor' has a wrong offset!");

// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetLiquidMemory
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InAccumulatedRate;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory) == 0x000004, "Wrong alignment on UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory");
static_assert(sizeof(UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory) == 0x000008, "Wrong size on UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory, InLiquidMemoryId) == 0x000000, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory, InAccumulatedRate) == 0x000004, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory::InAccumulatedRate' has a wrong offset!");

// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_LiquidMemoryUnfilledIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryUnfilledIcon_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_LiquidMemoryUnfilledIcon_C_PreConstruct");
static_assert(sizeof(UMG_LiquidMemoryUnfilledIcon_C_PreConstruct) == 0x000001, "Wrong size on UMG_LiquidMemoryUnfilledIcon_C_PreConstruct");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_LiquidMemoryUnfilledIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetAccumulatedRate
// 0x0038 (0x0038 - 0x0000)
struct UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate final
{
public:
	float                                         InAccumulatedRate;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE0[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EE1[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate) == 0x000008, "Wrong alignment on UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate");
static_assert(sizeof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate) == 0x000038, "Wrong size on UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, InAccumulatedRate) == 0x000000, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::InAccumulatedRate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, Temp_bool_Variable) == 0x000004, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_FClamp_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, Temp_byte_Variable) == 0x00000C, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, Temp_byte_Variable_1) == 0x00000D, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, Temp_bool_Variable_1) == 0x00000E, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, Temp_float_Variable) == 0x000010, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000014, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000015, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, K2Node_Select_Default) == 0x000016, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_BreakVector2D_X) == 0x000020, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, K2Node_Select_Default_1) == 0x00002C, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

