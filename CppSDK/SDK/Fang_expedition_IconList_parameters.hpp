#pragma once

 

// Package: Fang_expedition_IconList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.OnFangSelectChange__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature final
{
public:
	TArray<class FString>                         UniqueIds;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature");
static_assert(sizeof(Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature");
static_assert(offsetof(Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature, UniqueIds) == 0x000000, "Member 'Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature::UniqueIds' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.ExecuteUbergraph_Fang_expedition_IconList
// 0x0024 (0x0024 - 0x0000)
struct Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBItemSortType SortType)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FFilterGroup>& Filters)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList) == 0x000004, "Wrong alignment on Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList");
static_assert(sizeof(Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList) == 0x000024, "Wrong size on Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList");
static_assert(offsetof(Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList, EntryPoint) == 0x000000, "Member 'Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList
// 0x0390 (0x0390 - 0x0000)
struct Fang_expedition_IconList_C_InitFangList final
{
public:
	int32                                         MaxFangCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Reset;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ECB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         IconWidget;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Item;                                              // 0x0010(0x0118)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ECC[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   ItemList;                                          // 0x0130(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0154(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ECD[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0180(0x0118)(ConstParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02B8(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ECE[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02D8(0x0018)()
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x02FC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5ECF[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0310(0x0060)(HasGetValueTypeHash)
	class UItemIconBtn_C*                         CallFunc_Create_ReturnValue;                       // 0x0370(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED0[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   CallFunc_GetExpreditonFangStorage_Storage;         // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_IconList_C_InitFangList) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_InitFangList");
static_assert(sizeof(Fang_expedition_IconList_C_InitFangList) == 0x000390, "Wrong size on Fang_expedition_IconList_C_InitFangList");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, MaxFangCount) == 0x000000, "Member 'Fang_expedition_IconList_C_InitFangList::MaxFangCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, Reset) == 0x000004, "Member 'Fang_expedition_IconList_C_InitFangList::Reset' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, IconWidget) == 0x000008, "Member 'Fang_expedition_IconList_C_InitFangList::IconWidget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, Item) == 0x000010, "Member 'Fang_expedition_IconList_C_InitFangList::Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, LoopEnd) == 0x000128, "Member 'Fang_expedition_IconList_C_InitFangList::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, ItemList) == 0x000130, "Member 'Fang_expedition_IconList_C_InitFangList::ItemList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, Temp_int_Variable) == 0x000140, "Member 'Fang_expedition_IconList_C_InitFangList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Percent_IntInt_ReturnValue) == 0x000144, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Divide_IntInt_ReturnValue) == 0x000148, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00014C, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000150, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_MakeVector2D_ReturnValue) == 0x000154, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Add_IntInt_ReturnValue) == 0x00015C, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000160, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Array_Find_ReturnValue) == 0x000174, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000178, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_IsValid_ReturnValue) == 0x000179, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000180, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Conv_IntToString_ReturnValue) == 0x000298, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Concat_StrStr_ReturnValue) == 0x0002A8, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Conv_StringToText_ReturnValue) == 0x0002B8, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_MakeLiteralInt_ReturnValue) == 0x0002D0, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Conv_IntToText_ReturnValue) == 0x0002D8, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_AddChildToGrid_ReturnValue) == 0x0002F0, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Array_Add_ReturnValue_1) == 0x0002F8, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, K2Node_CreateDelegate_OutputDelegate) == 0x0002FC, "Member 'Fang_expedition_IconList_C_InitFangList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, K2Node_MakeStruct_InventoryItemData) == 0x000310, "Member 'Fang_expedition_IconList_C_InitFangList::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Create_ReturnValue) == 0x000370, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000378, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_GetExpreditonFangStorage_Storage) == 0x000380, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_GetExpreditonFangStorage_Storage' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000388, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00038C, "Member 'Fang_expedition_IconList_C_InitFangList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_OnIconSelect
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_IconList_C_CB_OnIconSelect final
{
public:
	class UItemIconBtn_C*                         SelectIconBtn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveSelect_Active;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED1[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_IconList_C_CB_OnIconSelect) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_CB_OnIconSelect");
static_assert(sizeof(Fang_expedition_IconList_C_CB_OnIconSelect) == 0x000020, "Wrong size on Fang_expedition_IconList_C_CB_OnIconSelect");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, SelectIconBtn) == 0x000000, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::SelectIconBtn' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, FindIndex) == 0x000008, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::FindIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_IsActiveSelect_Active) == 0x00000D, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_IsActiveSelect_Active' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_Array_RemoveItem_ReturnValue) == 0x00000E, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_Less_IntInt_ReturnValue_1) == 0x000018, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CB_OnIconSelect, CallFunc_Array_Find_ReturnValue) == 0x00001C, "Member 'Fang_expedition_IconList_C_CB_OnIconSelect::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.ClearIconData
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_IconList_C_ClearIconData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ED3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_IconList_C_ClearIconData) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_ClearIconData");
static_assert(sizeof(Fang_expedition_IconList_C_ClearIconData) == 0x000020, "Wrong size on Fang_expedition_IconList_C_ClearIconData");
static_assert(offsetof(Fang_expedition_IconList_C_ClearIconData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fang_expedition_IconList_C_ClearIconData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ClearIconData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fang_expedition_IconList_C_ClearIconData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ClearIconData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_IconList_C_ClearIconData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ClearIconData, CallFunc_Array_Get_Item) == 0x000010, "Member 'Fang_expedition_IconList_C_ClearIconData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ClearIconData, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Fang_expedition_IconList_C_ClearIconData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_ClearIconData, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_IconList_C_ClearIconData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.UpdateIconVisibleStatus
// 0x0158 (0x0158 - 0x0000)
struct Fang_expedition_IconList_C_UpdateIconVisibleStatus final
{
public:
	class UItemIconBtn_C*                         Icon;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CountMax;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0010(0x0118)(ConstParm)
	bool                                          CallFunc_CheckExpreditonUsed_IsUsed;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED5[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED6[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_IconList_C_UpdateIconVisibleStatus) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_UpdateIconVisibleStatus");
static_assert(sizeof(Fang_expedition_IconList_C_UpdateIconVisibleStatus) == 0x000158, "Wrong size on Fang_expedition_IconList_C_UpdateIconVisibleStatus");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, Icon) == 0x000000, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CountMax) == 0x000008, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CountMax' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000010, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_CheckExpreditonUsed_IsUsed) == 0x000128, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_CheckExpreditonUsed_IsUsed' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, Temp_int_Loop_Counter_Variable) == 0x00012C, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_Array_Find_ReturnValue) == 0x000134, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000138, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_Array_Get_Item) == 0x000140, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_Array_Length_ReturnValue_1) == 0x00014C, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_UpdateIconVisibleStatus, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000151, "Member 'Fang_expedition_IconList_C_UpdateIconVisibleStatus::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CallFangSelectChange
// 0x0160 (0x0160 - 0x0000)
struct Fang_expedition_IconList_C_CallFangSelectChange final
{
public:
	int32                                         FindIndex;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED7[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class UItemIconBtn_C*                         CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0038(0x0118)(ConstParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_IconList_C_CallFangSelectChange) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_CallFangSelectChange");
static_assert(sizeof(Fang_expedition_IconList_C_CallFangSelectChange) == 0x000160, "Wrong size on Fang_expedition_IconList_C_CallFangSelectChange");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, FindIndex) == 0x000000, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::FindIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, LoopEnd) == 0x000004, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, Temp_int_Variable) == 0x000008, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Array_Get_Item) == 0x000030, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000038, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Array_Find_ReturnValue) == 0x000150, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Array_Add_ReturnValue) == 0x000154, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_CallFangSelectChange, CallFunc_Array_LastIndex_ReturnValue) == 0x000158, "Member 'Fang_expedition_IconList_C_CallFangSelectChange::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_FilterChange
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_IconList_C_CB_FilterChange final
{
public:
	TArray<struct FFilterGroup>                   Filter;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_IconList_C_CB_FilterChange) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_CB_FilterChange");
static_assert(sizeof(Fang_expedition_IconList_C_CB_FilterChange) == 0x000010, "Wrong size on Fang_expedition_IconList_C_CB_FilterChange");
static_assert(offsetof(Fang_expedition_IconList_C_CB_FilterChange, Filter) == 0x000000, "Member 'Fang_expedition_IconList_C_CB_FilterChange::Filter' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_SortChange
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_IconList_C_CB_SortChange final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_IconList_C_CB_SortChange) == 0x000001, "Wrong alignment on Fang_expedition_IconList_C_CB_SortChange");
static_assert(sizeof(Fang_expedition_IconList_C_CB_SortChange) == 0x000001, "Wrong size on Fang_expedition_IconList_C_CB_SortChange");
static_assert(offsetof(Fang_expedition_IconList_C_CB_SortChange, Param_SortType) == 0x000000, "Member 'Fang_expedition_IconList_C_CB_SortChange::Param_SortType' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList_UniqueId
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_IconList_C_InitFangList_UniqueId final
{
public:
	int32                                         MaxFangCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ED8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_IconList_C_InitFangList_UniqueId) == 0x000008, "Wrong alignment on Fang_expedition_IconList_C_InitFangList_UniqueId");
static_assert(sizeof(Fang_expedition_IconList_C_InitFangList_UniqueId) == 0x000020, "Wrong size on Fang_expedition_IconList_C_InitFangList_UniqueId");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList_UniqueId, MaxFangCount) == 0x000000, "Member 'Fang_expedition_IconList_C_InitFangList_UniqueId::MaxFangCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList_UniqueId, UniqueId) == 0x000008, "Member 'Fang_expedition_IconList_C_InitFangList_UniqueId::UniqueId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_InitFangList_UniqueId, CallFunc_GetSortType_OutSortType) == 0x000018, "Member 'Fang_expedition_IconList_C_InitFangList_UniqueId::CallFunc_GetSortType_OutSortType' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.SetIconSelectLog
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_IconList_C_SetIconSelectLog final
{
public:
	bool                                          On;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_IconList_C_SetIconSelectLog) == 0x000004, "Wrong alignment on Fang_expedition_IconList_C_SetIconSelectLog");
static_assert(sizeof(Fang_expedition_IconList_C_SetIconSelectLog) == 0x000008, "Wrong size on Fang_expedition_IconList_C_SetIconSelectLog");
static_assert(offsetof(Fang_expedition_IconList_C_SetIconSelectLog, On) == 0x000000, "Member 'Fang_expedition_IconList_C_SetIconSelectLog::On' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_SetIconSelectLog, CallFunc_GetTimeSeconds_ReturnValue) == 0x000004, "Member 'Fang_expedition_IconList_C_SetIconSelectLog::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.IsActiveSelect
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_IconList_C_IsActiveSelect final
{
public:
	bool                                          Select;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EDA[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_IconList_C_IsActiveSelect) == 0x000004, "Wrong alignment on Fang_expedition_IconList_C_IsActiveSelect");
static_assert(sizeof(Fang_expedition_IconList_C_IsActiveSelect) == 0x000010, "Wrong size on Fang_expedition_IconList_C_IsActiveSelect");
static_assert(offsetof(Fang_expedition_IconList_C_IsActiveSelect, Select) == 0x000000, "Member 'Fang_expedition_IconList_C_IsActiveSelect::Select' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_IsActiveSelect, Active) == 0x000001, "Member 'Fang_expedition_IconList_C_IsActiveSelect::Active' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_IsActiveSelect, CallFunc_GetTimeSeconds_ReturnValue) == 0x000004, "Member 'Fang_expedition_IconList_C_IsActiveSelect::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_IsActiveSelect, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000008, "Member 'Fang_expedition_IconList_C_IsActiveSelect::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_IsActiveSelect, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00000C, "Member 'Fang_expedition_IconList_C_IsActiveSelect::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_IconList_C_IsActiveSelect, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00000D, "Member 'Fang_expedition_IconList_C_IsActiveSelect::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

