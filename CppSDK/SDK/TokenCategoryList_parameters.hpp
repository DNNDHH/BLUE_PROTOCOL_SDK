#pragma once

 

// Package: TokenCategoryList

#include "Basic.hpp"


namespace SDK::Params
{

// Function TokenCategoryList.TokenCategoryList_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct TokenCategoryList_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenCategoryList_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on TokenCategoryList_C_OnClick__DelegateSignature");
static_assert(sizeof(TokenCategoryList_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on TokenCategoryList_C_OnClick__DelegateSignature");
static_assert(offsetof(TokenCategoryList_C_OnClick__DelegateSignature, Param_Index) == 0x000000, "Member 'TokenCategoryList_C_OnClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function TokenCategoryList.TokenCategoryList_C.ExecuteUbergraph_TokenCategoryList
// 0x00E0 (0x00E0 - 0x0000)
struct TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57F8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	class UTokenCategoryButton_C*                 CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTokenCategoryButton_C*                 CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57F9[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenCategoryButton_C*                 CallFunc_Array_Get_Item_2;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTokenCategoryButton_C*                 CallFunc_Array_Get_Item_3;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_57FA[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenCategoryButton_C*                 CallFunc_Create_ReturnValue_1;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57FB[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InputActive;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57FC[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList) == 0x000008, "Wrong alignment on TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList");
static_assert(sizeof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList) == 0x0000E0, "Wrong size on TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, EntryPoint) == 0x000000, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::EntryPoint' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Get_Item) == 0x000010, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_LastIndex_ReturnValue) == 0x000048, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000050, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Create_ReturnValue) == 0x000078, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, K2Node_CustomEvent_ListIndex) == 0x000088, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Get_Item_2) == 0x000090, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Get_Item_3) == 0x000098, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Add_ReturnValue) == 0x0000A0, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, K2Node_CreateDelegate_OutputDelegate) == 0x0000A4, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Create_ReturnValue_1) == 0x0000B8, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_Array_Add_ReturnValue_1) == 0x0000C0, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_AddChild_ReturnValue) == 0x0000C8, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, K2Node_CustomEvent_InputActive) == 0x0000D0, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::K2Node_CustomEvent_InputActive' has a wrong offset!");
static_assert(offsetof(TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList, CallFunc_AddChild_ReturnValue_1) == 0x0000D8, "Member 'TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function TokenCategoryList.TokenCategoryList_C.SeInputActive
// 0x0001 (0x0001 - 0x0000)
struct TokenCategoryList_C_SeInputActive final
{
public:
	bool                                          Param_InputActive;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenCategoryList_C_SeInputActive) == 0x000001, "Wrong alignment on TokenCategoryList_C_SeInputActive");
static_assert(sizeof(TokenCategoryList_C_SeInputActive) == 0x000001, "Wrong size on TokenCategoryList_C_SeInputActive");
static_assert(offsetof(TokenCategoryList_C_SeInputActive, Param_InputActive) == 0x000000, "Member 'TokenCategoryList_C_SeInputActive::Param_InputActive' has a wrong offset!");

// Function TokenCategoryList.TokenCategoryList_C.OnButtonClick
// 0x0004 (0x0004 - 0x0000)
struct TokenCategoryList_C_OnButtonClick final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenCategoryList_C_OnButtonClick) == 0x000004, "Wrong alignment on TokenCategoryList_C_OnButtonClick");
static_assert(sizeof(TokenCategoryList_C_OnButtonClick) == 0x000004, "Wrong size on TokenCategoryList_C_OnButtonClick");
static_assert(offsetof(TokenCategoryList_C_OnButtonClick, ListIndex) == 0x000000, "Member 'TokenCategoryList_C_OnButtonClick::ListIndex' has a wrong offset!");

}

