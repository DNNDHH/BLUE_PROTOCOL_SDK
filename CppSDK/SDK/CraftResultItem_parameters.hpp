#pragma once

 

// Package: CraftResultItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CraftResultItem.CraftResultItem_C.ExecuteUbergraph_CraftResultItem
// 0x0178 (0x0178 - 0x0000)
struct CraftResultItem_C_ExecuteUbergraph_CraftResultItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5176[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5177[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_Recepi;                         // 0x0060(0x0008)(NoDestructor)
	bool                                          K2Node_CustomEvent_isCritical;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5178[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TotalCount;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageType;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleNum_1;                      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleProfits_1;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5179[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0088(0x0088)()
	TArray<class FString>                         K2Node_CustomEvent_UIDs;                           // 0x0110(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_CriticalNum;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TotalNum;                       // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CraftCount;                     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StorageNum;                     // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleNum;                        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleProfits;                    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0138(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_517A[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0158(0x0018)()
	bool                                          K2Node_CustomEvent_Flag;                           // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem) == 0x000008, "Wrong alignment on CraftResultItem_C_ExecuteUbergraph_CraftResultItem");
static_assert(sizeof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem) == 0x000178, "Wrong size on CraftResultItem_C_ExecuteUbergraph_CraftResultItem");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, EntryPoint) == 0x000000, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, Temp_bool_Variable) == 0x000005, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, Temp_bool_Variable_1) == 0x000006, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, Temp_int_Variable) == 0x000008, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, Temp_int_Variable_1) == 0x00000C, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000040, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_Recepi) == 0x000060, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_Recepi' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_isCritical) == 0x000068, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_isCritical' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_TotalCount) == 0x00006C, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_TotalCount' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_StorageType) == 0x000070, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_StorageType' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_SaleNum_1) == 0x000074, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_SaleNum_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_SaleProfits_1) == 0x000078, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_SaleProfits_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_Select_Default) == 0x00007C, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_FindCraftMaster_bIsValid) == 0x000080, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_FindCraftMaster_CraftMaster) == 0x000088, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_UIDs) == 0x000110, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_UIDs' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_CriticalNum) == 0x000120, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_CriticalNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_TotalNum) == 0x000124, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_TotalNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_CraftCount) == 0x000128, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_CraftCount' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_StorageNum) == 0x00012C, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_StorageNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_SaleNum) == 0x000130, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_SaleNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_SaleProfits) == 0x000134, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_SaleProfits' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000138, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000150, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000158, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_CustomEvent_Flag) == 0x000170, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_CustomEvent_Flag' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_ExecuteUbergraph_CraftResultItem, K2Node_Select_Default_1) == 0x000171, "Member 'CraftResultItem_C_ExecuteUbergraph_CraftResultItem::K2Node_Select_Default_1' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.SetFailVisible
// 0x0001 (0x0001 - 0x0000)
struct CraftResultItem_C_SetFailVisible final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftResultItem_C_SetFailVisible) == 0x000001, "Wrong alignment on CraftResultItem_C_SetFailVisible");
static_assert(sizeof(CraftResultItem_C_SetFailVisible) == 0x000001, "Wrong size on CraftResultItem_C_SetFailVisible");
static_assert(offsetof(CraftResultItem_C_SetFailVisible, Flag) == 0x000000, "Member 'CraftResultItem_C_SetFailVisible::Flag' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.SetCriticalCraftData
// 0x0028 (0x0028 - 0x0000)
struct CraftResultItem_C_SetCriticalCraftData final
{
public:
	TArray<class FString>                         Uids;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Param_CriticalNum;                                 // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalNum;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CraftCount;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNum;                                        // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleNum;                                           // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SaleProfits;                                 // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultItem_C_SetCriticalCraftData) == 0x000008, "Wrong alignment on CraftResultItem_C_SetCriticalCraftData");
static_assert(sizeof(CraftResultItem_C_SetCriticalCraftData) == 0x000028, "Wrong size on CraftResultItem_C_SetCriticalCraftData");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, Uids) == 0x000000, "Member 'CraftResultItem_C_SetCriticalCraftData::Uids' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, Param_CriticalNum) == 0x000010, "Member 'CraftResultItem_C_SetCriticalCraftData::Param_CriticalNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, TotalNum) == 0x000014, "Member 'CraftResultItem_C_SetCriticalCraftData::TotalNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, CraftCount) == 0x000018, "Member 'CraftResultItem_C_SetCriticalCraftData::CraftCount' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, StorageNum) == 0x00001C, "Member 'CraftResultItem_C_SetCriticalCraftData::StorageNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, SaleNum) == 0x000020, "Member 'CraftResultItem_C_SetCriticalCraftData::SaleNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCriticalCraftData, Param_SaleProfits) == 0x000024, "Member 'CraftResultItem_C_SetCriticalCraftData::Param_SaleProfits' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.SetCraftedItemData
// 0x0014 (0x0014 - 0x0000)
struct CraftResultItem_C_SetCraftedItemData final
{
public:
	bool                                          IsCritical;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_517B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalCount;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageType;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleNum;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SaleProfits;                                 // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultItem_C_SetCraftedItemData) == 0x000004, "Wrong alignment on CraftResultItem_C_SetCraftedItemData");
static_assert(sizeof(CraftResultItem_C_SetCraftedItemData) == 0x000014, "Wrong size on CraftResultItem_C_SetCraftedItemData");
static_assert(offsetof(CraftResultItem_C_SetCraftedItemData, IsCritical) == 0x000000, "Member 'CraftResultItem_C_SetCraftedItemData::IsCritical' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCraftedItemData, TotalCount) == 0x000004, "Member 'CraftResultItem_C_SetCraftedItemData::TotalCount' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCraftedItemData, StorageType) == 0x000008, "Member 'CraftResultItem_C_SetCraftedItemData::StorageType' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCraftedItemData, SaleNum) == 0x00000C, "Member 'CraftResultItem_C_SetCraftedItemData::SaleNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_SetCraftedItemData, Param_SaleProfits) == 0x000010, "Member 'CraftResultItem_C_SetCraftedItemData::Param_SaleProfits' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.SetRecepi
// 0x0008 (0x0008 - 0x0000)
struct CraftResultItem_C_SetRecepi final
{
public:
	struct FCharacterCraftRecepi                  Param_Recepi;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CraftResultItem_C_SetRecepi) == 0x000004, "Wrong alignment on CraftResultItem_C_SetRecepi");
static_assert(sizeof(CraftResultItem_C_SetRecepi) == 0x000008, "Wrong size on CraftResultItem_C_SetRecepi");
static_assert(offsetof(CraftResultItem_C_SetRecepi, Param_Recepi) == 0x000000, "Member 'CraftResultItem_C_SetRecepi::Param_Recepi' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.UpdateCriticalColor
// 0x0088 (0x0088 - 0x0000)
struct CraftResultItem_C_UpdateCriticalColor final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_517C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_517D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
};
static_assert(alignof(CraftResultItem_C_UpdateCriticalColor) == 0x000008, "Wrong alignment on CraftResultItem_C_UpdateCriticalColor");
static_assert(sizeof(CraftResultItem_C_UpdateCriticalColor) == 0x000088, "Wrong size on CraftResultItem_C_UpdateCriticalColor");
static_assert(offsetof(CraftResultItem_C_UpdateCriticalColor, Temp_bool_Variable) == 0x000000, "Member 'CraftResultItem_C_UpdateCriticalColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateCriticalColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CraftResultItem_C_UpdateCriticalColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateCriticalColor, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CraftResultItem_C_UpdateCriticalColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateCriticalColor, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'CraftResultItem_C_UpdateCriticalColor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateCriticalColor, K2Node_Select_Default) == 0x000060, "Member 'CraftResultItem_C_UpdateCriticalColor::K2Node_Select_Default' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.UpdateBonusCraftNum
// 0x0140 (0x0140 - 0x0000)
struct CraftResultItem_C_UpdateBonusCraftNum final
{
public:
	int32                                         CraftCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_517E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CraftMaster;                                       // 0x0008(0x0088)(Edit, BlueprintVisible)
	int32                                         TmpCraftCount;                                     // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_517F[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x00A0(0x0088)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0128(0x0018)()
};
static_assert(alignof(CraftResultItem_C_UpdateBonusCraftNum) == 0x000008, "Wrong alignment on CraftResultItem_C_UpdateBonusCraftNum");
static_assert(sizeof(CraftResultItem_C_UpdateBonusCraftNum) == 0x000140, "Wrong size on CraftResultItem_C_UpdateBonusCraftNum");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CraftCount) == 0x000000, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CraftCount' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CraftMaster) == 0x000008, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, TmpCraftCount) == 0x000090, "Member 'CraftResultItem_C_UpdateBonusCraftNum::TmpCraftCount' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CallFunc_Multiply_IntInt_ReturnValue) == 0x000094, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000098, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CallFunc_FindCraftMaster_bIsValid) == 0x00009C, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CallFunc_FindCraftMaster_CraftMaster) == 0x0000A0, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_UpdateBonusCraftNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000128, "Member 'CraftResultItem_C_UpdateBonusCraftNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.Update Storage Slack Num
// 0x0138 (0x0138 - 0x0000)
struct CraftResultItem_C_Update_Storage_Slack_Num final
{
public:
	struct FCraftMasterData                       LocalCraftMaster;                                  // 0x0000(0x0088)(Edit, BlueprintVisible)
	class USBOwnItemListContainer*                TmpStorage;                                        // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSlackNum_ReturnValue;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5180[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x00A8(0x0088)()
	int32                                         CallFunc_GetSlackNum_ReturnValue_1;                // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultItem_C_Update_Storage_Slack_Num) == 0x000008, "Wrong alignment on CraftResultItem_C_Update_Storage_Slack_Num");
static_assert(sizeof(CraftResultItem_C_Update_Storage_Slack_Num) == 0x000138, "Wrong size on CraftResultItem_C_Update_Storage_Slack_Num");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, LocalCraftMaster) == 0x000000, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::LocalCraftMaster' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, TmpStorage) == 0x000088, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::TmpStorage' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, CallFunc_GetItemBag_ReturnValue) == 0x000090, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::CallFunc_GetItemBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, CallFunc_GetCharacterStorage_ReturnValue) == 0x000098, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, CallFunc_GetSlackNum_ReturnValue) == 0x0000A0, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::CallFunc_GetSlackNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, CallFunc_FindCraftMaster_bIsValid) == 0x0000A4, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, CallFunc_FindCraftMaster_CraftMaster) == 0x0000A8, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_Storage_Slack_Num, CallFunc_GetSlackNum_ReturnValue_1) == 0x000130, "Member 'CraftResultItem_C_Update_Storage_Slack_Num::CallFunc_GetSlackNum_ReturnValue_1' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.Update SlackView
// 0x00D0 (0x00D0 - 0x0000)
struct CraftResultItem_C_Update_SlackView final
{
public:
	int32                                         StorageNo;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlackNum;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBag;                                              // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5181[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5182[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0050(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5183[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0070(0x0018)()
	class USBRuntimeTextBlock*                    K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0090(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5184[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    K2Node_Select_Default_1;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5185[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5186[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_5;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultItem_C_Update_SlackView) == 0x000008, "Wrong alignment on CraftResultItem_C_Update_SlackView");
static_assert(sizeof(CraftResultItem_C_Update_SlackView) == 0x0000D0, "Wrong size on CraftResultItem_C_Update_SlackView");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, StorageNo) == 0x000000, "Member 'CraftResultItem_C_Update_SlackView::StorageNo' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, SlackNum) == 0x000004, "Member 'CraftResultItem_C_Update_SlackView::SlackNum' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, bBag) == 0x000008, "Member 'CraftResultItem_C_Update_SlackView::bBag' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000009, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Less_IntInt_ReturnValue) == 0x00000A, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000B, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, Temp_bool_Variable) == 0x00000C, "Member 'CraftResultItem_C_Update_SlackView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, Temp_bool_Variable_1) == 0x00000D, "Member 'CraftResultItem_C_Update_SlackView::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, Temp_bool_Variable_2) == 0x00000E, "Member 'CraftResultItem_C_Update_SlackView::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, Temp_bool_Variable_3) == 0x00000F, "Member 'CraftResultItem_C_Update_SlackView::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, Temp_bool_Variable_4) == 0x000010, "Member 'CraftResultItem_C_Update_SlackView::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, Temp_bool_Variable_5) == 0x000011, "Member 'CraftResultItem_C_Update_SlackView::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000012, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000013, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000049, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000050, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Subtract_IntInt_ReturnValue) == 0x000068, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000070, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, K2Node_Select_Default) == 0x000088, "Member 'CraftResultItem_C_Update_SlackView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000090, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, K2Node_Select_Default_1) == 0x0000B0, "Member 'CraftResultItem_C_Update_SlackView::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000B8, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_BooleanAND_ReturnValue) == 0x0000B9, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, CallFunc_BooleanOR_ReturnValue) == 0x0000BA, "Member 'CraftResultItem_C_Update_SlackView::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, K2Node_Select_Default_2) == 0x0000BB, "Member 'CraftResultItem_C_Update_SlackView::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, K2Node_Select_Default_3) == 0x0000BC, "Member 'CraftResultItem_C_Update_SlackView::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, K2Node_Select_Default_4) == 0x0000C0, "Member 'CraftResultItem_C_Update_SlackView::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CraftResultItem_C_Update_SlackView, K2Node_Select_Default_5) == 0x0000C8, "Member 'CraftResultItem_C_Update_SlackView::K2Node_Select_Default_5' has a wrong offset!");

// Function CraftResultItem.CraftResultItem_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct CraftResultItem_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultItem_C_PlayAnimIn) == 0x000008, "Wrong alignment on CraftResultItem_C_PlayAnimIn");
static_assert(sizeof(CraftResultItem_C_PlayAnimIn) == 0x000008, "Wrong size on CraftResultItem_C_PlayAnimIn");
static_assert(offsetof(CraftResultItem_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'CraftResultItem_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

