#pragma once

 

// Package: WBP_MultiDescription

#include "Basic.hpp"

#include "StorageMultipleSalesWindowType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleSales__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_MultiDescription_C_MultipleSales__DelegateSignature final
{
public:
	int32                                         InTotalPrice;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77CD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_MultiDescription_C_MultipleSales__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_MultipleSales__DelegateSignature");
static_assert(sizeof(WBP_MultiDescription_C_MultipleSales__DelegateSignature) == 0x000018, "Wrong size on WBP_MultiDescription_C_MultipleSales__DelegateSignature");
static_assert(offsetof(WBP_MultiDescription_C_MultipleSales__DelegateSignature, InTotalPrice) == 0x000000, "Member 'WBP_MultiDescription_C_MultipleSales__DelegateSignature::InTotalPrice' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_MultipleSales__DelegateSignature, InSelectItemList) == 0x000008, "Member 'WBP_MultiDescription_C_MultipleSales__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveStorage__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature final
{
public:
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature");
static_assert(sizeof(WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature) == 0x000010, "Wrong size on WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature");
static_assert(offsetof(WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature, InSelectItemList) == 0x000000, "Member 'WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveBag__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature final
{
public:
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature");
static_assert(sizeof(WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature) == 0x000010, "Wrong size on WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature");
static_assert(offsetof(WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature, InSelectItemList) == 0x000000, "Member 'WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleTrash__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_MultiDescription_C_MultipleTrash__DelegateSignature final
{
public:
	TArray<struct FInventoryItemData>             InSelectItemList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_MultiDescription_C_MultipleTrash__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_MultipleTrash__DelegateSignature");
static_assert(sizeof(WBP_MultiDescription_C_MultipleTrash__DelegateSignature) == 0x000010, "Wrong size on WBP_MultiDescription_C_MultipleTrash__DelegateSignature");
static_assert(offsetof(WBP_MultiDescription_C_MultipleTrash__DelegateSignature, InSelectItemList) == 0x000000, "Member 'WBP_MultiDescription_C_MultipleTrash__DelegateSignature::InSelectItemList' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiDescription_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     InventoryData;                                     // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiDescription_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiDescription_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiDescription_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiDescription_C_OnClick__DelegateSignature, InventoryData) == 0x000000, "Member 'WBP_MultiDescription_C_OnClick__DelegateSignature::InventoryData' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.ExecuteUbergraph_WBP_MultiDescription
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77CE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	int32                                         CallFunc_Get_Total_Item_Num_ReturnValue;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77CF[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D0[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	int32                                         CallFunc_Get_Total_Item_Num_ReturnValue_1;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_BaseMultiSelectBlock_C*            CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_BaseMultiSelectBlock_C*            CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D1[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D2[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D3[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FInventoryItemData                     K2Node_CustomEvent_NewParam;                       // 0x00D8(0x0060)(HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_BaseMultiSelectBlock_C*            CallFunc_Array_Get_Item_1;                         // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Price_Price;                          // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D4[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              CallFunc_Array_Get_Item_2;                         // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77D5[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77D6[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0178(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77D7[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01A8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D8[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x01C8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D9[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FInventoryItemData& NewParam)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01E8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription");
static_assert(sizeof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription) == 0x0001F8, "Wrong size on WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, EntryPoint) == 0x000000, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, K2Node_MakeStruct_Margin) == 0x00000C, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue_1) == 0x00001C, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, Temp_int_Variable) == 0x000020, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Get_Total_Item_Num_ReturnValue) == 0x000040, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Get_Total_Item_Num_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Get_Total_Item_Num_ReturnValue_1) == 0x000078, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Get_Total_Item_Num_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Subtract_IntInt_ReturnValue) == 0x000080, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Create_ReturnValue) == 0x000088, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000090, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue_2) == 0x0000A0, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Add_ReturnValue) == 0x0000A4, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, Temp_int_Loop_Counter_Variable_1) == 0x0000AC, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue_3) == 0x0000B0, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B4, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000B8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000BC, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue_4) == 0x0000C0, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000C4, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, K2Node_CustomEvent_NewParam) == 0x0000D8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, Temp_int_Variable_1) == 0x000138, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, Temp_int_Array_Index_Variable_1) == 0x00013C, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Get_Price_Price) == 0x000148, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Get_Price_Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Add_IntInt_ReturnValue_2) == 0x00014C, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000150, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Add_IntInt_ReturnValue_3) == 0x000154, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue_5) == 0x000160, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_PlayAnimationForward_ReturnValue) == 0x000168, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Add_IntInt_ReturnValue_4) == 0x000170, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000178, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000190, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_GetVisibility_ReturnValue) == 0x0001A0, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001A8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001C0, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0001C8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Array_Length_ReturnValue_6) == 0x0001E0, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, CallFunc_Less_IntInt_ReturnValue_3) == 0x0001E4, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001E8, "Member 'WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.CustomEvent_0
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiDescription_C_CustomEvent_0 final
{
public:
	struct FInventoryItemData                     NewParam;                                          // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiDescription_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_CustomEvent_0");
static_assert(sizeof(WBP_MultiDescription_C_CustomEvent_0) == 0x000060, "Wrong size on WBP_MultiDescription_C_CustomEvent_0");
static_assert(offsetof(WBP_MultiDescription_C_CustomEvent_0, NewParam) == 0x000000, "Member 'WBP_MultiDescription_C_CustomEvent_0::NewParam' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.SetSelectItems
// 0x0020 (0x0020 - 0x0000)
struct WBP_MultiDescription_C_SetSelectItems final
{
public:
	const class UItemIconBtn_C*                   InputPin;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStorageMultipleSalesWindowType               NewParam;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77DA[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DB[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiDescription_C_SetSelectItems) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_SetSelectItems");
static_assert(sizeof(WBP_MultiDescription_C_SetSelectItems) == 0x000020, "Wrong size on WBP_MultiDescription_C_SetSelectItems");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, InputPin) == 0x000000, "Member 'WBP_MultiDescription_C_SetSelectItems::InputPin' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, NewParam) == 0x000008, "Member 'WBP_MultiDescription_C_SetSelectItems::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_MultiDescription_C_SetSelectItems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'WBP_MultiDescription_C_SetSelectItems::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, CallFunc_Array_RemoveItem_ReturnValue) == 0x000014, "Member 'WBP_MultiDescription_C_SetSelectItems::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, CallFunc_Array_Find_ReturnValue) == 0x000018, "Member 'WBP_MultiDescription_C_SetSelectItems::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_MultiDescription_C_SetSelectItems::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_SetSelectItems, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001D, "Member 'WBP_MultiDescription_C_SetSelectItems::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.AllRemoveSalesItems
// 0x0001 (0x0001 - 0x0000)
struct WBP_MultiDescription_C_AllRemoveSalesItems final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiDescription_C_AllRemoveSalesItems) == 0x000001, "Wrong alignment on WBP_MultiDescription_C_AllRemoveSalesItems");
static_assert(sizeof(WBP_MultiDescription_C_AllRemoveSalesItems) == 0x000001, "Wrong size on WBP_MultiDescription_C_AllRemoveSalesItems");
static_assert(offsetof(WBP_MultiDescription_C_AllRemoveSalesItems, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_MultiDescription_C_AllRemoveSalesItems::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.SetInventoryStorageList
// 0x0008 (0x0008 - 0x0000)
struct WBP_MultiDescription_C_SetInventoryStorageList final
{
public:
	class UWBP_StorageRowListOwner_C*             Param_InventoryStorageList;                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiDescription_C_SetInventoryStorageList) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_SetInventoryStorageList");
static_assert(sizeof(WBP_MultiDescription_C_SetInventoryStorageList) == 0x000008, "Wrong size on WBP_MultiDescription_C_SetInventoryStorageList");
static_assert(offsetof(WBP_MultiDescription_C_SetInventoryStorageList, Param_InventoryStorageList) == 0x000000, "Member 'WBP_MultiDescription_C_SetInventoryStorageList::Param_InventoryStorageList' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.Get Total Item Num
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiDescription_C_Get_Total_Item_Num final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DC[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiDescription_C_Get_Total_Item_Num) == 0x000004, "Wrong alignment on WBP_MultiDescription_C_Get_Total_Item_Num");
static_assert(sizeof(WBP_MultiDescription_C_Get_Total_Item_Num) == 0x000014, "Wrong size on WBP_MultiDescription_C_Get_Total_Item_Num");
static_assert(offsetof(WBP_MultiDescription_C_Get_Total_Item_Num, ReturnValue) == 0x000000, "Member 'WBP_MultiDescription_C_Get_Total_Item_Num::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_Get_Total_Item_Num, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_MultiDescription_C_Get_Total_Item_Num::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_Get_Total_Item_Num, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiDescription_C_Get_Total_Item_Num::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_Get_Total_Item_Num, CallFunc_Array_Length_ReturnValue_1) == 0x00000C, "Member 'WBP_MultiDescription_C_Get_Total_Item_Num::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_Get_Total_Item_Num, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiDescription_C_Get_Total_Item_Num::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateButton
// 0x0278 (0x0278 - 0x0000)
struct WBP_MultiDescription_C_UpdateButton final
{
public:
	bool                                          SwapEnable;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsInventorySelect;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsStorageSelect;                                   // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsInventoryMoveEnable;                             // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsStorageMoveEnable;                               // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DE[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77DF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E0[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_Array_Get_Item;                           // 0x0058(0x0060)(HasGetValueTypeHash)
	struct FInventoryItemData                     CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Is_Lock_Item_bLock;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFangExpeditionUsing_ReturnValue;        // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x011F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E2[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E3[0x1];                                     // 0x012B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E4[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_Array_Get_Item_2;                         // 0x0138(0x0060)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_1;   // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x019E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_2;            // 0x019F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_2;        // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E5[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     CallFunc_Array_Get_Item_3;                         // 0x01A8(0x0060)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Lock_Item_bLock_1;                     // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x020E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFangExpeditionUsing_ReturnValue_1;      // 0x020F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_3;            // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSaleItem_IsSaleItem;                    // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_9;                // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x0216(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E6[0x1];                                     // 0x0217(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0228(0x0018)()
	class FName                                   Temp_name_Variable;                                // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E7[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E8[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x025C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77E9[0x2];                                     // 0x0266(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItem_C*              CallFunc_Array_Get_Item_4;                         // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSaleItem_IsSaleItem_1;                  // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x0276(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiDescription_C_UpdateButton) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_UpdateButton");
static_assert(sizeof(WBP_MultiDescription_C_UpdateButton) == 0x000278, "Wrong size on WBP_MultiDescription_C_UpdateButton");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, SwapEnable) == 0x000000, "Member 'WBP_MultiDescription_C_UpdateButton::SwapEnable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, IsInventorySelect) == 0x000001, "Member 'WBP_MultiDescription_C_UpdateButton::IsInventorySelect' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, IsStorageSelect) == 0x000002, "Member 'WBP_MultiDescription_C_UpdateButton::IsStorageSelect' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, IsInventoryMoveEnable) == 0x000003, "Member 'WBP_MultiDescription_C_UpdateButton::IsInventoryMoveEnable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, IsStorageMoveEnable) == 0x000004, "Member 'WBP_MultiDescription_C_UpdateButton::IsStorageMoveEnable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Loop_Counter_Variable_2) == 0x00001C, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_bool_True_if_break_was_hit_Variable) == 0x000024, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue) == 0x00002C, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Loop_Counter_Variable_3) == 0x000030, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Array_Index_Variable_2) == 0x000034, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Add_IntInt_ReturnValue_3) == 0x000038, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Array_Index_Variable_3) == 0x00003C, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Loop_Counter_Variable_4) == 0x000040, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Add_IntInt_ReturnValue_4) == 0x000044, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_bool_True_if_break_was_hit_Variable_1) == 0x000048, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_int_Array_Index_Variable_4) == 0x00004C, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_1) == 0x000050, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Is_Lock_Item_bLock) == 0x000118, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Is_Lock_Item_bLock' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000119, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_2) == 0x00011A, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsEquipmentItem_ReturnValue) == 0x00011B, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsFangExpeditionUsing_ReturnValue) == 0x00011C, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsFangExpeditionUsing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_3) == 0x00011D, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_4) == 0x00011E, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue) == 0x00011F, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000120, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_5) == 0x000121, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_1) == 0x000128, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Less_IntInt_ReturnValue) == 0x000129, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_2) == 0x00012A, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Length_ReturnValue_1) == 0x00012C, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000130, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Get_Item_2) == 0x000138, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Length_ReturnValue_2) == 0x000198, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Less_IntInt_ReturnValue_2) == 0x00019C, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsInventoryStorageNumber_ReturnValue_1) == 0x00019D, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsInventoryStorageNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_6) == 0x00019E, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsEquipmentItem_ReturnValue_2) == 0x00019F, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsEquipmentItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_7) == 0x0001A0, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_bool_True_if_break_was_hit_Variable_2) == 0x0001A1, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_bool_True_if_break_was_hit_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_3) == 0x0001A2, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_8) == 0x0001A3, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_4) == 0x0001A4, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Get_Item_3) == 0x0001A8, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Length_ReturnValue_3) == 0x000208, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Less_IntInt_ReturnValue_3) == 0x00020C, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Is_Lock_Item_bLock_1) == 0x00020D, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Is_Lock_Item_bLock_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_5) == 0x00020E, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsFangExpeditionUsing_ReturnValue_1) == 0x00020F, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsFangExpeditionUsing_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsEquipmentItem_ReturnValue_3) == 0x000210, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsEquipmentItem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsSaleItem_IsSaleItem) == 0x000211, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsSaleItem_IsSaleItem' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Not_PreBool_ReturnValue_9) == 0x000212, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Not_PreBool_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanOR_ReturnValue) == 0x000213, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanOR_ReturnValue_1) == 0x000214, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanOR_ReturnValue_2) == 0x000215, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_6) == 0x000216, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000218, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000228, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_name_Variable) == 0x000240, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_name_Variable_1) == 0x000248, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_bool_Variable) == 0x000250, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Length_ReturnValue_4) == 0x000254, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000258, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, K2Node_Select_Default) == 0x00025C, "Member 'WBP_MultiDescription_C_UpdateButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, Temp_bool_Variable_1) == 0x000264, "Member 'WBP_MultiDescription_C_UpdateButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, K2Node_Select_Default_1) == 0x000265, "Member 'WBP_MultiDescription_C_UpdateButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Get_Item_4) == 0x000268, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Array_Length_ReturnValue_5) == 0x000270, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_Less_IntInt_ReturnValue_4) == 0x000274, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_IsSaleItem_IsSaleItem_1) == 0x000275, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_IsSaleItem_IsSaleItem_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_UpdateButton, CallFunc_BooleanAND_ReturnValue_7) == 0x000276, "Member 'WBP_MultiDescription_C_UpdateButton::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.IsSaleItem
// 0x0290 (0x0290 - 0x0000)
struct WBP_MultiDescription_C_IsSaleItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Param_IsSaleItem;                                  // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77EA[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   Manager;                                           // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77EB[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0078(0x0070)()
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77EC[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x00F0(0x00B0)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77ED[0x5];                                     // 0x01A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x01A8(0x00D0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77EE[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiDescription_C_IsSaleItem) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_IsSaleItem");
static_assert(sizeof(WBP_MultiDescription_C_IsSaleItem) == 0x000290, "Wrong size on WBP_MultiDescription_C_IsSaleItem");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, InventoryItemData) == 0x000000, "Member 'WBP_MultiDescription_C_IsSaleItem::InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, Param_IsSaleItem) == 0x000060, "Member 'WBP_MultiDescription_C_IsSaleItem::Param_IsSaleItem' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, Manager) == 0x000068, "Member 'WBP_MultiDescription_C_IsSaleItem::Manager' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'WBP_MultiDescription_C_IsSaleItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000071, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000078, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_FindMasterImagineData_IsExists) == 0x0000E8, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_FindMasterImagineData_ReturnValue) == 0x0000F0, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_Not_PreBool_ReturnValue) == 0x0001A0, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001A1, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_GetItemMasterData_IsExists) == 0x0001A2, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_GetItemMasterData_ReturnValue) == 0x0001A8, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_GetMasterDataManager_IsValid) == 0x000278, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000280, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_IsSaleItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000288, "Member 'WBP_MultiDescription_C_IsSaleItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.Remove Select Item
// 0x0068 (0x0068 - 0x0000)
struct WBP_MultiDescription_C_Remove_Select_Item final
{
public:
	struct FInventoryItemData                     Item;                                              // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MultiDescription_C_Remove_Select_Item) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_Remove_Select_Item");
static_assert(sizeof(WBP_MultiDescription_C_Remove_Select_Item) == 0x000068, "Wrong size on WBP_MultiDescription_C_Remove_Select_Item");
static_assert(offsetof(WBP_MultiDescription_C_Remove_Select_Item, Item) == 0x000000, "Member 'WBP_MultiDescription_C_Remove_Select_Item::Item' has a wrong offset!");
static_assert(offsetof(WBP_MultiDescription_C_Remove_Select_Item, CallFunc_Array_RemoveItem_ReturnValue) == 0x000060, "Member 'WBP_MultiDescription_C_Remove_Select_Item::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function WBP_MultiDescription.WBP_MultiDescription_C.GetSelectItemList
// 0x0010 (0x0010 - 0x0000)
struct WBP_MultiDescription_C_GetSelectItemList final
{
public:
	TArray<struct FInventoryItemData>             Param_Select_Item_Data;                            // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(WBP_MultiDescription_C_GetSelectItemList) == 0x000008, "Wrong alignment on WBP_MultiDescription_C_GetSelectItemList");
static_assert(sizeof(WBP_MultiDescription_C_GetSelectItemList) == 0x000010, "Wrong size on WBP_MultiDescription_C_GetSelectItemList");
static_assert(offsetof(WBP_MultiDescription_C_GetSelectItemList, Param_Select_Item_Data) == 0x000000, "Member 'WBP_MultiDescription_C_GetSelectItemList::Param_Select_Item_Data' has a wrong offset!");

}

