#pragma once

 

// Package: ArmorList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ArmorList.ArmorList_C.ExecuteUbergraph_ArmorList
// 0x0260 (0x0260 - 0x0000)
struct ArmorList_C_ExecuteUbergraph_ArmorList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_InOwnItemInfo;                  // 0x0010(0x0010)(ConstParm, ReferenceParm)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0020(0x0118)()
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5392[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5393[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0158(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5394[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_DynamicCast_AsText;                         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5395[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5396[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item_1;                         // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5397[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5398[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C0(0x0018)()
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x01D8(0x0088)(HasGetValueTypeHash)
};
static_assert(alignof(ArmorList_C_ExecuteUbergraph_ArmorList) == 0x000008, "Wrong alignment on ArmorList_C_ExecuteUbergraph_ArmorList");
static_assert(sizeof(ArmorList_C_ExecuteUbergraph_ArmorList) == 0x000260, "Wrong size on ArmorList_C_ExecuteUbergraph_ArmorList");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, EntryPoint) == 0x000000, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, Temp_int_Variable) == 0x000004, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, K2Node_CustomEvent_InOwnItemInfo) == 0x000010, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::K2Node_CustomEvent_InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Array_Get_Item) == 0x000020, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_GetChildrenCount_ReturnValue) == 0x000138, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00013C, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_GetItemName_OutName) == 0x000140, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_GetItemName_ReturnValue) == 0x000150, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Conv_StringToText_ReturnValue) == 0x000158, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Array_Length_ReturnValue) == 0x000170, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_GetChildAt_ReturnValue) == 0x000178, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, K2Node_DynamicCast_AsText) == 0x000180, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::K2Node_DynamicCast_AsText' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Array_Add_ReturnValue) == 0x00018C, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, Temp_int_Loop_Counter_Variable) == 0x000190, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Array_Get_Item_1) == 0x000198, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001A4, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, K2Node_Event_IsDesignTime) == 0x0001A8, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001B0, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C0, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ArmorList_C_ExecuteUbergraph_ArmorList, K2Node_MakeStruct_SlateFontInfo) == 0x0001D8, "Member 'ArmorList_C_ExecuteUbergraph_ArmorList::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function ArmorList.ArmorList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ArmorList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ArmorList_C_PreConstruct) == 0x000001, "Wrong alignment on ArmorList_C_PreConstruct");
static_assert(sizeof(ArmorList_C_PreConstruct) == 0x000001, "Wrong size on ArmorList_C_PreConstruct");
static_assert(offsetof(ArmorList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ArmorList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ArmorList.ArmorList_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct ArmorList_C_SetData final
{
public:
	TArray<struct FOwnItemInfo>                   InOwnItemInfo;                                     // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ArmorList_C_SetData) == 0x000008, "Wrong alignment on ArmorList_C_SetData");
static_assert(sizeof(ArmorList_C_SetData) == 0x000010, "Wrong size on ArmorList_C_SetData");
static_assert(offsetof(ArmorList_C_SetData, InOwnItemInfo) == 0x000000, "Member 'ArmorList_C_SetData::InOwnItemInfo' has a wrong offset!");

}

