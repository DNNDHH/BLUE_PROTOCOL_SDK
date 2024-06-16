#pragma once

 

// Package: MilitaryRecordListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_MilitalyRecord_structs.hpp"


namespace SDK::Params
{

// Function MilitaryRecordListItem.MilitaryRecordListItem_C.ExecuteUbergraph_MilitaryRecordListItem
// 0x0118 (0x0118 - 0x0000)
struct MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMilitaryRecordData                    K2Node_CustomEvent_InMilitaryRecordData;           // 0x000C(0x0008)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53BB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BC[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MilitalyRecord                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BD[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BE[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BF[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C0[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00F8(0x0018)()
	bool                                          K2Node_CustomEvent_InIsBase;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C1[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem) == 0x000008, "Wrong alignment on MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem");
static_assert(sizeof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem) == 0x000118, "Wrong size on MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, EntryPoint) == 0x000000, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, Temp_int_Variable) == 0x000004, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, Temp_int_Variable_1) == 0x000008, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, K2Node_CustomEvent_InMilitaryRecordData) == 0x00000C, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::K2Node_CustomEvent_InMilitaryRecordData' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_StringToName_ReturnValue) == 0x000048, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000050, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_TextIsEmpty_ReturnValue) == 0x0000B8, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Not_PreBool_ReturnValue) == 0x0000B9, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000C0, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000E8, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_IsValid_ReturnValue) == 0x0000E9, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000EC, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000F0, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000F4, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000F8, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, K2Node_CustomEvent_InIsBase) == 0x000110, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::K2Node_CustomEvent_InIsBase' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, Temp_bool_Variable) == 0x000111, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem, K2Node_Select_Default) == 0x000114, "Member 'MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem::K2Node_Select_Default' has a wrong offset!");

// Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetBaseImage
// 0x0001 (0x0001 - 0x0000)
struct MilitaryRecordListItem_C_SetBaseImage final
{
public:
	bool                                          InIsBase;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MilitaryRecordListItem_C_SetBaseImage) == 0x000001, "Wrong alignment on MilitaryRecordListItem_C_SetBaseImage");
static_assert(sizeof(MilitaryRecordListItem_C_SetBaseImage) == 0x000001, "Wrong size on MilitaryRecordListItem_C_SetBaseImage");
static_assert(offsetof(MilitaryRecordListItem_C_SetBaseImage, InIsBase) == 0x000000, "Member 'MilitaryRecordListItem_C_SetBaseImage::InIsBase' has a wrong offset!");

// Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct MilitaryRecordListItem_C_SetData final
{
public:
	struct FMilitaryRecordData                    InMilitaryRecordData;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(MilitaryRecordListItem_C_SetData) == 0x000004, "Wrong alignment on MilitaryRecordListItem_C_SetData");
static_assert(sizeof(MilitaryRecordListItem_C_SetData) == 0x000008, "Wrong size on MilitaryRecordListItem_C_SetData");
static_assert(offsetof(MilitaryRecordListItem_C_SetData, InMilitaryRecordData) == 0x000000, "Member 'MilitaryRecordListItem_C_SetData::InMilitaryRecordData' has a wrong offset!");

}

