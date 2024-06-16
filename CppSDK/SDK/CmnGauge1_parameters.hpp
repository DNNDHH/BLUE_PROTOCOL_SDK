#pragma once

 

// Package: CmnGauge1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CmnGauge1.CmnGauge1_C.ExecuteUbergraph_CmnGauge1
// 0x0028 (0x0028 - 0x0000)
struct CmnGauge1_C_ExecuteUbergraph_CmnGauge1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1) == 0x000008, "Wrong alignment on CmnGauge1_C_ExecuteUbergraph_CmnGauge1");
static_assert(sizeof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1) == 0x000028, "Wrong size on CmnGauge1_C_ExecuteUbergraph_CmnGauge1");
static_assert(offsetof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1, EntryPoint) == 0x000000, "Member 'CmnGauge1_C_ExecuteUbergraph_CmnGauge1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CmnGauge1_C_ExecuteUbergraph_CmnGauge1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'CmnGauge1_C_ExecuteUbergraph_CmnGauge1::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'CmnGauge1_C_ExecuteUbergraph_CmnGauge1::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000018, "Member 'CmnGauge1_C_ExecuteUbergraph_CmnGauge1::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_ExecuteUbergraph_CmnGauge1, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000020, "Member 'CmnGauge1_C_ExecuteUbergraph_CmnGauge1::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");

// Function CmnGauge1.CmnGauge1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnGauge1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnGauge1_C_PreConstruct) == 0x000001, "Wrong alignment on CmnGauge1_C_PreConstruct");
static_assert(sizeof(CmnGauge1_C_PreConstruct) == 0x000001, "Wrong size on CmnGauge1_C_PreConstruct");
static_assert(offsetof(CmnGauge1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnGauge1_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnGauge1.CmnGauge1_C.SetRate
// 0x0020 (0x0020 - 0x0000)
struct CmnGauge1_C_SetRate final
{
public:
	float                                         InRate;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnGauge1_C_SetRate) == 0x000008, "Wrong alignment on CmnGauge1_C_SetRate");
static_assert(sizeof(CmnGauge1_C_SetRate) == 0x000020, "Wrong size on CmnGauge1_C_SetRate");
static_assert(offsetof(CmnGauge1_C_SetRate, InRate) == 0x000000, "Member 'CmnGauge1_C_SetRate::InRate' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_SetRate, CallFunc_FClamp_ReturnValue) == 0x000004, "Member 'CmnGauge1_C_SetRate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_SetRate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'CmnGauge1_C_SetRate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_SetRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'CmnGauge1_C_SetRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnGauge1_C_SetRate, CallFunc_MakeVector2D_ReturnValue) == 0x000014, "Member 'CmnGauge1_C_SetRate::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function CmnGauge1.CmnGauge1_C.SetColor
// 0x0010 (0x0010 - 0x0000)
struct CmnGauge1_C_SetColor final
{
public:
	struct FLinearColor                           Param_SetColor;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnGauge1_C_SetColor) == 0x000004, "Wrong alignment on CmnGauge1_C_SetColor");
static_assert(sizeof(CmnGauge1_C_SetColor) == 0x000010, "Wrong size on CmnGauge1_C_SetColor");
static_assert(offsetof(CmnGauge1_C_SetColor, Param_SetColor) == 0x000000, "Member 'CmnGauge1_C_SetColor::Param_SetColor' has a wrong offset!");

}

