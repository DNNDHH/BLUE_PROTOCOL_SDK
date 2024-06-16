#pragma once

 

// Package: BattleCordeListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BattleCordeListItem.BattleCordeListItem_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleCordeListItem_C_OnClicked__DelegateSignature final
{
public:
	class UBattleCordeListItem_C*                 InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleCordeListItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BattleCordeListItem_C_OnClicked__DelegateSignature");
static_assert(sizeof(BattleCordeListItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BattleCordeListItem_C_OnClicked__DelegateSignature");
static_assert(offsetof(BattleCordeListItem_C_OnClicked__DelegateSignature, InSelf) == 0x000000, "Member 'BattleCordeListItem_C_OnClicked__DelegateSignature::InSelf' has a wrong offset!");

// Function BattleCordeListItem.BattleCordeListItem_C.ExecuteUbergraph_BattleCordeListItem
// 0x0098 (0x0098 - 0x0000)
struct BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_808D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	float                                         CallFunc_BreakColor_R_1;                           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
};
static_assert(alignof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem) == 0x000008, "Wrong alignment on BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem");
static_assert(sizeof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem) == 0x000098, "Wrong size on BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, EntryPoint) == 0x000000, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_R) == 0x000004, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_G) == 0x000008, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_B) == 0x00000C, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_A) == 0x000010, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, K2Node_MakeStruct_LinearColor) == 0x000014, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_R_1) == 0x000050, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_G_1) == 0x000054, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_B_1) == 0x000058, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, CallFunc_BreakColor_A_1) == 0x00005C, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, K2Node_MakeStruct_LinearColor_1) == 0x000060, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function BattleCordeListItem.BattleCordeListItem_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct BattleCordeListItem_C_Setup final
{
public:
	struct FSBPlayerPresetEquipList               InCordeData;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeListItem_C_Setup) == 0x000008, "Wrong alignment on BattleCordeListItem_C_Setup");
static_assert(sizeof(BattleCordeListItem_C_Setup) == 0x000038, "Wrong size on BattleCordeListItem_C_Setup");
static_assert(offsetof(BattleCordeListItem_C_Setup, InCordeData) == 0x000000, "Member 'BattleCordeListItem_C_Setup::InCordeData' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'BattleCordeListItem_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BattleCordeListItem_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BattleCordeListItem_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BattleCordeListItem.BattleCordeListItem_C.SetIsEnable
// 0x0002 (0x0002 - 0x0000)
struct BattleCordeListItem_C_SetIsEnable final
{
public:
	bool                                          InIsSelectable;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleCordeListItem_C_SetIsEnable) == 0x000001, "Wrong alignment on BattleCordeListItem_C_SetIsEnable");
static_assert(sizeof(BattleCordeListItem_C_SetIsEnable) == 0x000002, "Wrong size on BattleCordeListItem_C_SetIsEnable");
static_assert(offsetof(BattleCordeListItem_C_SetIsEnable, InIsSelectable) == 0x000000, "Member 'BattleCordeListItem_C_SetIsEnable::InIsSelectable' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetIsEnable, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleCordeListItem_C_SetIsEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleCordeListItem.BattleCordeListItem_C.SetSelected
// 0x0230 (0x0230 - 0x0000)
struct BattleCordeListItem_C_SetSelected final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_808E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            TmpPressedButtonStyle;                             // 0x0008(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            TmpHoveredButtonStyle;                             // 0x0090(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            TmpNormalButtonStyle;                              // 0x0118(0x0088)(Edit, BlueprintVisible)
	float                                         CallFunc_BreakColor_R;                             // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x01D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01E0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0208(0x0028)()
};
static_assert(alignof(BattleCordeListItem_C_SetSelected) == 0x000008, "Wrong alignment on BattleCordeListItem_C_SetSelected");
static_assert(sizeof(BattleCordeListItem_C_SetSelected) == 0x000230, "Wrong size on BattleCordeListItem_C_SetSelected");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, InIsSelected) == 0x000000, "Member 'BattleCordeListItem_C_SetSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, TmpPressedButtonStyle) == 0x000008, "Member 'BattleCordeListItem_C_SetSelected::TmpPressedButtonStyle' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, TmpHoveredButtonStyle) == 0x000090, "Member 'BattleCordeListItem_C_SetSelected::TmpHoveredButtonStyle' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, TmpNormalButtonStyle) == 0x000118, "Member 'BattleCordeListItem_C_SetSelected::TmpNormalButtonStyle' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_R) == 0x0001A0, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_G) == 0x0001A4, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_B) == 0x0001A8, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_A) == 0x0001AC, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_R_1) == 0x0001B0, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_G_1) == 0x0001B4, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_B_1) == 0x0001B8, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, CallFunc_BreakColor_A_1) == 0x0001BC, "Member 'BattleCordeListItem_C_SetSelected::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, K2Node_MakeStruct_LinearColor) == 0x0001C0, "Member 'BattleCordeListItem_C_SetSelected::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, K2Node_MakeStruct_LinearColor_1) == 0x0001D0, "Member 'BattleCordeListItem_C_SetSelected::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, K2Node_MakeStruct_SlateColor) == 0x0001E0, "Member 'BattleCordeListItem_C_SetSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BattleCordeListItem_C_SetSelected, K2Node_MakeStruct_SlateColor_1) == 0x000208, "Member 'BattleCordeListItem_C_SetSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function BattleCordeListItem.BattleCordeListItem_C.GetCordeData
// 0x0018 (0x0018 - 0x0000)
struct BattleCordeListItem_C_GetCordeData final
{
public:
	struct FSBPlayerPresetEquipList               OutCordeData;                                      // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BattleCordeListItem_C_GetCordeData) == 0x000008, "Wrong alignment on BattleCordeListItem_C_GetCordeData");
static_assert(sizeof(BattleCordeListItem_C_GetCordeData) == 0x000018, "Wrong size on BattleCordeListItem_C_GetCordeData");
static_assert(offsetof(BattleCordeListItem_C_GetCordeData, OutCordeData) == 0x000000, "Member 'BattleCordeListItem_C_GetCordeData::OutCordeData' has a wrong offset!");

}

