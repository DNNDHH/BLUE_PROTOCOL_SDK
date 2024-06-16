#pragma once

 

// Package: MapWidget_MapScrollBar

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnSliderHValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature");
static_assert(sizeof(MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature");
static_assert(offsetof(MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature::InValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnSliderVValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature");
static_assert(sizeof(MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature");
static_assert(offsetof(MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature::InValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.ExecuteUbergraph_MapWidget_MapScrollBar
// 0x1198 (0x1198 - 0x0000)
struct MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_1;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BC1[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00A8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0130(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle;                     // 0x01C8(0x0340)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0508(0x0088)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle_1;                   // 0x0590(0x0340)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x08D0(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin_2;                        // 0x0958(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_5;                    // 0x0968(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_6;                    // 0x09F0(0x0088)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle_2;                   // 0x0A78(0x0340)()
	struct FMargin                                K2Node_MakeStruct_Margin_3;                        // 0x0DB8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_7;                    // 0x0DC8(0x0088)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle_3;                   // 0x0E50(0x0340)()
	float                                         CallFunc_GetSliderHValue_OutValue;                 // 0x1190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVValue_OutValue;                 // 0x1194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar) == 0x000008, "Wrong alignment on MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar");
static_assert(sizeof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar) == 0x001198, "Wrong size on MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, EntryPoint) == 0x000000, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_ComponentBoundEvent_Value_1) == 0x000004, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_ComponentBoundEvent_Value_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_ComponentBoundEvent_Value) == 0x000008, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x00000D, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_Margin) == 0x000098, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_1) == 0x0000A8, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_2) == 0x000130, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_Margin_1) == 0x0001B8, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SliderStyle) == 0x0001C8, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SliderStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_3) == 0x000508, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SliderStyle_1) == 0x000590, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SliderStyle_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_4) == 0x0008D0, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_Margin_2) == 0x000958, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_5) == 0x000968, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_5' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_6) == 0x0009F0, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_6' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SliderStyle_2) == 0x000A78, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SliderStyle_2' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_Margin_3) == 0x000DB8, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_Margin_3' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SlateBrush_7) == 0x000DC8, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SlateBrush_7' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, K2Node_MakeStruct_SliderStyle_3) == 0x000E50, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::K2Node_MakeStruct_SliderStyle_3' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, CallFunc_GetSliderHValue_OutValue) == 0x001190, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::CallFunc_GetSliderHValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar, CallFunc_GetSliderVValue_OutValue) == 0x001194, "Member 'MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar::CallFunc_GetSliderVValue_OutValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHValue
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderHValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderHMaxValue_OutValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderHMinValue_OutValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderHValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderHValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderHValue) == 0x000010, "Wrong size on MapWidget_MapScrollBar_C_SetSliderHValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHValue, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderHValue::InValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHValue, CallFunc_GetSliderHMaxValue_OutValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_SetSliderHValue::CallFunc_GetSliderHMaxValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHValue, CallFunc_GetSliderHMinValue_OutValue) == 0x000008, "Member 'MapWidget_MapScrollBar_C_SetSliderHValue::CallFunc_GetSliderHMinValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHValue, CallFunc_FClamp_ReturnValue) == 0x00000C, "Member 'MapWidget_MapScrollBar_C_SetSliderHValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMinValue
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderHMinValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderHMinValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderHMinValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderHMinValue) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_SetSliderHMinValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMinValue, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderHMinValue::InValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMaxValue
// 0x000C (0x000C - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderHMaxValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderHMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderHMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderHMaxValue) == 0x00000C, "Wrong size on MapWidget_MapScrollBar_C_SetSliderHMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMaxValue, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderHMaxValue::InValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMaxValue, Temp_bool_Variable) == 0x000004, "Member 'MapWidget_MapScrollBar_C_SetSliderHMaxValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMaxValue, Temp_byte_Variable) == 0x000005, "Member 'MapWidget_MapScrollBar_C_SetSliderHMaxValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMaxValue, Temp_byte_Variable_1) == 0x000006, "Member 'MapWidget_MapScrollBar_C_SetSliderHMaxValue::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMaxValue, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000007, "Member 'MapWidget_MapScrollBar_C_SetSliderHMaxValue::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMaxValue, K2Node_Select_Default) == 0x000008, "Member 'MapWidget_MapScrollBar_C_SetSliderHMaxValue::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMinAndMaxValue
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue final
{
public:
	float                                         InMinValue;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxValue;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue) == 0x000008, "Wrong size on MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue, InMinValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue::InMinValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue, InMaxValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue::InMaxValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVValue
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderVValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVMaxValue_OutValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVMinValue_OutValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVMaxValue_OutValue_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderVValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderVValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderVValue) == 0x000018, "Wrong size on MapWidget_MapScrollBar_C_SetSliderVValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVValue, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderVValue::InValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVValue, CallFunc_GetSliderVMaxValue_OutValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_SetSliderVValue::CallFunc_GetSliderVMaxValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVValue, CallFunc_GetSliderVMinValue_OutValue) == 0x000008, "Member 'MapWidget_MapScrollBar_C_SetSliderVValue::CallFunc_GetSliderVMinValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVValue, CallFunc_GetSliderVMaxValue_OutValue_1) == 0x00000C, "Member 'MapWidget_MapScrollBar_C_SetSliderVValue::CallFunc_GetSliderVMaxValue_OutValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVValue, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'MapWidget_MapScrollBar_C_SetSliderVValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVValue, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'MapWidget_MapScrollBar_C_SetSliderVValue::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMinValue
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderVMinValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderVMinValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderVMinValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderVMinValue) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_SetSliderVMinValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMinValue, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderVMinValue::InValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMaxValue
// 0x000C (0x000C - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderVMaxValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderVMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderVMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderVMaxValue) == 0x00000C, "Wrong size on MapWidget_MapScrollBar_C_SetSliderVMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMaxValue, InValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderVMaxValue::InValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMaxValue, Temp_bool_Variable) == 0x000004, "Member 'MapWidget_MapScrollBar_C_SetSliderVMaxValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMaxValue, Temp_byte_Variable) == 0x000005, "Member 'MapWidget_MapScrollBar_C_SetSliderVMaxValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMaxValue, Temp_byte_Variable_1) == 0x000006, "Member 'MapWidget_MapScrollBar_C_SetSliderVMaxValue::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMaxValue, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000007, "Member 'MapWidget_MapScrollBar_C_SetSliderVMaxValue::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMaxValue, K2Node_Select_Default) == 0x000008, "Member 'MapWidget_MapScrollBar_C_SetSliderVMaxValue::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMinAndMaxValue
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue final
{
public:
	float                                         InMinValue;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxValue;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue) == 0x000008, "Wrong size on MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue, InMinValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue::InMinValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue, InMaxValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue::InMaxValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHValue
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderHValue final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderHValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderHValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderHValue) == 0x000008, "Wrong size on MapWidget_MapScrollBar_C_GetSliderHValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHValue, OutValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderHValue::OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHValue, CallFunc_GetValue_ReturnValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_GetSliderHValue::CallFunc_GetValue_ReturnValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMinValue
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderHMinValue final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderHMinValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderHMinValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderHMinValue) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_GetSliderHMinValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHMinValue, OutValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderHMinValue::OutValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMaxValue
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderHMaxValue final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderHMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderHMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderHMaxValue) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_GetSliderHMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHMaxValue, OutValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderHMaxValue::OutValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMinAndMaxValue
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue final
{
public:
	float                                         OutMinValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutMaxValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderHMaxValue_OutValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderHMinValue_OutValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue) == 0x000010, "Wrong size on MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue, OutMinValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue::OutMinValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue, OutMaxValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue::OutMaxValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue, CallFunc_GetSliderHMaxValue_OutValue) == 0x000008, "Member 'MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue::CallFunc_GetSliderHMaxValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue, CallFunc_GetSliderHMinValue_OutValue) == 0x00000C, "Member 'MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue::CallFunc_GetSliderHMinValue_OutValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVValue
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderVValue final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVMaxValue_OutValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderVValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderVValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderVValue) == 0x000010, "Wrong size on MapWidget_MapScrollBar_C_GetSliderVValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVValue, OutValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderVValue::OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVValue, CallFunc_GetSliderVMaxValue_OutValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_GetSliderVValue::CallFunc_GetSliderVMaxValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVValue, CallFunc_GetValue_ReturnValue) == 0x000008, "Member 'MapWidget_MapScrollBar_C_GetSliderVValue::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVValue, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'MapWidget_MapScrollBar_C_GetSliderVValue::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMinValue
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderVMinValue final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderVMinValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderVMinValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderVMinValue) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_GetSliderVMinValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVMinValue, OutValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderVMinValue::OutValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMaxValue
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderVMaxValue final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderVMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderVMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderVMaxValue) == 0x000004, "Wrong size on MapWidget_MapScrollBar_C_GetSliderVMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVMaxValue, OutValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderVMaxValue::OutValue' has a wrong offset!");

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMinAndMaxValue
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue final
{
public:
	float                                         OutMinValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutMaxValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVMaxValue_OutValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSliderVMinValue_OutValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue) == 0x000004, "Wrong alignment on MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue");
static_assert(sizeof(MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue) == 0x000010, "Wrong size on MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue, OutMinValue) == 0x000000, "Member 'MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue::OutMinValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue, OutMaxValue) == 0x000004, "Member 'MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue::OutMaxValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue, CallFunc_GetSliderVMaxValue_OutValue) == 0x000008, "Member 'MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue::CallFunc_GetSliderVMaxValue_OutValue' has a wrong offset!");
static_assert(offsetof(MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue, CallFunc_GetSliderVMinValue_OutValue) == 0x00000C, "Member 'MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue::CallFunc_GetSliderVMinValue_OutValue' has a wrong offset!");

}

