#pragma once

 

// Package: GuildTimeIconBtn

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "GuildActiveTimes_structs.hpp"


namespace SDK::Params
{

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.ExecuteUbergraph_GuildTimeIconBtn
// 0x0120 (0x0120 - 0x0000)
struct GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_543C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_543D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_543E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_543F[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0048(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	struct FGuildActiveTimes                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5440[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5441[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5442[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5443[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bEditable;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5444[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00F8(0x0028)()
};
static_assert(alignof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn) == 0x000008, "Wrong alignment on GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn");
static_assert(sizeof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn) == 0x000120, "Wrong size on GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, EntryPoint) == 0x000000, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, Temp_int_Array_Index_Variable) == 0x000034, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_Event_IsDesignTime) == 0x000044, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000048, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_Array_Get_Item) == 0x000058, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_BooleanAND_ReturnValue) == 0x0000B1, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000B8, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, Temp_object_Variable) == 0x0000C8, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D0, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_DynamicCast_AsTexture_2D) == 0x0000D8, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000E1, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_CustomEvent_Loaded) == 0x0000E8, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_CustomEvent_bEditable) == 0x0000F0, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_CustomEvent_bEditable' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000F1, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn, K2Node_MakeStruct_SlateColor_1) == 0x0000F8, "Member 'GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Editable
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeIconBtn_C_Set_Editable final
{
public:
	bool                                          bEditable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildTimeIconBtn_C_Set_Editable) == 0x000001, "Wrong alignment on GuildTimeIconBtn_C_Set_Editable");
static_assert(sizeof(GuildTimeIconBtn_C_Set_Editable) == 0x000001, "Wrong size on GuildTimeIconBtn_C_Set_Editable");
static_assert(offsetof(GuildTimeIconBtn_C_Set_Editable, bEditable) == 0x000000, "Member 'GuildTimeIconBtn_C_Set_Editable::bEditable' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeIconBtn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildTimeIconBtn_C_PreConstruct) == 0x000001, "Wrong alignment on GuildTimeIconBtn_C_PreConstruct");
static_assert(sizeof(GuildTimeIconBtn_C_PreConstruct) == 0x000001, "Wrong size on GuildTimeIconBtn_C_PreConstruct");
static_assert(offsetof(GuildTimeIconBtn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildTimeIconBtn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.OnLoaded_456EB643467351B1ABBF91877B36AC98
// 0x0008 (0x0008 - 0x0000)
struct GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98) == 0x000008, "Wrong alignment on GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98");
static_assert(sizeof(GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98) == 0x000008, "Wrong size on GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98");
static_assert(offsetof(GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98, Loaded) == 0x000000, "Member 'GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98::Loaded' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.IsCheck
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeIconBtn_C_IsCheck final
{
public:
	bool                                          Param_IsCheck;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildTimeIconBtn_C_IsCheck) == 0x000001, "Wrong alignment on GuildTimeIconBtn_C_IsCheck");
static_assert(sizeof(GuildTimeIconBtn_C_IsCheck) == 0x000001, "Wrong size on GuildTimeIconBtn_C_IsCheck");
static_assert(offsetof(GuildTimeIconBtn_C_IsCheck, Param_IsCheck) == 0x000000, "Member 'GuildTimeIconBtn_C_IsCheck::Param_IsCheck' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetTime
// 0x0001 (0x0001 - 0x0000)
struct GuildTimeIconBtn_C_GetTime final
{
public:
	ESBGuildActivityTime                          Param_Time;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildTimeIconBtn_C_GetTime) == 0x000001, "Wrong alignment on GuildTimeIconBtn_C_GetTime");
static_assert(sizeof(GuildTimeIconBtn_C_GetTime) == 0x000001, "Wrong size on GuildTimeIconBtn_C_GetTime");
static_assert(offsetof(GuildTimeIconBtn_C_GetTime, Param_Time) == 0x000000, "Member 'GuildTimeIconBtn_C_GetTime::Param_Time' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Checked
// 0x0058 (0x0058 - 0x0000)
struct GuildTimeIconBtn_C_Set_Checked final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5445[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(GuildTimeIconBtn_C_Set_Checked) == 0x000008, "Wrong alignment on GuildTimeIconBtn_C_Set_Checked");
static_assert(sizeof(GuildTimeIconBtn_C_Set_Checked) == 0x000058, "Wrong size on GuildTimeIconBtn_C_Set_Checked");
static_assert(offsetof(GuildTimeIconBtn_C_Set_Checked, bIsChecked) == 0x000000, "Member 'GuildTimeIconBtn_C_Set_Checked::bIsChecked' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_Set_Checked, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'GuildTimeIconBtn_C_Set_Checked::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_Set_Checked, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'GuildTimeIconBtn_C_Set_Checked::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetToolTipWidget_0
// 0x0028 (0x0028 - 0x0000)
struct GuildTimeIconBtn_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(GuildTimeIconBtn_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on GuildTimeIconBtn_C_GetToolTipWidget_0");
static_assert(sizeof(GuildTimeIconBtn_C_GetToolTipWidget_0) == 0x000028, "Wrong size on GuildTimeIconBtn_C_GetToolTipWidget_0");
static_assert(offsetof(GuildTimeIconBtn_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'GuildTimeIconBtn_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GuildTimeIconBtn_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildTimeIconBtn_C_GetToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'GuildTimeIconBtn_C_GetToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

