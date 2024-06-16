#pragma once

 

// Package: CommonInfoIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonInfoIcon.CommonInfoIcon_C.SetInfo
// 0x0158 (0x0158 - 0x0000)
struct CommonInfoIcon_C_SetInfo final
{
public:
	class FString                                 InInfoName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoType;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoDesc;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalImagineInfo;                                  // 0x0030(0x0048)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E94[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0118(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
};
static_assert(alignof(CommonInfoIcon_C_SetInfo) == 0x000008, "Wrong alignment on CommonInfoIcon_C_SetInfo");
static_assert(sizeof(CommonInfoIcon_C_SetInfo) == 0x000158, "Wrong size on CommonInfoIcon_C_SetInfo");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, InInfoName) == 0x000000, "Member 'CommonInfoIcon_C_SetInfo::InInfoName' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, InInfoType) == 0x000010, "Member 'CommonInfoIcon_C_SetInfo::InInfoType' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, InInfoDesc) == 0x000020, "Member 'CommonInfoIcon_C_SetInfo::InInfoDesc' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, LocalImagineInfo) == 0x000030, "Member 'CommonInfoIcon_C_SetInfo::LocalImagineInfo' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000C0, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, K2Node_MakeStruct_FormatArgumentData) == 0x0000D8, "Member 'CommonInfoIcon_C_SetInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000118, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, K2Node_MakeArray_Array) == 0x000130, "Member 'CommonInfoIcon_C_SetInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfo, CallFunc_Format_ReturnValue) == 0x000140, "Member 'CommonInfoIcon_C_SetInfo::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndType
// 0x0130 (0x0130 - 0x0000)
struct CommonInfoIcon_C_SetInfoNameAndType final
{
public:
	class FString                                 InInfoName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoType;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalImagineInfo;                                  // 0x0020(0x0048)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0090(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E95[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0118(0x0018)()
};
static_assert(alignof(CommonInfoIcon_C_SetInfoNameAndType) == 0x000008, "Wrong alignment on CommonInfoIcon_C_SetInfoNameAndType");
static_assert(sizeof(CommonInfoIcon_C_SetInfoNameAndType) == 0x000130, "Wrong size on CommonInfoIcon_C_SetInfoNameAndType");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, InInfoName) == 0x000000, "Member 'CommonInfoIcon_C_SetInfoNameAndType::InInfoName' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, InInfoType) == 0x000010, "Member 'CommonInfoIcon_C_SetInfoNameAndType::InInfoType' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, LocalImagineInfo) == 0x000020, "Member 'CommonInfoIcon_C_SetInfoNameAndType::LocalImagineInfo' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'CommonInfoIcon_C_SetInfoNameAndType::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'CommonInfoIcon_C_SetInfoNameAndType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000090, "Member 'CommonInfoIcon_C_SetInfoNameAndType::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'CommonInfoIcon_C_SetInfoNameAndType::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'CommonInfoIcon_C_SetInfoNameAndType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, K2Node_MakeArray_Array) == 0x0000F0, "Member 'CommonInfoIcon_C_SetInfoNameAndType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, CallFunc_Format_ReturnValue) == 0x000100, "Member 'CommonInfoIcon_C_SetInfoNameAndType::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndType, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000118, "Member 'CommonInfoIcon_C_SetInfoNameAndType::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndDesc
// 0x00A0 (0x00A0 - 0x0000)
struct CommonInfoIcon_C_SetInfoNameAndDesc final
{
public:
	class FString                                 InInfoName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoDesc;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalImagineInfo;                                  // 0x0020(0x0048)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E96[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0088(0x0018)()
};
static_assert(alignof(CommonInfoIcon_C_SetInfoNameAndDesc) == 0x000008, "Wrong alignment on CommonInfoIcon_C_SetInfoNameAndDesc");
static_assert(sizeof(CommonInfoIcon_C_SetInfoNameAndDesc) == 0x0000A0, "Wrong size on CommonInfoIcon_C_SetInfoNameAndDesc");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndDesc, InInfoName) == 0x000000, "Member 'CommonInfoIcon_C_SetInfoNameAndDesc::InInfoName' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndDesc, InInfoDesc) == 0x000010, "Member 'CommonInfoIcon_C_SetInfoNameAndDesc::InInfoDesc' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndDesc, LocalImagineInfo) == 0x000020, "Member 'CommonInfoIcon_C_SetInfoNameAndDesc::LocalImagineInfo' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndDesc, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'CommonInfoIcon_C_SetInfoNameAndDesc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndDesc, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'CommonInfoIcon_C_SetInfoNameAndDesc::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_SetInfoNameAndDesc, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'CommonInfoIcon_C_SetInfoNameAndDesc::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function CommonInfoIcon.CommonInfoIcon_C.Set Info Stack Imagine
// 0x02C8 (0x02C8 - 0x0000)
struct CommonInfoIcon_C_Set_Info_Stack_Imagine final
{
public:
	class FString                                 InInfoName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoType;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoDesc;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoType2;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InInfoDesc2;                                       // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Param_Info;                                        // 0x0050(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Param_StackBEffectiveDisplay;                      // 0x0168(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E97[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBImagineInfo                         LocalImagineInfo;                                  // 0x0170(0x0048)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01F8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E98[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0218(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0230(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0248(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0288(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02B0(0x0018)()
};
static_assert(alignof(CommonInfoIcon_C_Set_Info_Stack_Imagine) == 0x000008, "Wrong alignment on CommonInfoIcon_C_Set_Info_Stack_Imagine");
static_assert(sizeof(CommonInfoIcon_C_Set_Info_Stack_Imagine) == 0x0002C8, "Wrong size on CommonInfoIcon_C_Set_Info_Stack_Imagine");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, InInfoName) == 0x000000, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::InInfoName' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, InInfoType) == 0x000010, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::InInfoType' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, InInfoDesc) == 0x000020, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::InInfoDesc' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, InInfoType2) == 0x000030, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::InInfoType2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, InInfoDesc2) == 0x000040, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::InInfoDesc2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, Param_Info) == 0x000050, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::Param_Info' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, Param_StackBEffectiveDisplay) == 0x000168, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::Param_StackBEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, LocalImagineInfo) == 0x000170, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::LocalImagineInfo' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B8, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D0, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001E8, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001F8, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_IsValid_ReturnValue) == 0x000210, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000218, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000230, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, K2Node_MakeStruct_FormatArgumentData) == 0x000248, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000288, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, K2Node_MakeArray_Array) == 0x0002A0, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Set_Info_Stack_Imagine, CallFunc_Format_ReturnValue) == 0x0002B0, "Member 'CommonInfoIcon_C_Set_Info_Stack_Imagine::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CommonInfoIcon.CommonInfoIcon_C.Get_InfoIcon_ToolTipWidget_0
// 0x0020 (0x0020 - 0x0000)
struct CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E99[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_CreateTooltipWidgetIfNeeded_OutTooltip;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0) == 0x000008, "Wrong alignment on CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0");
static_assert(sizeof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0) == 0x000020, "Wrong size on CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, Temp_byte_Variable) == 0x000008, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, Temp_byte_Variable_1) == 0x000009, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, Temp_bool_Variable) == 0x00000A, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, CallFunc_CreateTooltipWidgetIfNeeded_OutTooltip) == 0x000010, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::CallFunc_CreateTooltipWidgetIfNeeded_OutTooltip' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, K2Node_Select_Default) == 0x000018, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonInfoIcon.CommonInfoIcon_C.CreateToolTipWidgetifNeeded
// 0x0328 (0x0328 - 0x0000)
struct CommonInfoIcon_C_CreateToolTipWidgetifNeeded final
{
public:
	class UWBP_CommonToolTipDetail_Fixed_C*       OutTooltip;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0028(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0050(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E9A[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0108(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0130(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9B[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0150(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0168(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9C[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x01E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0200(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0218(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0258(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0270(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0280(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0298(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x02B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x02C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x02E0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E9D[0x5];                                     // 0x02FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E9E[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetCachedToolTip_ReturnValue;             // 0x0310(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Fixed_C*       K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed; // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded) == 0x000008, "Wrong alignment on CommonInfoIcon_C_CreateToolTipWidgetifNeeded");
static_assert(sizeof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded) == 0x000328, "Wrong size on CommonInfoIcon_C_CreateToolTipWidgetifNeeded");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, OutTooltip) == 0x000000, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::OutTooltip' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Create_ReturnValue) == 0x000008, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000028, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000050, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000070, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000088, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0000A0, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_MakeArray_Array) == 0x0000F8, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Format_ReturnValue) == 0x000108, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000120, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000130, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_MakeLiteralByte_ReturnValue) == 0x000148, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000150, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_MakeStruct_FormatArgumentData_1) == 0x000168, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0001A8, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0001C0, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Format_ReturnValue_1) == 0x0001D0, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0001E8, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000200, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_MakeStruct_FormatArgumentData_2) == 0x000218, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000258, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_MakeArray_Array_2) == 0x000270, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Format_ReturnValue_2) == 0x000280, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000298, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0002B0, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_13) == 0x0002C8, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Conv_StringToText_ReturnValue_14) == 0x0002E0, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Not_PreBool_ReturnValue) == 0x0002F8, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002F9, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_IsValid) == 0x0002FA, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetUIManager_ReturnValue) == 0x000300, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_BooleanAND_ReturnValue) == 0x000308, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_GetCachedToolTip_ReturnValue) == 0x000310, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_GetCachedToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed) == 0x000318, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Fixed' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, K2Node_DynamicCast_bSuccess) == 0x000320, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonInfoIcon_C_CreateToolTipWidgetifNeeded, CallFunc_IsValid_ReturnValue_1) == 0x000321, "Member 'CommonInfoIcon_C_CreateToolTipWidgetifNeeded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

