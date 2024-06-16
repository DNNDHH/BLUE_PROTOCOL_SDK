#pragma once

 

// Package: UMG_PhotoModeControllSlider

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature, Param_Value) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_OnValueChanged__DelegateSignature::Param_Value' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.ExecuteUbergraph_UMG_PhotoModeControllSlider
// 0x0148 (0x0148 - 0x0000)
struct UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CCE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CCF[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD0[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value_1;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bOnlyDisplay_1;                 // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD1[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDisplayValue_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ValueDefault;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ValueMin;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ValueMax;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ValueStepSize;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CD2[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Offset;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bOnlyDisplay;                   // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD3[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD4[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD5[0x1];                                     // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD6[0x1];                                     // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD7[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00B0(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0110(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_bInIsEnabled_1;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CD9[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
	bool                                          K2Node_CustomEvent_bInIsEnabled;                   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider) == 0x000008, "Wrong alignment on UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider) == 0x000148, "Wrong size on UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, EntryPoint) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, Temp_bool_Variable) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_MakeArray_Array) == 0x000008, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Array_Get_Item) == 0x000018, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000040, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_Event_IsDesignTime) == 0x000041, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_ComponentBoundEvent_Value) == 0x000044, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_Value_1) == 0x000048, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_bOnlyDisplay_1) == 0x00004C, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_bOnlyDisplay_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000050, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_Value) == 0x000054, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000058, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Round_ReturnValue) == 0x00005C, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000060, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000064, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_GetDisplayValue_ReturnValue) == 0x000068, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_GetDisplayValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_ValueDefault) == 0x00006C, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_ValueDefault' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_ValueMin) == 0x000070, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_ValueMin' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_ValueMax) == 0x000074, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_ValueMax' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_ValueStepSize) == 0x000078, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_ValueStepSize' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_Select_Default) == 0x00007C, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_Offset) == 0x000080, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_Offset' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_bOnlyDisplay) == 0x000084, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_bOnlyDisplay' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Add_FloatFloat_ReturnValue) == 0x000088, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_BooleanAND_ReturnValue) == 0x00008C, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000090, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000094, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000095, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_BooleanAND_ReturnValue_1) == 0x000096, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000098, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00009C, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Less_FloatFloat_ReturnValue) == 0x00009D, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_BooleanAND_ReturnValue_2) == 0x00009E, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x0000A0, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Add_FloatFloat_ReturnValue_4) == 0x0000A4, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Add_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Not_PreBool_ReturnValue) == 0x0000A8, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000B0, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_BooleanAND_ReturnValue_3) == 0x0000C8, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_MakeStruct_FormatArgumentData) == 0x0000D0, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_MakeArray_Array_1) == 0x000110, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_bInIsEnabled_1) == 0x000120, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_bInIsEnabled_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, CallFunc_Format_ReturnValue) == 0x000128, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider, K2Node_CustomEvent_bInIsEnabled) == 0x000140, "Member 'UMG_PhotoModeControllSlider_C_ExecuteUbergraph_UMG_PhotoModeControllSlider::K2Node_CustomEvent_bInIsEnabled' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.SetContentEnable2
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllSlider_C_SetContentEnable2 final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_SetContentEnable2) == 0x000001, "Wrong alignment on UMG_PhotoModeControllSlider_C_SetContentEnable2");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_SetContentEnable2) == 0x000001, "Wrong size on UMG_PhotoModeControllSlider_C_SetContentEnable2");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetContentEnable2, bInIsEnabled) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_SetContentEnable2::bInIsEnabled' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.SetContentEnable
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllSlider_C_SetContentEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_SetContentEnable) == 0x000001, "Wrong alignment on UMG_PhotoModeControllSlider_C_SetContentEnable");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_SetContentEnable) == 0x000001, "Wrong size on UMG_PhotoModeControllSlider_C_SetContentEnable");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetContentEnable, bInIsEnabled) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_SetContentEnable::bInIsEnabled' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.OffsetValue
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllSlider_C_OffsetValue final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyDisplay;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_OffsetValue) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_OffsetValue");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_OffsetValue) == 0x000008, "Wrong size on UMG_PhotoModeControllSlider_C_OffsetValue");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_OffsetValue, Offset) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_OffsetValue::Offset' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_OffsetValue, bOnlyDisplay) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_OffsetValue::bOnlyDisplay' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.Initialize
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControllSlider_C_Initialize final
{
public:
	float                                         Param_ValueDefault;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_ValueMin;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_ValueMax;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_ValueStepSize;                               // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_Initialize) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_Initialize");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_Initialize) == 0x000010, "Wrong size on UMG_PhotoModeControllSlider_C_Initialize");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_Initialize, Param_ValueDefault) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_Initialize::Param_ValueDefault' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_Initialize, Param_ValueMin) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_Initialize::Param_ValueMin' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_Initialize, Param_ValueMax) == 0x000008, "Member 'UMG_PhotoModeControllSlider_C_Initialize::Param_ValueMax' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_Initialize, Param_ValueStepSize) == 0x00000C, "Member 'UMG_PhotoModeControllSlider_C_Initialize::Param_ValueStepSize' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.SetDefaultValue
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllSlider_C_SetDefaultValue final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_SetDefaultValue) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_SetDefaultValue");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_SetDefaultValue) == 0x000004, "Wrong size on UMG_PhotoModeControllSlider_C_SetDefaultValue");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetDefaultValue, Param_Value) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_SetDefaultValue::Param_Value' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.SetValue
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControllSlider_C_SetValue final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyDisplay;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_SetValue) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_SetValue");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_SetValue) == 0x000008, "Wrong size on UMG_PhotoModeControllSlider_C_SetValue");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue, Param_Value) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_SetValue::Param_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue, bOnlyDisplay) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_SetValue::bOnlyDisplay' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature, Param_Value) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature::Param_Value' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControllSlider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_PhotoModeControllSlider_C_PreConstruct");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_PreConstruct) == 0x000001, "Wrong size on UMG_PhotoModeControllSlider_C_PreConstruct");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.SetValue_Internal
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControllSlider_C_SetValue_Internal final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CDA[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetLoopValue_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_SetValue_Internal) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_SetValue_Internal");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_SetValue_Internal) == 0x000010, "Wrong size on UMG_PhotoModeControllSlider_C_SetValue_Internal");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue_Internal, Param_Value) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_SetValue_Internal::Param_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue_Internal, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_SetValue_Internal::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue_Internal, CallFunc_Less_FloatFloat_ReturnValue) == 0x000005, "Member 'UMG_PhotoModeControllSlider_C_SetValue_Internal::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue_Internal, CallFunc_GetLoopValue_ReturnValue) == 0x000008, "Member 'UMG_PhotoModeControllSlider_C_SetValue_Internal::CallFunc_GetLoopValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_SetValue_Internal, CallFunc_FClamp_ReturnValue) == 0x00000C, "Member 'UMG_PhotoModeControllSlider_C_SetValue_Internal::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.GetLoopValue
// 0x002C (0x002C - 0x0000)
struct UMG_PhotoModeControllSlider_C_GetLoopValue final
{
public:
	float                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max;                                               // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RetValue;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkMin;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkMax;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkValue;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_GetLoopValue) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_GetLoopValue");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_GetLoopValue) == 0x00002C, "Wrong size on UMG_PhotoModeControllSlider_C_GetLoopValue");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, Param_Value) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::Param_Value' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, Min) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::Min' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, Max) == 0x000008, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::Max' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, ReturnValue) == 0x00000C, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, RetValue) == 0x000010, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::RetValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, WorkMin) == 0x000014, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::WorkMin' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, WorkMax) == 0x000018, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::WorkMax' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, WorkValue) == 0x00001C, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::WorkValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, CallFunc_Less_FloatFloat_ReturnValue) == 0x000020, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000021, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000022, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000023, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, CallFunc_Add_FloatFloat_ReturnValue) == 0x000024, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetLoopValue, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeControllSlider_C_GetLoopValue::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControllSlider.UMG_PhotoModeControllSlider_C.GetDisplayValue
// 0x003C (0x003C - 0x0000)
struct UMG_PhotoModeControllSlider_C_GetDisplayValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RetValue;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkMin;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkMax;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkValue;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CDB[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CDC[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLoopValue_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CDD[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CDE[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControllSlider_C_GetDisplayValue) == 0x000004, "Wrong alignment on UMG_PhotoModeControllSlider_C_GetDisplayValue");
static_assert(sizeof(UMG_PhotoModeControllSlider_C_GetDisplayValue) == 0x00003C, "Wrong size on UMG_PhotoModeControllSlider_C_GetDisplayValue");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, ReturnValue) == 0x000000, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, RetValue) == 0x000004, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::RetValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, WorkMin) == 0x000008, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::WorkMin' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, WorkMax) == 0x00000C, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::WorkMax' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, WorkValue) == 0x000010, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::WorkValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, Temp_bool_Variable) == 0x000014, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, Temp_bool_Variable_1) == 0x000015, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, Temp_bool_Variable_2) == 0x000016, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, Temp_bool_Variable_3) == 0x000017, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, K2Node_Select_Default) == 0x00001C, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, CallFunc_NearlyEqual_FloatFloat_ReturnValue_1) == 0x000020, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::CallFunc_NearlyEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, K2Node_Select_Default_1) == 0x000024, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, CallFunc_GetLoopValue_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::CallFunc_GetLoopValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, CallFunc_NearlyEqual_FloatFloat_ReturnValue_2) == 0x00002C, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::CallFunc_NearlyEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, K2Node_Select_Default_2) == 0x000030, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, CallFunc_NearlyEqual_FloatFloat_ReturnValue_3) == 0x000034, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::CallFunc_NearlyEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControllSlider_C_GetDisplayValue, K2Node_Select_Default_3) == 0x000038, "Member 'UMG_PhotoModeControllSlider_C_GetDisplayValue::K2Node_Select_Default_3' has a wrong offset!");

}

