#pragma once

 

// Package: RankingMenu_CategoryButtonList

#include "Basic.hpp"


namespace SDK::Params
{

// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature");
static_assert(sizeof(RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ExecuteUbergraph_RankingMenu_CategoryButtonList
// 0x00B8 (0x00B8 - 0x0000)
struct RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9096[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URankingMenu_CategoryButton_C*          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9097[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9098[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9099[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_909A[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URankingMenu_CategoryButton_C*          CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingMenu_CategoryButton_C*          CallFunc_Array_Get_Item_2;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_909B[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class URankingMenu_CategoryButton_C*          CallFunc_Array_Get_Item_3;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingMenu_CategoryButton_C*          CallFunc_Array_Get_Item_4;                         // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList) == 0x000008, "Wrong alignment on RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList");
static_assert(sizeof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList) == 0x0000B8, "Wrong size on RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, EntryPoint) == 0x000000, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::EntryPoint' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Get_Item) == 0x000030, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, K2Node_Event_IsDesignTime) == 0x000070, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, K2Node_CustomEvent_ButtonId) == 0x000078, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Get_Item_2) == 0x000088, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000094, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Get_Item_3) == 0x000098, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, CallFunc_Array_Get_Item_4) == 0x0000A0, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ChangeFocusButton
// 0x0004 (0x0004 - 0x0000)
struct RankingMenu_CategoryButtonList_C_ChangeFocusButton final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_CategoryButtonList_C_ChangeFocusButton) == 0x000004, "Wrong alignment on RankingMenu_CategoryButtonList_C_ChangeFocusButton");
static_assert(sizeof(RankingMenu_CategoryButtonList_C_ChangeFocusButton) == 0x000004, "Wrong size on RankingMenu_CategoryButtonList_C_ChangeFocusButton");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_ChangeFocusButton, ButtonId) == 0x000000, "Member 'RankingMenu_CategoryButtonList_C_ChangeFocusButton::ButtonId' has a wrong offset!");

// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RankingMenu_CategoryButtonList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_CategoryButtonList_C_PreConstruct) == 0x000001, "Wrong alignment on RankingMenu_CategoryButtonList_C_PreConstruct");
static_assert(sizeof(RankingMenu_CategoryButtonList_C_PreConstruct) == 0x000001, "Wrong size on RankingMenu_CategoryButtonList_C_PreConstruct");
static_assert(offsetof(RankingMenu_CategoryButtonList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RankingMenu_CategoryButtonList_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

