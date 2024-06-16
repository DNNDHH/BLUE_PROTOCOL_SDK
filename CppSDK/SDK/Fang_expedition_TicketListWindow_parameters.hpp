#pragma once

 

// Package: Fang_expedition_TicketListWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.OnClose__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature final
{
public:
	TArray<int32>                                 SelectTokenIds;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature, SelectTokenIds) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature::SelectTokenIds' has a wrong offset!");

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.ExecuteUbergraph_Fang_expedition_TicketListWindow
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow) == 0x000008, "Wrong alignment on Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow) == 0x000020, "Wrong size on Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, EntryPoint) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, CallFunc_Array_Get_Item) == 0x000010, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_OnCheckStateChange
// 0x00F0 (0x00F0 - 0x0000)
struct Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange final
{
public:
	bool                                          State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FBD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 TargetIndexList;                                   // 0x0008(0x0010)(Edit, BlueprintVisible)
	class UFang_expedition_TicketItem_C*          WorkWidget;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FBE[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FBF[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC0[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC1[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_2;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_3;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FC2[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_4;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC3[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_5;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelectState_IsSelected;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC4[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectState_TokenId;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC5[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_6;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_7;                         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC6[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_8;                         // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FC7[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_9;                         // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FC8[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_10;                        // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange) == 0x000008, "Wrong alignment on Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange) == 0x0000F0, "Wrong size on Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, State) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::State' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, ID) == 0x000004, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::ID' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, TargetIndexList) == 0x000008, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::TargetIndexList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, WorkWidget) == 0x000018, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::WorkWidget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, FindIndex) == 0x000020, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::FindIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Array_Index_Variable) == 0x000024, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_bool_Variable) == 0x00003C, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Loop_Counter_Variable_2) == 0x000040, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Array_Index_Variable_2) == 0x00004C, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item) == 0x000058, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000069, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_2) == 0x000070, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_3) == 0x000078, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_4) == 0x000080, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, K2Node_SwitchInteger_CmpSuccess) == 0x00008D, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Find_ReturnValue) == 0x000090, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, Temp_int_Variable) == 0x000094, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_5) == 0x000098, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_GetSelectState_IsSelected) == 0x0000A0, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_GetSelectState_IsSelected' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_GetSelectState_TokenId) == 0x0000A4, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_GetSelectState_TokenId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000A8, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_BooleanAND_ReturnValue) == 0x0000AD, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_6) == 0x0000B0, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Length_ReturnValue_1) == 0x0000B4, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_7) == 0x0000B8, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C0, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_8) == 0x0000C8, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, K2Node_SwitchInteger_CmpSuccess_1) == 0x0000D0, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_9) == 0x0000D4, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_9' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Find_ReturnValue_1) == 0x0000D8, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Get_Item_10) == 0x0000E0, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Get_Item_10' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Array_Length_ReturnValue_2) == 0x0000E8, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000EC, "Member 'Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Initialize
// 0x0040 (0x0040 - 0x0000)
struct Fang_expedition_TicketListWindow_C_Initialize final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool CheckState, int32 ID)>    K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5FC9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FCA[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFang_expedition_TicketItem_C*>  K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_Initialize) == 0x000008, "Wrong alignment on Fang_expedition_TicketListWindow_C_Initialize");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_Initialize) == 0x000040, "Wrong size on Fang_expedition_TicketListWindow_C_Initialize");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fang_expedition_TicketListWindow_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_TicketListWindow_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'Fang_expedition_TicketListWindow_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, CallFunc_Array_Get_Item) == 0x000020, "Member 'Fang_expedition_TicketListWindow_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'Fang_expedition_TicketListWindow_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_TicketListWindow_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_Initialize, K2Node_MakeArray_Array) == 0x000030, "Member 'Fang_expedition_TicketListWindow_C_Initialize::K2Node_MakeArray_Array' has a wrong offset!");

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_EnableButtonWork
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_TicketListWindow_C_CB_EnableButtonWork final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FCB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelectState_IsSelected;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FCC[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectState_TokenId;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork) == 0x000008, "Wrong alignment on Fang_expedition_TicketListWindow_C_CB_EnableButtonWork");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork) == 0x000020, "Wrong size on Fang_expedition_TicketListWindow_C_CB_EnableButtonWork");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, Temp_int_Variable) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, CallFunc_Array_Get_Item) == 0x000008, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, CallFunc_GetSelectState_IsSelected) == 0x000011, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::CallFunc_GetSelectState_IsSelected' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, CallFunc_GetSelectState_TokenId) == 0x000014, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::CallFunc_GetSelectState_TokenId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CB_EnableButtonWork, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_TicketListWindow_C_CB_EnableButtonWork::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.SetTokenSelect
// 0x0158 (0x0158 - 0x0000)
struct Fang_expedition_TicketListWindow_C_SetTokenSelect final
{
public:
	TArray<int32>                                 SelectTokenId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0010(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          SelectState;                                       // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FCD[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TargetIndexList;                                   // 0x00C0(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FCE[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FCF[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD0[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_1;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD1[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_2;                         // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD2[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FD3[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_3;                         // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD4[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_TicketItem_C*          CallFunc_Array_Get_Item_4;                         // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FD5[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckTicketNum_OutIsEnable;               // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_SetTokenSelect) == 0x000008, "Wrong alignment on Fang_expedition_TicketListWindow_C_SetTokenSelect");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_SetTokenSelect) == 0x000158, "Wrong size on Fang_expedition_TicketListWindow_C_SetTokenSelect");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, SelectTokenId) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::SelectTokenId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, AreaData) == 0x000010, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, SelectState) == 0x0000B8, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::SelectState' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, TargetIndexList) == 0x0000C0, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::TargetIndexList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_int_Array_Index_Variable) == 0x0000D0, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_int_Loop_Counter_Variable) == 0x0000D4, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_int_Array_Index_Variable_1) == 0x0000DC, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_byte_Variable) == 0x0000E0, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_int_Variable) == 0x0000E4, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, K2Node_SwitchInteger_CmpSuccess) == 0x0000E8, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E9, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000EC, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F0, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000F1, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_byte_Variable_1) == 0x0000F2, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_BooleanOR_ReturnValue) == 0x0000F3, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Not_PreBool_ReturnValue) == 0x0000F4, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_int_Loop_Counter_Variable_1) == 0x0000F8, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Get_Item) == 0x0000FC, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Add_IntInt_ReturnValue_2) == 0x000108, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Length_ReturnValue) == 0x00010C, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Get_Item_2) == 0x000118, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Length_ReturnValue_1) == 0x000120, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Less_IntInt_ReturnValue_1) == 0x000124, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Length_ReturnValue_2) == 0x000128, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Get_Item_3) == 0x000130, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000138, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, Temp_bool_Variable) == 0x000139, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Get_Item_4) == 0x000140, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, K2Node_Select_Default) == 0x000148, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_Array_Find_ReturnValue) == 0x00014C, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_CheckTicketNum_OutIsEnable) == 0x000150, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_CheckTicketNum_OutIsEnable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000151, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_SetTokenSelect, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000152, "Member 'Fang_expedition_TicketListWindow_C_SetTokenSelect::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CheckTicketNum
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_TicketListWindow_C_CheckTicketNum final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsEnable;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketListWindow_C_CheckTicketNum) == 0x000004, "Wrong alignment on Fang_expedition_TicketListWindow_C_CheckTicketNum");
static_assert(sizeof(Fang_expedition_TicketListWindow_C_CheckTicketNum) == 0x000010, "Wrong size on Fang_expedition_TicketListWindow_C_CheckTicketNum");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CheckTicketNum, InId) == 0x000000, "Member 'Fang_expedition_TicketListWindow_C_CheckTicketNum::InId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CheckTicketNum, OutIsEnable) == 0x000004, "Member 'Fang_expedition_TicketListWindow_C_CheckTicketNum::OutIsEnable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CheckTicketNum, CallFunc_GetTokenAmount_ReturnValue) == 0x000008, "Member 'Fang_expedition_TicketListWindow_C_CheckTicketNum::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketListWindow_C_CheckTicketNum, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_TicketListWindow_C_CheckTicketNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

