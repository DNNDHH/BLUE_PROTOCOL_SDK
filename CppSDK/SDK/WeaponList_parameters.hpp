#pragma once

 

// Package: WeaponList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"


namespace SDK::Params
{

// Function WeaponList.WeaponList_C.ExecuteUbergraph_WeaponList
// 0x0340 (0x0340 - 0x0000)
struct WeaponList_C_ExecuteUbergraph_WeaponList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTip_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_CustomEvent_InOwnItemIfno;                  // 0x0010(0x0118)()
	bool                                          K2Node_CustomEvent_InToolTipsEnable;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C3[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C4[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNameText_ReturnValue_1;                // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0170(0x0078)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01E8(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0200(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0238(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x02A8(0x0070)(ConstParm)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C5[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C6[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponList_C_ExecuteUbergraph_WeaponList) == 0x000008, "Wrong alignment on WeaponList_C_ExecuteUbergraph_WeaponList");
static_assert(sizeof(WeaponList_C_ExecuteUbergraph_WeaponList) == 0x000340, "Wrong size on WeaponList_C_ExecuteUbergraph_WeaponList");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, EntryPoint) == 0x000000, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, Temp_bool_Variable) == 0x000004, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, Temp_bool_Variable_1) == 0x000005, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, Temp_byte_Variable) == 0x000006, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, Temp_byte_Variable_1) == 0x000007, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_CustomEvent_InOwnItemIfno) == 0x000010, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_CustomEvent_InOwnItemIfno' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_CustomEvent_InToolTipsEnable) == 0x000128, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_CustomEvent_InToolTipsEnable' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_GetNameText_ReturnValue) == 0x000130, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_Select_Default) == 0x000158, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_Select_Default_1) == 0x00015C, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_GetNameText_ReturnValue_1) == 0x000160, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_GetNameText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000170, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001E8, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_Event_MyGeometry) == 0x000200, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_Event_MouseEvent_1) == 0x000238, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, K2Node_Event_MouseEvent) == 0x0002A8, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000318, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_PlayAnimation_ReturnValue) == 0x000320, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000328, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_GetAnimationCurrentTime_ReturnValue_1) == 0x00032C, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_GetAnimationCurrentTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000330, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ExecuteUbergraph_WeaponList, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000338, "Member 'WeaponList_C_ExecuteUbergraph_WeaponList::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function WeaponList.WeaponList_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct WeaponList_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponList_C_OnMouseLeave) == 0x000008, "Wrong alignment on WeaponList_C_OnMouseLeave");
static_assert(sizeof(WeaponList_C_OnMouseLeave) == 0x000070, "Wrong size on WeaponList_C_OnMouseLeave");
static_assert(offsetof(WeaponList_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WeaponList_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WeaponList.WeaponList_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct WeaponList_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponList_C_OnMouseEnter) == 0x000008, "Wrong alignment on WeaponList_C_OnMouseEnter");
static_assert(sizeof(WeaponList_C_OnMouseEnter) == 0x0000A8, "Wrong size on WeaponList_C_OnMouseEnter");
static_assert(offsetof(WeaponList_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WeaponList_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WeaponList_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WeaponList_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WeaponList.WeaponList_C.SetData
// 0x0120 (0x0120 - 0x0000)
struct WeaponList_C_SetData final
{
public:
	struct FOwnItemInfo                           InOwnItemIfno;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Param_InToolTipsEnable;                            // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponList_C_SetData) == 0x000008, "Wrong alignment on WeaponList_C_SetData");
static_assert(sizeof(WeaponList_C_SetData) == 0x000120, "Wrong size on WeaponList_C_SetData");
static_assert(offsetof(WeaponList_C_SetData, InOwnItemIfno) == 0x000000, "Member 'WeaponList_C_SetData::InOwnItemIfno' has a wrong offset!");
static_assert(offsetof(WeaponList_C_SetData, Param_InToolTipsEnable) == 0x000118, "Member 'WeaponList_C_SetData::Param_InToolTipsEnable' has a wrong offset!");

// Function WeaponList.WeaponList_C.ReloadWeaponAsset
// 0x0018 (0x0018 - 0x0000)
struct WeaponList_C_ReloadWeaponAsset final
{
public:
	int32                                         WeaponItemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_SetWeaponId_isExist;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponList_C_ReloadWeaponAsset) == 0x000004, "Wrong alignment on WeaponList_C_ReloadWeaponAsset");
static_assert(sizeof(WeaponList_C_ReloadWeaponAsset) == 0x000018, "Wrong size on WeaponList_C_ReloadWeaponAsset");
static_assert(offsetof(WeaponList_C_ReloadWeaponAsset, WeaponItemId) == 0x000000, "Member 'WeaponList_C_ReloadWeaponAsset::WeaponItemId' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ReloadWeaponAsset, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WeaponList_C_ReloadWeaponAsset::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ReloadWeaponAsset, CallFunc_SetWeaponId_isExist) == 0x000014, "Member 'WeaponList_C_ReloadWeaponAsset::CallFunc_SetWeaponId_isExist' has a wrong offset!");
static_assert(offsetof(WeaponList_C_ReloadWeaponAsset, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'WeaponList_C_ReloadWeaponAsset::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponList.WeaponList_C.Set Stack BIconby Own Item Info
// 0x0120 (0x0120 - 0x0000)
struct WeaponList_C_Set_Stack_BIconby_Own_Item_Info final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info) == 0x000008, "Wrong alignment on WeaponList_C_Set_Stack_BIconby_Own_Item_Info");
static_assert(sizeof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info) == 0x000120, "Wrong size on WeaponList_C_Set_Stack_BIconby_Own_Item_Info");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, InOwnItemInfo) == 0x000000, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, Temp_bool_Variable) == 0x000118, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, CallFunc_MakeLiteralByte_ReturnValue) == 0x000119, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00011A, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x00011B, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, K2Node_Select_Default) == 0x00011C, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponList_C_Set_Stack_BIconby_Own_Item_Info, CallFunc_IsValid_ReturnValue) == 0x00011D, "Member 'WeaponList_C_Set_Stack_BIconby_Own_Item_Info::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

