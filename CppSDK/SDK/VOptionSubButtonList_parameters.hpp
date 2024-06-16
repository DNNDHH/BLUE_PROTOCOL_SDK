#pragma once

 

// Package: VOptionSubButtonList

#include "Basic.hpp"


namespace SDK::Params
{

// Function VOptionSubButtonList.VOptionSubButtonList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct VOptionSubButtonList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VOptionSubButtonList_C_PreConstruct) == 0x000001, "Wrong alignment on VOptionSubButtonList_C_PreConstruct");
static_assert(sizeof(VOptionSubButtonList_C_PreConstruct) == 0x000001, "Wrong size on VOptionSubButtonList_C_PreConstruct");
static_assert(offsetof(VOptionSubButtonList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'VOptionSubButtonList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function VOptionSubButtonList.VOptionSubButtonList_C.OnClicledChildButton
// 0x0004 (0x0004 - 0x0000)
struct VOptionSubButtonList_C_OnClicledChildButton final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VOptionSubButtonList_C_OnClicledChildButton) == 0x000004, "Wrong alignment on VOptionSubButtonList_C_OnClicledChildButton");
static_assert(sizeof(VOptionSubButtonList_C_OnClicledChildButton) == 0x000004, "Wrong size on VOptionSubButtonList_C_OnClicledChildButton");
static_assert(offsetof(VOptionSubButtonList_C_OnClicledChildButton, ButtonId) == 0x000000, "Member 'VOptionSubButtonList_C_OnClicledChildButton::ButtonId' has a wrong offset!");

// Function VOptionSubButtonList.VOptionSubButtonList_C.ChangeFocusButton
// 0x0004 (0x0004 - 0x0000)
struct VOptionSubButtonList_C_ChangeFocusButton final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VOptionSubButtonList_C_ChangeFocusButton) == 0x000004, "Wrong alignment on VOptionSubButtonList_C_ChangeFocusButton");
static_assert(sizeof(VOptionSubButtonList_C_ChangeFocusButton) == 0x000004, "Wrong size on VOptionSubButtonList_C_ChangeFocusButton");
static_assert(offsetof(VOptionSubButtonList_C_ChangeFocusButton, ButtonId) == 0x000000, "Member 'VOptionSubButtonList_C_ChangeFocusButton::ButtonId' has a wrong offset!");

// Function VOptionSubButtonList.VOptionSubButtonList_C.ExecuteUbergraph_VOptionSubButtonList
// 0x00B0 (0x00B0 - 0x0000)
struct VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D53[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D54[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D55[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D56[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionSubButton_C*                     CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D57[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D58[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D59[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonId_1;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionSubButton_C*                     CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList) == 0x000008, "Wrong alignment on VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList");
static_assert(sizeof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList) == 0x0000B0, "Wrong size on VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, EntryPoint) == 0x000000, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::EntryPoint' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000021, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000022, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000023, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000024, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_BooleanOR_ReturnValue) == 0x000025, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_BooleanOR_ReturnValue_1) == 0x000026, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_BooleanOR_ReturnValue_2) == 0x00002C, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_BooleanOR_ReturnValue_3) == 0x000034, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Create_ReturnValue) == 0x000040, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, K2Node_Event_IsDesignTime) == 0x000048, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Array_Get_Item) == 0x00004C, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_AddChild_ReturnValue) == 0x000088, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, K2Node_CustomEvent_ButtonId_1) == 0x000090, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::K2Node_CustomEvent_ButtonId_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, K2Node_CustomEvent_ButtonId) == 0x000094, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Array_Length_ReturnValue_1) == 0x00009C, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A8, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0000A9, "Member 'VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");

// Function VOptionSubButtonList.VOptionSubButtonList_C.OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct VOptionSubButtonList_C_OnClicked__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VOptionSubButtonList_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on VOptionSubButtonList_C_OnClicked__DelegateSignature");
static_assert(sizeof(VOptionSubButtonList_C_OnClicked__DelegateSignature) == 0x000004, "Wrong size on VOptionSubButtonList_C_OnClicked__DelegateSignature");
static_assert(offsetof(VOptionSubButtonList_C_OnClicked__DelegateSignature, ButtonId) == 0x000000, "Member 'VOptionSubButtonList_C_OnClicked__DelegateSignature::ButtonId' has a wrong offset!");

}

