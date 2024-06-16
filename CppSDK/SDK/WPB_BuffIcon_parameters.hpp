#pragma once

 

// Package: WPB_BuffIcon

#include "Basic.hpp"

#include "BuffIconAssetData_structs.hpp"


namespace SDK::Params
{

// Function WPB_BuffIcon.WPB_BuffIcon_C.ExecuteUbergraph_WPB_BuffIcon
// 0x0040 (0x0040 - 0x0000)
struct WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BuffName;                       // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9308[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBuffIconAssetData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon) == 0x000008, "Wrong alignment on WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon");
static_assert(sizeof(WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon) == 0x000040, "Wrong size on WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon");
static_assert(offsetof(WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon, EntryPoint) == 0x000000, "Member 'WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon, K2Node_CustomEvent_BuffName) == 0x000004, "Member 'WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon::K2Node_CustomEvent_BuffName' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000038, "Member 'WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function WPB_BuffIcon.WPB_BuffIcon_C.SetBuffIcon
// 0x0008 (0x0008 - 0x0000)
struct WPB_BuffIcon_C_SetBuffIcon final
{
public:
	class FName                                   Param_BuffName;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPB_BuffIcon_C_SetBuffIcon) == 0x000004, "Wrong alignment on WPB_BuffIcon_C_SetBuffIcon");
static_assert(sizeof(WPB_BuffIcon_C_SetBuffIcon) == 0x000008, "Wrong size on WPB_BuffIcon_C_SetBuffIcon");
static_assert(offsetof(WPB_BuffIcon_C_SetBuffIcon, Param_BuffName) == 0x000000, "Member 'WPB_BuffIcon_C_SetBuffIcon::Param_BuffName' has a wrong offset!");

// Function WPB_BuffIcon.WPB_BuffIcon_C.Get_BuffIcon_1_ToolTipWidget_0
// 0x0070 (0x0070 - 0x0000)
struct WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidBuffToolTip_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9309[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_930A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Variable_C*    CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0) == 0x000008, "Wrong alignment on WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0");
static_assert(sizeof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0) == 0x000070, "Wrong size on WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_ValidBuffToolTip_ReturnValue) == 0x000008, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_ValidBuffToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000010, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000038, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000068, "Member 'WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");

}

