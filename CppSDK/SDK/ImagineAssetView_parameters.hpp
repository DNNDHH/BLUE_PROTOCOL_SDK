#pragma once

 

// Package: ImagineAssetView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ImagineAssetView.ImagineAssetView_C.ExecuteUbergraph_ImagineAssetView
// 0x00C0 (0x00C0 - 0x0000)
struct ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CA6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView) == 0x000008, "Wrong alignment on ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView");
static_assert(sizeof(ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView) == 0x0000C0, "Wrong size on ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView");
static_assert(offsetof(ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView, EntryPoint) == 0x000000, "Member 'ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView, CallFunc_FindImagineMaster_bIsValid) == 0x000004, "Member 'ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ImagineAssetView.ImagineAssetView_C.SetInfo
// 0x0118 (0x0118 - 0x0000)
struct ImagineAssetView_C_SetInfo final
{
public:
	struct FOwnItemInfo                           Param_Info;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineAssetView_C_SetInfo) == 0x000008, "Wrong alignment on ImagineAssetView_C_SetInfo");
static_assert(sizeof(ImagineAssetView_C_SetInfo) == 0x000118, "Wrong size on ImagineAssetView_C_SetInfo");
static_assert(offsetof(ImagineAssetView_C_SetInfo, Param_Info) == 0x000000, "Member 'ImagineAssetView_C_SetInfo::Param_Info' has a wrong offset!");

// Function ImagineAssetView.ImagineAssetView_C.SetUpName
// 0x000C (0x000C - 0x0000)
struct ImagineAssetView_C_SetUpName final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CA7[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAssetView_C_SetUpName) == 0x000004, "Wrong alignment on ImagineAssetView_C_SetUpName");
static_assert(sizeof(ImagineAssetView_C_SetUpName) == 0x00000C, "Wrong size on ImagineAssetView_C_SetUpName");
static_assert(offsetof(ImagineAssetView_C_SetUpName, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'ImagineAssetView_C_SetUpName::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_SetUpName, Temp_bool_Variable) == 0x000001, "Member 'ImagineAssetView_C_SetUpName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_SetUpName, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ImagineAssetView_C_SetUpName::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_SetUpName, CallFunc_GetStackBNum_ReturnValue) == 0x000004, "Member 'ImagineAssetView_C_SetUpName::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_SetUpName, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000008, "Member 'ImagineAssetView_C_SetUpName::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAssetView_C_SetUpName, K2Node_Select_Default) == 0x000009, "Member 'ImagineAssetView_C_SetUpName::K2Node_Select_Default' has a wrong offset!");

// Function ImagineAssetView.ImagineAssetView_C.SetAbilityInfoVisibility
// 0x0001 (0x0001 - 0x0000)
struct ImagineAssetView_C_SetAbilityInfoVisibility final
{
public:
	bool                                          Param_VisibleAbilityInfo;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAssetView_C_SetAbilityInfoVisibility) == 0x000001, "Wrong alignment on ImagineAssetView_C_SetAbilityInfoVisibility");
static_assert(sizeof(ImagineAssetView_C_SetAbilityInfoVisibility) == 0x000001, "Wrong size on ImagineAssetView_C_SetAbilityInfoVisibility");
static_assert(offsetof(ImagineAssetView_C_SetAbilityInfoVisibility, Param_VisibleAbilityInfo) == 0x000000, "Member 'ImagineAssetView_C_SetAbilityInfoVisibility::Param_VisibleAbilityInfo' has a wrong offset!");

// Function ImagineAssetView.ImagineAssetView_C.Set Diff Info
// 0x0118 (0x0118 - 0x0000)
struct ImagineAssetView_C_Set_Diff_Info final
{
public:
	struct FOwnItemInfo                           InDiffBase;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineAssetView_C_Set_Diff_Info) == 0x000008, "Wrong alignment on ImagineAssetView_C_Set_Diff_Info");
static_assert(sizeof(ImagineAssetView_C_Set_Diff_Info) == 0x000118, "Wrong size on ImagineAssetView_C_Set_Diff_Info");
static_assert(offsetof(ImagineAssetView_C_Set_Diff_Info, InDiffBase) == 0x000000, "Member 'ImagineAssetView_C_Set_Diff_Info::InDiffBase' has a wrong offset!");

}

