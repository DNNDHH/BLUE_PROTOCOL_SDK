#pragma once

 

// Package: GashaMenu_CategoryItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         Param_BtnId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature");
static_assert(sizeof(GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature");
static_assert(offsetof(GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature, Param_BtnId) == 0x000000, "Member 'GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature::Param_BtnId' has a wrong offset!");

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.ExecuteUbergraph_GashaMenu_CategoryItem
// 0x0004 (0x0004 - 0x0000)
struct GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem) == 0x000004, "Wrong alignment on GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem");
static_assert(sizeof(GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem) == 0x000004, "Wrong size on GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem");
static_assert(offsetof(GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem, EntryPoint) == 0x000000, "Member 'GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem::EntryPoint' has a wrong offset!");

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.Set Tab Text
// 0x0080 (0x0080 - 0x0000)
struct GashaMenu_CategoryItem_C_Set_Tab_Text final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8457[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8458[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBGashaCategory>               CallFunc_GetGashaCategoryList_ReturnValue;         // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8459[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaCategory                       CallFunc_Array_Get_Item;                           // 0x0040(0x0020)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_845A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(GashaMenu_CategoryItem_C_Set_Tab_Text) == 0x000008, "Wrong alignment on GashaMenu_CategoryItem_C_Set_Tab_Text");
static_assert(sizeof(GashaMenu_CategoryItem_C_Set_Tab_Text) == 0x000080, "Wrong size on GashaMenu_CategoryItem_C_Set_Tab_Text");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, TextId) == 0x000000, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::TextId' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_GetGashaComponent_ReturnValue) == 0x000020, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_GetGashaCategoryList_ReturnValue) == 0x000028, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_GetGashaCategoryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_Array_Get_Item) == 0x000040, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_Set_Tab_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'GashaMenu_CategoryItem_C_Set_Tab_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetBtnSelected
// 0x0720 (0x0720 - 0x0000)
struct GashaMenu_CategoryItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_845B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0098(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0120(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0398(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0420(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x04A8(0x0278)()
};
static_assert(alignof(GashaMenu_CategoryItem_C_SetBtnSelected) == 0x000008, "Wrong alignment on GashaMenu_CategoryItem_C_SetBtnSelected");
static_assert(sizeof(GashaMenu_CategoryItem_C_SetBtnSelected) == 0x000720, "Wrong size on GashaMenu_CategoryItem_C_SetBtnSelected");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x000098, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x000120, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000398, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000420, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x0004A8, "Member 'GashaMenu_CategoryItem_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.GetTabText
// 0x0004 (0x0004 - 0x0000)
struct GashaMenu_CategoryItem_C_GetTabText final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaMenu_CategoryItem_C_GetTabText) == 0x000004, "Wrong alignment on GashaMenu_CategoryItem_C_GetTabText");
static_assert(sizeof(GashaMenu_CategoryItem_C_GetTabText) == 0x000004, "Wrong size on GashaMenu_CategoryItem_C_GetTabText");
static_assert(offsetof(GashaMenu_CategoryItem_C_GetTabText, TextId) == 0x000000, "Member 'GashaMenu_CategoryItem_C_GetTabText::TextId' has a wrong offset!");

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetRibbon
// 0x0018 (0x0018 - 0x0000)
struct GashaMenu_CategoryItem_C_SetRibbon final
{
public:
	int32                                         RibbonType;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GashaMenu_CategoryItem_C_SetRibbon) == 0x000004, "Wrong alignment on GashaMenu_CategoryItem_C_SetRibbon");
static_assert(sizeof(GashaMenu_CategoryItem_C_SetRibbon) == 0x000018, "Wrong size on GashaMenu_CategoryItem_C_SetRibbon");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, RibbonType) == 0x000000, "Member 'GashaMenu_CategoryItem_C_SetRibbon::RibbonType' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'GashaMenu_CategoryItem_C_SetRibbon::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000008, "Member 'GashaMenu_CategoryItem_C_SetRibbon::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, CallFunc_And_IntInt_ReturnValue) == 0x00000C, "Member 'GashaMenu_CategoryItem_C_SetRibbon::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, CallFunc_And_IntInt_ReturnValue_1) == 0x000010, "Member 'GashaMenu_CategoryItem_C_SetRibbon::CallFunc_And_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'GashaMenu_CategoryItem_C_SetRibbon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaMenu_CategoryItem_C_SetRibbon, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000015, "Member 'GashaMenu_CategoryItem_C_SetRibbon::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");

}

