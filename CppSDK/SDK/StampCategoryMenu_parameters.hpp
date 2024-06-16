#pragma once

 

// Package: StampCategoryMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function StampCategoryMenu.StampCategoryMenu_C.OnUpdateStamp__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct StampCategoryMenu_C_OnUpdateStamp__DelegateSignature final
{
public:
	struct FSBStampCategoryMasterData             Param_StampCategoryMasterData;                     // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(StampCategoryMenu_C_OnUpdateStamp__DelegateSignature) == 0x000008, "Wrong alignment on StampCategoryMenu_C_OnUpdateStamp__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_OnUpdateStamp__DelegateSignature) == 0x000020, "Wrong size on StampCategoryMenu_C_OnUpdateStamp__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_OnUpdateStamp__DelegateSignature, Param_StampCategoryMasterData) == 0x000000, "Member 'StampCategoryMenu_C_OnUpdateStamp__DelegateSignature::Param_StampCategoryMasterData' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.ExecuteUbergraph_StampCategoryMenu
// 0x0088 (0x0088 - 0x0000)
struct StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSelectStampCategoryMasterData_ReturnValue; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4799[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_10;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_9;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_8;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_7;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_6;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_5;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_4;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_3;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_2;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_1;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStampCategoryMasterData             CallFunc_GetSelectStampCategoryMasterData_Output;  // 0x0048(0x0020)()
	struct FSBStampCategoryMasterData             CallFunc_GetSelectStampCategoryMasterData_Output_1; // 0x0068(0x0020)()
};
static_assert(alignof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu) == 0x000008, "Wrong alignment on StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu");
static_assert(sizeof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu) == 0x000088, "Wrong size on StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, EntryPoint) == 0x000000, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, CallFunc_IsValidSelectStampCategoryMasterData_ReturnValue) == 0x000004, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::CallFunc_IsValidSelectStampCategoryMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, Temp_int_Variable) == 0x000014, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_10) == 0x000018, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_10' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_9) == 0x00001C, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_9' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_8) == 0x000020, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_8' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_7) == 0x000024, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_7' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_6) == 0x000028, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_6' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_5) == 0x00002C, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_4) == 0x000030, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_3) == 0x000034, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_2) == 0x000038, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index_1) == 0x00003C, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, K2Node_ComponentBoundEvent_Index) == 0x000040, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, Temp_int_Variable_1) == 0x000044, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, CallFunc_GetSelectStampCategoryMasterData_Output) == 0x000048, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::CallFunc_GetSelectStampCategoryMasterData_Output' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu, CallFunc_GetSelectStampCategoryMasterData_Output_1) == 0x000068, "Member 'StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu::CallFunc_GetSelectStampCategoryMasterData_Output_1' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.GetMyStampDataList
// 0x03E8 (0x03E8 - 0x0000)
struct StampCategoryMenu_C_GetMyStampDataList final
{
public:
	TArray<struct FSBStampCategoryMasterData>     TmpTermCategoryDataList;                           // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 TmpLimitedStampIdList;                             // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpStampId;                                        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479B[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             TmpCategoryData;                                   // 0x0028(0x0020)(Edit, BlueprintVisible)
	TArray<int32>                                 MyStampList;                                       // 0x0048(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBStampMasterData>             StampMasterData;                                   // 0x0058(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 StampAddList;                                      // 0x0068(0x0010)(Edit, BlueprintVisible)
	bool                                          IsAdd;                                             // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 StampList;                                         // 0x0080(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 HistoryStampAddList;                               // 0x0090(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479D[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479E[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479F[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47A0[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A1[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A2[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A3[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_1;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A4[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue;      // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStampMasterData>             CallFunc_GetUnlockTermStampDataList_OutMasterDataList; // 0x0140(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47A5[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             K2Node_MakeStruct_SBStampCategoryMasterData;       // 0x0158(0x0020)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A6[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1;  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue_2;  // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A7[0x2];                                     // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A8[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A9[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x01A8(0x0010)(ReferenceParm)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AA[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStampCategoryMasterData>     CallFunc_GetTermCategoryList_OutTermCategoryDataList; // 0x01C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetTermCategoryList_ReturnValue;          // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue;      // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AB[0x2];                                     // 0x01DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckLimitedTimeStamp_Result;             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindStampDataByStampId_IsExists;          // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AC[0x5];                                     // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_FindStampDataByStampId_ReturnValue;       // 0x01E8(0x0020)()
	TArray<struct FSBStampMasterData>             K2Node_MakeArray_Array_1;                          // 0x0208(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47AD[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_Array_Get_Item;                           // 0x0220(0x0020)()
	struct FSBStampCategoryMasterData             K2Node_MakeStruct_SBStampCategoryMasterData_1;     // 0x0240(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47AE[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47AF[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindStampDataByStampId_IsExists_1;        // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B0[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_FindStampDataByStampId_ReturnValue_1;     // 0x0288(0x0020)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B1[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B2[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBUnlockStampCategoryData>     CallFunc_GetUnlockStampData_ReturnValue;           // 0x02C0(0x0010)(ReferenceParm)
	struct FSBUnlockStampCategoryData             CallFunc_Array_Get_Item_2;                         // 0x02D0(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B3[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBUnlockStampData                     CallFunc_Array_Get_Item_3;                         // 0x02F8(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B4[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_4;                         // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B5[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStampCategoryMasterData             K2Node_MakeStruct_SBStampCategoryMasterData_2;     // 0x0320(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B6[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_Array_Get_Item_5;                         // 0x0350(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0375(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0376(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x0377(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_3;           // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B7[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_3;       // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampDataByStampId_IsExists_2;        // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B8[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_FindStampDataByStampId_ReturnValue_2;     // 0x0398(0x0020)()
	bool                                          CallFunc_FindStampMasterDataByStampId_IsExists;    // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B9[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampMasterDataByStampId_ReturnValue; // 0x03C0(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_GetMyStampDataList) == 0x000008, "Wrong alignment on StampCategoryMenu_C_GetMyStampDataList");
static_assert(sizeof(StampCategoryMenu_C_GetMyStampDataList) == 0x0003E8, "Wrong size on StampCategoryMenu_C_GetMyStampDataList");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, TmpTermCategoryDataList) == 0x000000, "Member 'StampCategoryMenu_C_GetMyStampDataList::TmpTermCategoryDataList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, TmpLimitedStampIdList) == 0x000010, "Member 'StampCategoryMenu_C_GetMyStampDataList::TmpLimitedStampIdList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, TmpStampId) == 0x000020, "Member 'StampCategoryMenu_C_GetMyStampDataList::TmpStampId' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, TmpCategoryData) == 0x000028, "Member 'StampCategoryMenu_C_GetMyStampDataList::TmpCategoryData' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, MyStampList) == 0x000048, "Member 'StampCategoryMenu_C_GetMyStampDataList::MyStampList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, StampMasterData) == 0x000058, "Member 'StampCategoryMenu_C_GetMyStampDataList::StampMasterData' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, StampAddList) == 0x000068, "Member 'StampCategoryMenu_C_GetMyStampDataList::StampAddList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, IsAdd) == 0x000078, "Member 'StampCategoryMenu_C_GetMyStampDataList::IsAdd' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, StampList) == 0x000080, "Member 'StampCategoryMenu_C_GetMyStampDataList::StampList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, HistoryStampAddList) == 0x000090, "Member 'StampCategoryMenu_C_GetMyStampDataList::HistoryStampAddList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Loop_Counter_Variable_1) == 0x0000A4, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000AC, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_bool_True_if_break_was_hit_Variable) == 0x0000B0, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Array_Index_Variable) == 0x0000B4, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Not_PreBool_ReturnValue) == 0x0000B8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Array_Index_Variable_1) == 0x0000BC, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Array_Index_Variable_2) == 0x0000C4, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Loop_Counter_Variable_2) == 0x0000C8, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000CC, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Array_Index_Variable_3) == 0x0000D0, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Loop_Counter_Variable_3) == 0x0000D4, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000DC, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Loop_Counter_Variable_4) == 0x0000E0, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000E4, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Array_Index_Variable_4) == 0x0000E8, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Loop_Counter_Variable_5) == 0x0000EC, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000F0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetSBPlayerState_ReturnValue) == 0x0000F8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_IsValid) == 0x000100, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000108, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_IsValid_1) == 0x000110, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000118, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000120, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetSBPlayerState_ReturnValue_1) == 0x000128, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetSBPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetPlayerStampComponent_ReturnValue) == 0x000138, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetPlayerStampComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetUnlockTermStampDataList_OutMasterDataList) == 0x000140, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetUnlockTermStampDataList_OutMasterDataList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_1) == 0x000150, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_MakeStruct_SBStampCategoryMasterData) == 0x000158, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_MakeStruct_SBStampCategoryMasterData' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Greater_IntInt_ReturnValue) == 0x000178, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue) == 0x00017C, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1) == 0x000180, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_ValidStampEmoteTermUpdate_ReturnValue_2) == 0x000181, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_ValidStampEmoteTermUpdate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_2) == 0x000184, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000188, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000190, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000198, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_MakeArray_Array) == 0x0001A8, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_AsSBPlayer_State) == 0x0001B8, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_bSuccess_1) == 0x0001C0, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetTermCategoryList_OutTermCategoryDataList) == 0x0001C8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetTermCategoryList_OutTermCategoryDataList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetTermCategoryList_ReturnValue) == 0x0001D8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetTermCategoryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_IsPlayerStampPossession_ReturnValue) == 0x0001D9, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_IsPlayerStampPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_AddUnique_ReturnValue) == 0x0001DC, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_CheckLimitedTimeStamp_Result) == 0x0001E0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_CheckLimitedTimeStamp_Result' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001E1, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampDataByStampId_IsExists) == 0x0001E2, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampDataByStampId_IsExists' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampDataByStampId_ReturnValue) == 0x0001E8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampDataByStampId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_MakeArray_Array_1) == 0x000208, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, Temp_int_Array_Index_Variable_5) == 0x000218, "Member 'StampCategoryMenu_C_GetMyStampDataList::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Get_Item) == 0x000220, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_MakeStruct_SBStampCategoryMasterData_1) == 0x000240, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_MakeStruct_SBStampCategoryMasterData_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue_1) == 0x000260, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000268, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Get_Item_1) == 0x000270, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000278, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_bSuccess_2) == 0x000280, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampDataByStampId_IsExists_1) == 0x000281, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampDataByStampId_IsExists_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampDataByStampId_ReturnValue_1) == 0x000288, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampDataByStampId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x0002A8, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_DynamicCast_bSuccess_3) == 0x0002B0, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_3) == 0x0002B4, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002B8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetUnlockStampData_ReturnValue) == 0x0002C0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetUnlockStampData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Get_Item_2) == 0x0002D0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_4) == 0x0002F0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Less_IntInt_ReturnValue_2) == 0x0002F4, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Get_Item_3) == 0x0002F8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_5) == 0x000308, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Less_IntInt_ReturnValue_3) == 0x00030C, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Get_Item_4) == 0x000310, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_6) == 0x000314, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Less_IntInt_ReturnValue_4) == 0x000318, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue_2) == 0x00031C, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, K2Node_MakeStruct_SBStampCategoryMasterData_2) == 0x000320, "Member 'StampCategoryMenu_C_GetMyStampDataList::K2Node_MakeStruct_SBStampCategoryMasterData_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue_3) == 0x000340, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue_4) == 0x000344, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue_5) == 0x000348, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Get_Item_5) == 0x000350, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Length_ReturnValue_7) == 0x000370, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Less_IntInt_ReturnValue_5) == 0x000374, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_BooleanAND_ReturnValue) == 0x000375, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000376, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_IsValid_2) == 0x000377, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000378, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_IsValid_3) == 0x000380, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_GetMasterDataManager_ReturnValue_3) == 0x000388, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_GetMasterDataManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampDataByStampId_IsExists_2) == 0x000390, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampDataByStampId_IsExists_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampDataByStampId_ReturnValue_2) == 0x000398, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampDataByStampId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampMasterDataByStampId_IsExists) == 0x0003B8, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampMasterDataByStampId_IsExists' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_FindStampMasterDataByStampId_ReturnValue) == 0x0003C0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_FindStampMasterDataByStampId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetMyStampDataList, CallFunc_Array_Add_ReturnValue_6) == 0x0003E0, "Member 'StampCategoryMenu_C_GetMyStampDataList::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.Update Button
// 0x00C8 (0x00C8 - 0x0000)
struct StampCategoryMenu_C_Update_Button final
{
public:
	int32                                         LimiteCount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonIndex;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonNum;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HistoryDiff;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxButtonNum;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHistoryMode;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47BA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStampCategoryButton_C*>         CategoryButton;                                    // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BB[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BC[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47BD[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47BE[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BF[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStampCategoryButton_C*                 CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C0[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C1[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C2[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_Update_Button) == 0x000008, "Wrong alignment on StampCategoryMenu_C_Update_Button");
static_assert(sizeof(StampCategoryMenu_C_Update_Button) == 0x0000C8, "Wrong size on StampCategoryMenu_C_Update_Button");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, LimiteCount) == 0x000000, "Member 'StampCategoryMenu_C_Update_Button::LimiteCount' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, ButtonIndex) == 0x000004, "Member 'StampCategoryMenu_C_Update_Button::ButtonIndex' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, ButtonNum) == 0x000008, "Member 'StampCategoryMenu_C_Update_Button::ButtonNum' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, HistoryDiff) == 0x00000C, "Member 'StampCategoryMenu_C_Update_Button::HistoryDiff' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, MaxButtonNum) == 0x000010, "Member 'StampCategoryMenu_C_Update_Button::MaxButtonNum' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, IsHistoryMode) == 0x000014, "Member 'StampCategoryMenu_C_Update_Button::IsHistoryMode' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CategoryButton) == 0x000018, "Member 'StampCategoryMenu_C_Update_Button::CategoryButton' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_bool_Variable) == 0x000028, "Member 'StampCategoryMenu_C_Update_Button::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_bool_Variable_1) == 0x000029, "Member 'StampCategoryMenu_C_Update_Button::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_byte_Variable) == 0x00002A, "Member 'StampCategoryMenu_C_Update_Button::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_byte_Variable_1) == 0x00002B, "Member 'StampCategoryMenu_C_Update_Button::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'StampCategoryMenu_C_Update_Button::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000031, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_MakeLiteralByte_ReturnValue) == 0x000033, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000034, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'StampCategoryMenu_C_Update_Button::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, K2Node_Select_Default) == 0x00003C, "Member 'StampCategoryMenu_C_Update_Button::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_bool_Variable_2) == 0x000044, "Member 'StampCategoryMenu_C_Update_Button::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_int_Variable) == 0x000048, "Member 'StampCategoryMenu_C_Update_Button::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, Temp_int_Variable_1) == 0x00005C, "Member 'StampCategoryMenu_C_Update_Button::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, K2Node_Select_Default_1) == 0x000064, "Member 'StampCategoryMenu_C_Update_Button::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Add_IntInt_ReturnValue_2) == 0x000068, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Min_ReturnValue) == 0x00006C, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000070, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_BooleanAND_ReturnValue_1) == 0x000071, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000072, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, K2Node_Select_Default_2) == 0x000073, "Member 'StampCategoryMenu_C_Update_Button::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Get_Item) == 0x000078, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Length_ReturnValue_2) == 0x000080, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Length_ReturnValue_3) == 0x00008C, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000090, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000094, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Add_IntInt_ReturnValue_3) == 0x000098, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00009C, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_1) == 0x0000A0, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_2) == 0x0000A4, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_3) == 0x0000A8, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_4) == 0x0000AC, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_5) == 0x0000B0, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_6) == 0x0000B4, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_7) == 0x0000B8, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_8) == 0x0000BC, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_9) == 0x0000C0, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Update_Button, CallFunc_Array_Add_ReturnValue_10) == 0x0000C4, "Member 'StampCategoryMenu_C_Update_Button::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.UpdateEnableButton
// 0x0058 (0x0058 - 0x0000)
struct StampCategoryMenu_C_UpdateEnableButton final
{
public:
	TArray<class UStampCategoryButton_C*>         ButtonList;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C3[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_UpdateEnableButton) == 0x000008, "Wrong alignment on StampCategoryMenu_C_UpdateEnableButton");
static_assert(sizeof(StampCategoryMenu_C_UpdateEnableButton) == 0x000058, "Wrong size on StampCategoryMenu_C_UpdateEnableButton");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, ButtonList) == 0x000000, "Member 'StampCategoryMenu_C_UpdateEnableButton::ButtonList' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, Temp_int_Array_Index_Variable) == 0x000010, "Member 'StampCategoryMenu_C_UpdateEnableButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'StampCategoryMenu_C_UpdateEnableButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Get_Item) == 0x000020, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002D, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_1) == 0x000030, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_2) == 0x000034, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_3) == 0x000038, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_4) == 0x00003C, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_5) == 0x000040, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_6) == 0x000044, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_7) == 0x000048, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_8) == 0x00004C, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_9) == 0x000050, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateEnableButton, CallFunc_Array_Add_ReturnValue_10) == 0x000054, "Member 'StampCategoryMenu_C_UpdateEnableButton::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.Set History Mode
// 0x0028 (0x0028 - 0x0000)
struct StampCategoryMenu_C_Set_History_Mode final
{
public:
	bool                                          bSet;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_GetSelectStampCategoryMasterData_Output;  // 0x0008(0x0020)()
};
static_assert(alignof(StampCategoryMenu_C_Set_History_Mode) == 0x000008, "Wrong alignment on StampCategoryMenu_C_Set_History_Mode");
static_assert(sizeof(StampCategoryMenu_C_Set_History_Mode) == 0x000028, "Wrong size on StampCategoryMenu_C_Set_History_Mode");
static_assert(offsetof(StampCategoryMenu_C_Set_History_Mode, bSet) == 0x000000, "Member 'StampCategoryMenu_C_Set_History_Mode::bSet' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_Set_History_Mode, CallFunc_GetSelectStampCategoryMasterData_Output) == 0x000008, "Member 'StampCategoryMenu_C_Set_History_Mode::CallFunc_GetSelectStampCategoryMasterData_Output' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.UpdateMyStampDataList
// 0x0090 (0x0090 - 0x0000)
struct StampCategoryMenu_C_UpdateMyStampDataList final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStampMasterData>             AddStampData;                                      // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         AddStampId;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxStampNum;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C6[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampDataByStampId_IsExists;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C7[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_FindStampDataByStampId_ReturnValue;       // 0x0040(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C8[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47C9[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StampCategoryMenu_C_UpdateMyStampDataList) == 0x000008, "Wrong alignment on StampCategoryMenu_C_UpdateMyStampDataList");
static_assert(sizeof(StampCategoryMenu_C_UpdateMyStampDataList) == 0x000090, "Wrong size on StampCategoryMenu_C_UpdateMyStampDataList");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, StampId) == 0x000000, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::StampId' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, AddStampData) == 0x000008, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::AddStampData' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, AddStampId) == 0x000018, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::AddStampId' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, MaxStampNum) == 0x00001C, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::MaxStampNum' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_GetMasterDataManager_IsValid) == 0x00002C, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Array_Get_Item) == 0x000038, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_FindStampDataByStampId_IsExists) == 0x00003C, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_FindStampDataByStampId_IsExists' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_FindStampDataByStampId_ReturnValue) == 0x000040, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_FindStampDataByStampId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_GetMasterDataManager_IsValid_1) == 0x000069, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000070, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Array_LastIndex_ReturnValue) == 0x000078, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Array_Length_ReturnValue_1) == 0x00007C, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_Array_Find_ReturnValue) == 0x000084, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_UpdateMyStampDataList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000088, "Member 'StampCategoryMenu_C_UpdateMyStampDataList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.FindStampCategoryMasterData
// 0x0060 (0x0060 - 0x0000)
struct StampCategoryMenu_C_FindStampCategoryMasterData final
{
public:
	int32                                         InCategoryId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFind;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47CA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             RetData;                                           // 0x0008(0x0020)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStampCategoryMasterData             CallFunc_Array_Get_Item;                           // 0x0038(0x0020)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StampCategoryMenu_C_FindStampCategoryMasterData) == 0x000008, "Wrong alignment on StampCategoryMenu_C_FindStampCategoryMasterData");
static_assert(sizeof(StampCategoryMenu_C_FindStampCategoryMasterData) == 0x000060, "Wrong size on StampCategoryMenu_C_FindStampCategoryMasterData");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, InCategoryId) == 0x000000, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::InCategoryId' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, IsFind) == 0x000004, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::IsFind' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, RetData) == 0x000008, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::RetData' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, Temp_int_Array_Index_Variable) == 0x000028, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, CallFunc_Array_Get_Item) == 0x000038, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_FindStampCategoryMasterData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000059, "Member 'StampCategoryMenu_C_FindStampCategoryMasterData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.LoadStampHistoryIdsData
// 0x0078 (0x0078 - 0x0000)
struct StampCategoryMenu_C_LoadStampHistoryIdsData final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47CB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47CC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_CheckTermIdByList_OutStampIds;            // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_CheckTermIdByList_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47CD[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStampHistoryIdsData_IsFound;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47CE[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetStampHistoryIdsData_ReturnValue;       // 0x0060(0x0010)(ReferenceParm)
	ESBConfigSaveDataResult                       CallFunc_LoadStampHistoryData_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_LoadStampHistoryIdsData) == 0x000008, "Wrong alignment on StampCategoryMenu_C_LoadStampHistoryIdsData");
static_assert(sizeof(StampCategoryMenu_C_LoadStampHistoryIdsData) == 0x000078, "Wrong size on StampCategoryMenu_C_LoadStampHistoryIdsData");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000008, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_GetPlayerId_ReturnValue) == 0x000028, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_CheckTermIdByList_OutStampIds) == 0x000038, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_CheckTermIdByList_OutStampIds' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_CheckTermIdByList_ReturnValue) == 0x000048, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_CheckTermIdByList_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_GetConfigSaveManager_IsValid) == 0x000049, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000050, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_GetStampHistoryIdsData_IsFound) == 0x000058, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_GetStampHistoryIdsData_IsFound' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_GetStampHistoryIdsData_ReturnValue) == 0x000060, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_GetStampHistoryIdsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_LoadStampHistoryIdsData, CallFunc_LoadStampHistoryData_ReturnValue) == 0x000070, "Member 'StampCategoryMenu_C_LoadStampHistoryIdsData::CallFunc_LoadStampHistoryData_ReturnValue' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.SaveStampHisoryIdsData
// 0x0028 (0x0028 - 0x0000)
struct StampCategoryMenu_C_SaveStampHisoryIdsData final
{
public:
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47CF[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveStampHistoryData_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_SaveStampHisoryIdsData) == 0x000008, "Wrong alignment on StampCategoryMenu_C_SaveStampHisoryIdsData");
static_assert(sizeof(StampCategoryMenu_C_SaveStampHisoryIdsData) == 0x000028, "Wrong size on StampCategoryMenu_C_SaveStampHisoryIdsData");
static_assert(offsetof(StampCategoryMenu_C_SaveStampHisoryIdsData, CallFunc_GetPlayerId_ReturnValue) == 0x000000, "Member 'StampCategoryMenu_C_SaveStampHisoryIdsData::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_SaveStampHisoryIdsData, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'StampCategoryMenu_C_SaveStampHisoryIdsData::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_SaveStampHisoryIdsData, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'StampCategoryMenu_C_SaveStampHisoryIdsData::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_SaveStampHisoryIdsData, CallFunc_SaveStampHistoryData_ReturnValue) == 0x000020, "Member 'StampCategoryMenu_C_SaveStampHisoryIdsData::CallFunc_SaveStampHistoryData_ReturnValue' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.CheckLimitedTimeStamp
// 0x0030 (0x0030 - 0x0000)
struct StampCategoryMenu_C_CheckLimitedTimeStamp final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLimitedTimeStamp_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StampCategoryMenu_C_CheckLimitedTimeStamp) == 0x000008, "Wrong alignment on StampCategoryMenu_C_CheckLimitedTimeStamp");
static_assert(sizeof(StampCategoryMenu_C_CheckLimitedTimeStamp) == 0x000030, "Wrong size on StampCategoryMenu_C_CheckLimitedTimeStamp");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, StampId) == 0x000000, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::StampId' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, Result) == 0x000004, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::Result' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, K2Node_DynamicCast_AsSBPlayer_State) == 0x000020, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_CheckLimitedTimeStamp, CallFunc_IsLimitedTimeStamp_ReturnValue) == 0x000029, "Member 'StampCategoryMenu_C_CheckLimitedTimeStamp::CallFunc_IsLimitedTimeStamp_ReturnValue' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.GetSelectButtonIndex
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryMenu_C_GetSelectButtonIndex final
{
public:
	int32                                         Param_SelectButtonIndex;                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_GetSelectButtonIndex) == 0x000004, "Wrong alignment on StampCategoryMenu_C_GetSelectButtonIndex");
static_assert(sizeof(StampCategoryMenu_C_GetSelectButtonIndex) == 0x000004, "Wrong size on StampCategoryMenu_C_GetSelectButtonIndex");
static_assert(offsetof(StampCategoryMenu_C_GetSelectButtonIndex, Param_SelectButtonIndex) == 0x000000, "Member 'StampCategoryMenu_C_GetSelectButtonIndex::Param_SelectButtonIndex' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.GetSelectStampCategoryMasterData
// 0x0028 (0x0028 - 0x0000)
struct StampCategoryMenu_C_GetSelectStampCategoryMasterData final
{
public:
	struct FSBStampCategoryMasterData             Output;                                            // 0x0000(0x0020)(Parm, OutParm)
	int32                                         CallFunc_GetSelectButtonIndex_SelectButtonIndex;   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryMenu_C_GetSelectStampCategoryMasterData) == 0x000008, "Wrong alignment on StampCategoryMenu_C_GetSelectStampCategoryMasterData");
static_assert(sizeof(StampCategoryMenu_C_GetSelectStampCategoryMasterData) == 0x000028, "Wrong size on StampCategoryMenu_C_GetSelectStampCategoryMasterData");
static_assert(offsetof(StampCategoryMenu_C_GetSelectStampCategoryMasterData, Output) == 0x000000, "Member 'StampCategoryMenu_C_GetSelectStampCategoryMasterData::Output' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_GetSelectStampCategoryMasterData, CallFunc_GetSelectButtonIndex_SelectButtonIndex) == 0x000020, "Member 'StampCategoryMenu_C_GetSelectStampCategoryMasterData::CallFunc_GetSelectButtonIndex_SelectButtonIndex' has a wrong offset!");

// Function StampCategoryMenu.StampCategoryMenu_C.IsValidSelectStampCategoryMasterData
// 0x000C (0x000C - 0x0000)
struct StampCategoryMenu_C_IsValidSelectStampCategoryMasterData final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectButtonIndex_SelectButtonIndex;   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StampCategoryMenu_C_IsValidSelectStampCategoryMasterData) == 0x000004, "Wrong alignment on StampCategoryMenu_C_IsValidSelectStampCategoryMasterData");
static_assert(sizeof(StampCategoryMenu_C_IsValidSelectStampCategoryMasterData) == 0x00000C, "Wrong size on StampCategoryMenu_C_IsValidSelectStampCategoryMasterData");
static_assert(offsetof(StampCategoryMenu_C_IsValidSelectStampCategoryMasterData, ReturnValue) == 0x000000, "Member 'StampCategoryMenu_C_IsValidSelectStampCategoryMasterData::ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_IsValidSelectStampCategoryMasterData, CallFunc_GetSelectButtonIndex_SelectButtonIndex) == 0x000004, "Member 'StampCategoryMenu_C_IsValidSelectStampCategoryMasterData::CallFunc_GetSelectButtonIndex_SelectButtonIndex' has a wrong offset!");
static_assert(offsetof(StampCategoryMenu_C_IsValidSelectStampCategoryMasterData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000008, "Member 'StampCategoryMenu_C_IsValidSelectStampCategoryMasterData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

}

