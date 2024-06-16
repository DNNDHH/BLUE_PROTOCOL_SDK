#pragma once

 

// Package: UMG_LoginBonusList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.ListItemClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_LoginBonusList_C_ListItemClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusList_C_ListItemClick__DelegateSignature) == 0x000004, "Wrong alignment on UMG_LoginBonusList_C_ListItemClick__DelegateSignature");
static_assert(sizeof(UMG_LoginBonusList_C_ListItemClick__DelegateSignature) == 0x000004, "Wrong size on UMG_LoginBonusList_C_ListItemClick__DelegateSignature");
static_assert(offsetof(UMG_LoginBonusList_C_ListItemClick__DelegateSignature, Param_Index) == 0x000000, "Member 'UMG_LoginBonusList_C_ListItemClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.ExecuteUbergraph_UMG_LoginBonusList
// 0x0090 (0x0090 - 0x0000)
struct UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D84[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D85[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D86[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          K2Node_CustomEvent_SelectedItem;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D87[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index, class UUMG_LoginBonusListLineItem_C* SelectedItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D88[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList) == 0x000008, "Wrong alignment on UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList");
static_assert(sizeof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList) == 0x000090, "Wrong size on UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, EntryPoint) == 0x000000, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Multiply_IntInt_ReturnValue) == 0x000018, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Add_ReturnValue_1) == 0x00002C, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Add_ReturnValue_2) == 0x000030, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Add_ReturnValue_3) == 0x000034, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Add_ReturnValue_4) == 0x000038, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Add_ReturnValue_5) == 0x00003C, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Get_Item) == 0x000040, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, K2Node_CustomEvent_Enable) == 0x00005D, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, K2Node_CustomEvent_Index) == 0x000060, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, K2Node_CustomEvent_SelectedItem) == 0x000068, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, Temp_int_Loop_Counter_Variable_1) == 0x000074, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000088, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListItemClick
// 0x0010 (0x0010 - 0x0000)
struct UMG_LoginBonusList_C_OnListItemClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D89[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          SelectedItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusList_C_OnListItemClick) == 0x000008, "Wrong alignment on UMG_LoginBonusList_C_OnListItemClick");
static_assert(sizeof(UMG_LoginBonusList_C_OnListItemClick) == 0x000010, "Wrong size on UMG_LoginBonusList_C_OnListItemClick");
static_assert(offsetof(UMG_LoginBonusList_C_OnListItemClick, Param_Index) == 0x000000, "Member 'UMG_LoginBonusList_C_OnListItemClick::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_OnListItemClick, SelectedItem) == 0x000008, "Member 'UMG_LoginBonusList_C_OnListItemClick::SelectedItem' has a wrong offset!");

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnImageLoadComplete
// 0x0001 (0x0001 - 0x0000)
struct UMG_LoginBonusList_C_OnImageLoadComplete final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusList_C_OnImageLoadComplete) == 0x000001, "Wrong alignment on UMG_LoginBonusList_C_OnImageLoadComplete");
static_assert(sizeof(UMG_LoginBonusList_C_OnImageLoadComplete) == 0x000001, "Wrong size on UMG_LoginBonusList_C_OnImageLoadComplete");
static_assert(offsetof(UMG_LoginBonusList_C_OnImageLoadComplete, Enable) == 0x000000, "Member 'UMG_LoginBonusList_C_OnImageLoadComplete::Enable' has a wrong offset!");

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetData
// 0x01A8 (0x01A8 - 0x0000)
struct UMG_LoginBonusList_C_SetData final
{
public:
	struct FSBLoginBonusWindowData                DataList;                                          // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          MouseClick;                                        // 0x00A0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D8A[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinusCount;                                        // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              WorkWidget;                                        // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDay;                                            // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LineIndex;                                         // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D8B[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D8C[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D8D[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D8E[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_3;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D8F[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D90[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D91[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D92[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item;                           // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D93[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item_1;                         // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item_2;                         // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D94[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item_3;                         // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D95[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item_4;                         // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D96[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue_3;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D97[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D98[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item_5;                         // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusList_C_SetData) == 0x000008, "Wrong alignment on UMG_LoginBonusList_C_SetData");
static_assert(sizeof(UMG_LoginBonusList_C_SetData) == 0x0001A8, "Wrong size on UMG_LoginBonusList_C_SetData");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, DataList) == 0x000000, "Member 'UMG_LoginBonusList_C_SetData::DataList' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, MouseClick) == 0x0000A0, "Member 'UMG_LoginBonusList_C_SetData::MouseClick' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, MinusCount) == 0x0000A4, "Member 'UMG_LoginBonusList_C_SetData::MinusCount' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, WorkWidget) == 0x0000A8, "Member 'UMG_LoginBonusList_C_SetData::WorkWidget' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, LoopEnd) == 0x0000B0, "Member 'UMG_LoginBonusList_C_SetData::LoopEnd' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, MaxDay) == 0x0000B4, "Member 'UMG_LoginBonusList_C_SetData::MaxDay' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, LineIndex) == 0x0000B8, "Member 'UMG_LoginBonusList_C_SetData::LineIndex' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_int_Variable) == 0x0000BC, "Member 'UMG_LoginBonusList_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_bool_Variable) == 0x0000C8, "Member 'UMG_LoginBonusList_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_int_Loop_Counter_Variable) == 0x0000CC, "Member 'UMG_LoginBonusList_C_SetData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_int_Variable_1) == 0x0000D0, "Member 'UMG_LoginBonusList_C_SetData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000D8, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_int_Variable_2) == 0x0000DC, "Member 'UMG_LoginBonusList_C_SetData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_int_Variable_3) == 0x0000E0, "Member 'UMG_LoginBonusList_C_SetData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Percent_IntInt_ReturnValue) == 0x0000E8, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Divide_IntInt_ReturnValue) == 0x0000EC, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000F0, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F4, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000F8, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Percent_IntInt_ReturnValue_2) == 0x0000FC, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000100, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Percent_IntInt_ReturnValue_3) == 0x000104, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Percent_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000108, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000109, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_4) == 0x00010C, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_SelectInt_ReturnValue) == 0x000110, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Length_ReturnValue) == 0x000114, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Less_IntInt_ReturnValue_1) == 0x000118, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Subtract_IntInt_ReturnValue) == 0x00011C, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000120, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Less_IntInt_ReturnValue_2) == 0x000128, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000129, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00012C, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Divide_IntInt_ReturnValue_2) == 0x000130, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000134, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Get_Item) == 0x000138, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_int_Array_Index_Variable) == 0x000140, "Member 'UMG_LoginBonusList_C_SetData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Get_Item_1) == 0x000148, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Get_Item_2) == 0x000150, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_5) == 0x000158, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Get_Item_3) == 0x000160, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_6) == 0x000168, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Get_Item_4) == 0x000170, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Add_IntInt_ReturnValue_7) == 0x000178, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_byte_Variable) == 0x00017C, "Member 'UMG_LoginBonusList_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Divide_IntInt_ReturnValue_3) == 0x000180, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Divide_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000184, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, Temp_byte_Variable_1) == 0x000188, "Member 'UMG_LoginBonusList_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, K2Node_Select_Default) == 0x000189, "Member 'UMG_LoginBonusList_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x00018C, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Less_IntInt_ReturnValue_3) == 0x000190, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Get_Item_5) == 0x000198, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_SetData, CallFunc_Array_Length_ReturnValue_1) == 0x0001A0, "Member 'UMG_LoginBonusList_C_SetData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.PlayStampAnimation
// 0x0028 (0x0028 - 0x0000)
struct UMG_LoginBonusList_C_PlayStampAnimation final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Play;                                              // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D99[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D9A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PlayStumpAnimation_IsPlay;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusList_C_PlayStampAnimation) == 0x000008, "Wrong alignment on UMG_LoginBonusList_C_PlayStampAnimation");
static_assert(sizeof(UMG_LoginBonusList_C_PlayStampAnimation) == 0x000028, "Wrong size on UMG_LoginBonusList_C_PlayStampAnimation");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, Param_Index) == 0x000000, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, Play) == 0x000004, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::Play' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, CallFunc_Percent_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, CallFunc_Divide_IntInt_ReturnValue) == 0x000010, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, CallFunc_Array_Get_Item) == 0x000018, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000020, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_PlayStampAnimation, CallFunc_PlayStumpAnimation_IsPlay) == 0x000021, "Member 'UMG_LoginBonusList_C_PlayStampAnimation::CallFunc_PlayStumpAnimation_IsPlay' has a wrong offset!");

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnCloseAnimationFinished
// 0x0020 (0x0020 - 0x0000)
struct UMG_LoginBonusList_C_OnCloseAnimationFinished final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusList_C_OnCloseAnimationFinished) == 0x000008, "Wrong alignment on UMG_LoginBonusList_C_OnCloseAnimationFinished");
static_assert(sizeof(UMG_LoginBonusList_C_OnCloseAnimationFinished) == 0x000020, "Wrong size on UMG_LoginBonusList_C_OnCloseAnimationFinished");
static_assert(offsetof(UMG_LoginBonusList_C_OnCloseAnimationFinished, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UMG_LoginBonusList_C_OnCloseAnimationFinished::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_OnCloseAnimationFinished, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_LoginBonusList_C_OnCloseAnimationFinished::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_OnCloseAnimationFinished, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_LoginBonusList_C_OnCloseAnimationFinished::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_OnCloseAnimationFinished, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'UMG_LoginBonusList_C_OnCloseAnimationFinished::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_OnCloseAnimationFinished, CallFunc_Array_Get_Item) == 0x000010, "Member 'UMG_LoginBonusList_C_OnCloseAnimationFinished::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusList_C_OnCloseAnimationFinished, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'UMG_LoginBonusList_C_OnCloseAnimationFinished::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

