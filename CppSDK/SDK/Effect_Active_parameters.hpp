#pragma once

 

// Package: Effect_Active

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Effect_Active.Effect_Active_C.ExecuteUbergraph_Effect_Active
// 0x00F8 (0x00F8 - 0x0000)
struct Effect_Active_C_ExecuteUbergraph_Effect_Active final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextTemplate                       Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextTemplate                       Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsShowTooltip;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A81[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Name_2;                         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Value_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A82[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ToolTipText;                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Name_1;                         // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A83[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0080(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A84[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	class FString                                 K2Node_CustomEvent_Name;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_CustomEvent_Time;                           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bHideYear;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A85[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00D8(0x0018)()
	ESBDateTimeTextTemplate                       K2Node_Select_Default;                             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bVisible;                       // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeAndTemplateType_ReturnValue;   // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Active_C_ExecuteUbergraph_Effect_Active) == 0x000008, "Wrong alignment on Effect_Active_C_ExecuteUbergraph_Effect_Active");
static_assert(sizeof(Effect_Active_C_ExecuteUbergraph_Effect_Active) == 0x0000F8, "Wrong size on Effect_Active_C_ExecuteUbergraph_Effect_Active");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, EntryPoint) == 0x000000, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::EntryPoint' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, Temp_bool_Variable) == 0x000004, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, Temp_byte_Variable) == 0x000005, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, Temp_byte_Variable_1) == 0x000006, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_MakeLiteralByte_ReturnValue) == 0x000007, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_IsShowTooltip) == 0x000008, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_IsShowTooltip' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_Name_2) == 0x000010, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_Name_2' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_Value_1) == 0x000020, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_ToolTipText) == 0x000028, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_ToolTipText' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_Name_1) == 0x000038, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_Name_1' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_Value) == 0x000048, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_Conv_FloatToText_ReturnValue) == 0x000050, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_Conv_IntToText_ReturnValue) == 0x000080, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_Name) == 0x0000B8, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_Time) == 0x0000C8, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_bHideYear) == 0x0000D0, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_bHideYear' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000D8, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_Select_Default) == 0x0000F0, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_CustomEvent_bVisible) == 0x0000F1, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_SetDateTimeAndTemplateType_ReturnValue) == 0x0000F2, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_SetDateTimeAndTemplateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000F3, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, Temp_bool_Variable_1) == 0x0000F4, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_ExecuteUbergraph_Effect_Active, K2Node_Select_Default_1) == 0x0000F5, "Member 'Effect_Active_C_ExecuteUbergraph_Effect_Active::K2Node_Select_Default_1' has a wrong offset!");

// Function Effect_Active.Effect_Active_C.SetValueVisible
// 0x0001 (0x0001 - 0x0000)
struct Effect_Active_C_SetValueVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Active_C_SetValueVisible) == 0x000001, "Wrong alignment on Effect_Active_C_SetValueVisible");
static_assert(sizeof(Effect_Active_C_SetValueVisible) == 0x000001, "Wrong size on Effect_Active_C_SetValueVisible");
static_assert(offsetof(Effect_Active_C_SetValueVisible, bVisible) == 0x000000, "Member 'Effect_Active_C_SetValueVisible::bVisible' has a wrong offset!");

// Function Effect_Active.Effect_Active_C.SetDataByDateTIme
// 0x0020 (0x0020 - 0x0000)
struct Effect_Active_C_SetDataByDateTIme final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              Time;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideYear;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Active_C_SetDataByDateTIme) == 0x000008, "Wrong alignment on Effect_Active_C_SetDataByDateTIme");
static_assert(sizeof(Effect_Active_C_SetDataByDateTIme) == 0x000020, "Wrong size on Effect_Active_C_SetDataByDateTIme");
static_assert(offsetof(Effect_Active_C_SetDataByDateTIme, Param_Name) == 0x000000, "Member 'Effect_Active_C_SetDataByDateTIme::Param_Name' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_SetDataByDateTIme, Time) == 0x000010, "Member 'Effect_Active_C_SetDataByDateTIme::Time' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_SetDataByDateTIme, bHideYear) == 0x000018, "Member 'Effect_Active_C_SetDataByDateTIme::bHideYear' has a wrong offset!");

// Function Effect_Active.Effect_Active_C.SetDataByFloatValue
// 0x0018 (0x0018 - 0x0000)
struct Effect_Active_C_SetDataByFloatValue final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Active_C_SetDataByFloatValue) == 0x000008, "Wrong alignment on Effect_Active_C_SetDataByFloatValue");
static_assert(sizeof(Effect_Active_C_SetDataByFloatValue) == 0x000018, "Wrong size on Effect_Active_C_SetDataByFloatValue");
static_assert(offsetof(Effect_Active_C_SetDataByFloatValue, Param_Name) == 0x000000, "Member 'Effect_Active_C_SetDataByFloatValue::Param_Name' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_SetDataByFloatValue, Value) == 0x000010, "Member 'Effect_Active_C_SetDataByFloatValue::Value' has a wrong offset!");

// Function Effect_Active.Effect_Active_C.Set Data
// 0x0030 (0x0030 - 0x0000)
struct Effect_Active_C_Set_Data final
{
public:
	bool                                          Param_IsShowTooltip;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A86[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A87[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_ToolTipText;                                 // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Active_C_Set_Data) == 0x000008, "Wrong alignment on Effect_Active_C_Set_Data");
static_assert(sizeof(Effect_Active_C_Set_Data) == 0x000030, "Wrong size on Effect_Active_C_Set_Data");
static_assert(offsetof(Effect_Active_C_Set_Data, Param_IsShowTooltip) == 0x000000, "Member 'Effect_Active_C_Set_Data::Param_IsShowTooltip' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_Set_Data, Param_Name) == 0x000008, "Member 'Effect_Active_C_Set_Data::Param_Name' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_Set_Data, Value) == 0x000018, "Member 'Effect_Active_C_Set_Data::Value' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_Set_Data, Param_ToolTipText) == 0x000020, "Member 'Effect_Active_C_Set_Data::Param_ToolTipText' has a wrong offset!");

// Function Effect_Active.Effect_Active_C.GetToolTipWidget_0
// 0x0028 (0x0028 - 0x0000)
struct Effect_Active_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Active_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on Effect_Active_C_GetToolTipWidget_0");
static_assert(sizeof(Effect_Active_C_GetToolTipWidget_0) == 0x000028, "Wrong size on Effect_Active_C_GetToolTipWidget_0");
static_assert(offsetof(Effect_Active_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'Effect_Active_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_GetToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'Effect_Active_C_GetToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Active_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000020, "Member 'Effect_Active_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");

}

