#pragma once

 

// Package: GuildAttributeIconBtn

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "GuildAttributes_structs.hpp"


namespace SDK::Params
{

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.ExecuteUbergraph_GuildAttributeIconBtn
// 0x0108 (0x0108 - 0x0000)
struct GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5447[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5448[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5449[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FGuildAttributes                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544B[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544C[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsEnabled;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544D[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00B8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00E0(0x0028)()
};
static_assert(alignof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn) == 0x000008, "Wrong alignment on GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn");
static_assert(sizeof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn) == 0x000108, "Wrong size on GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, EntryPoint) == 0x000000, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, Temp_object_Variable) == 0x000008, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, Temp_bool_True_if_break_was_hit_Variable) == 0x000019, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_Event_IsDesignTime) == 0x00002C, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_Array_Get_Item) == 0x000040, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_BooleanAND_ReturnValue) == 0x000091, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_GetTextFromAsset_ReturnValue) == 0x000098, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_CustomEvent_Loaded) == 0x0000A8, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B0, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_CustomEvent_IsEnabled) == 0x0000B1, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_CustomEvent_IsEnabled' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000B2, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_MakeStruct_SlateColor) == 0x0000B8, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn, K2Node_MakeStruct_SlateColor_1) == 0x0000E0, "Member 'GuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Set Ediable
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeIconBtn_C_Set_Ediable final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeIconBtn_C_Set_Ediable) == 0x000001, "Wrong alignment on GuildAttributeIconBtn_C_Set_Ediable");
static_assert(sizeof(GuildAttributeIconBtn_C_Set_Ediable) == 0x000001, "Wrong size on GuildAttributeIconBtn_C_Set_Ediable");
static_assert(offsetof(GuildAttributeIconBtn_C_Set_Ediable, IsEnabled) == 0x000000, "Member 'GuildAttributeIconBtn_C_Set_Ediable::IsEnabled' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeIconBtn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeIconBtn_C_PreConstruct) == 0x000001, "Wrong alignment on GuildAttributeIconBtn_C_PreConstruct");
static_assert(sizeof(GuildAttributeIconBtn_C_PreConstruct) == 0x000001, "Wrong size on GuildAttributeIconBtn_C_PreConstruct");
static_assert(offsetof(GuildAttributeIconBtn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildAttributeIconBtn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A
// 0x0008 (0x0008 - 0x0000)
struct GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A) == 0x000008, "Wrong alignment on GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A");
static_assert(sizeof(GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A) == 0x000008, "Wrong size on GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A");
static_assert(offsetof(GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A, Loaded) == 0x000000, "Member 'GuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A::Loaded' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.IsCheck
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeIconBtn_C_IsCheck final
{
public:
	bool                                          Param_IsCheck;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildAttributeIconBtn_C_IsCheck) == 0x000001, "Wrong alignment on GuildAttributeIconBtn_C_IsCheck");
static_assert(sizeof(GuildAttributeIconBtn_C_IsCheck) == 0x000001, "Wrong size on GuildAttributeIconBtn_C_IsCheck");
static_assert(offsetof(GuildAttributeIconBtn_C_IsCheck, Param_IsCheck) == 0x000000, "Member 'GuildAttributeIconBtn_C_IsCheck::Param_IsCheck' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetAttrib
// 0x0001 (0x0001 - 0x0000)
struct GuildAttributeIconBtn_C_GetAttrib final
{
public:
	EGuildAttribute                               Param_Attribute;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildAttributeIconBtn_C_GetAttrib) == 0x000001, "Wrong alignment on GuildAttributeIconBtn_C_GetAttrib");
static_assert(sizeof(GuildAttributeIconBtn_C_GetAttrib) == 0x000001, "Wrong size on GuildAttributeIconBtn_C_GetAttrib");
static_assert(offsetof(GuildAttributeIconBtn_C_GetAttrib, Param_Attribute) == 0x000000, "Member 'GuildAttributeIconBtn_C_GetAttrib::Param_Attribute' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.SetChecked
// 0x0058 (0x0058 - 0x0000)
struct GuildAttributeIconBtn_C_SetChecked final
{
public:
	bool                                          bIsCheck;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(GuildAttributeIconBtn_C_SetChecked) == 0x000008, "Wrong alignment on GuildAttributeIconBtn_C_SetChecked");
static_assert(sizeof(GuildAttributeIconBtn_C_SetChecked) == 0x000058, "Wrong size on GuildAttributeIconBtn_C_SetChecked");
static_assert(offsetof(GuildAttributeIconBtn_C_SetChecked, bIsCheck) == 0x000000, "Member 'GuildAttributeIconBtn_C_SetChecked::bIsCheck' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_SetChecked, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'GuildAttributeIconBtn_C_SetChecked::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_SetChecked, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'GuildAttributeIconBtn_C_SetChecked::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetToolTipWidget_0
// 0x0028 (0x0028 - 0x0000)
struct GuildAttributeIconBtn_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(GuildAttributeIconBtn_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on GuildAttributeIconBtn_C_GetToolTipWidget_0");
static_assert(sizeof(GuildAttributeIconBtn_C_GetToolTipWidget_0) == 0x000028, "Wrong size on GuildAttributeIconBtn_C_GetToolTipWidget_0");
static_assert(offsetof(GuildAttributeIconBtn_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'GuildAttributeIconBtn_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GuildAttributeIconBtn_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildAttributeIconBtn_C_GetToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'GuildAttributeIconBtn_C_GetToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

