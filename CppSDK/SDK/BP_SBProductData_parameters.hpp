#pragma once

 

// Package: BP_SBProductData

#include "Basic.hpp"

#include "E_SBProductDetailType_structs.hpp"
#include "ST_ShopIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_SBProductData.BP_SBProductData_C.ExecuteUbergraph_BP_SBProductData
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_968B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_Event_Data;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Value;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData) == 0x000008, "Wrong alignment on BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData");
static_assert(sizeof(BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData) == 0x000018, "Wrong size on BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData");
static_assert(offsetof(BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData, EntryPoint) == 0x000000, "Member 'BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData, K2Node_Event_Data) == 0x000008, "Member 'BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData, K2Node_Event_Value) == 0x000010, "Member 'BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData::K2Node_Event_Value' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.SetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductData_C_SetSelectedData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_SetSelectedData) == 0x000008, "Wrong alignment on BP_SBProductData_C_SetSelectedData");
static_assert(sizeof(BP_SBProductData_C_SetSelectedData) == 0x000008, "Wrong size on BP_SBProductData_C_SetSelectedData");
static_assert(offsetof(BP_SBProductData_C_SetSelectedData, Data) == 0x000000, "Member 'BP_SBProductData_C_SetSelectedData::Data' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.SetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BP_SBProductData_C_SetScrollOffset final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_SetScrollOffset) == 0x000004, "Wrong alignment on BP_SBProductData_C_SetScrollOffset");
static_assert(sizeof(BP_SBProductData_C_SetScrollOffset) == 0x000004, "Wrong size on BP_SBProductData_C_SetScrollOffset");
static_assert(offsetof(BP_SBProductData_C_SetScrollOffset, Value) == 0x000000, "Member 'BP_SBProductData_C_SetScrollOffset::Value' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.CreateDummyData
// 0x0040 (0x0040 - 0x0000)
struct BP_SBProductData_C_CreateDummyData final
{
public:
	int32                                         DummyItemCountMax;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_968C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_968D[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_CreateDummyData) == 0x000008, "Wrong alignment on BP_SBProductData_C_CreateDummyData");
static_assert(sizeof(BP_SBProductData_C_CreateDummyData) == 0x000040, "Wrong size on BP_SBProductData_C_CreateDummyData");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, DummyItemCountMax) == 0x000000, "Member 'BP_SBProductData_C_CreateDummyData::DummyItemCountMax' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_SpawnObject_ReturnValue) == 0x000008, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000010, "Member 'BP_SBProductData_C_CreateDummyData::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_SBProductData_C_CreateDummyData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_RandomInteger_ReturnValue) == 0x000024, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_RandomBool_ReturnValue) == 0x00002C, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_MakeDateTime_ReturnValue) == 0x000030, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000038, "Member 'BP_SBProductData_C_CreateDummyData::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.CreateDummyData2
// 0x0060 (0x0060 - 0x0000)
struct BP_SBProductData_C_CreateDummyData2 final
{
public:
	int32                                         DummyItemCountMax;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_1;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_968E[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue_1;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data_1;         // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_968F[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_CreateDummyData2) == 0x000008, "Wrong alignment on BP_SBProductData_C_CreateDummyData2");
static_assert(sizeof(BP_SBProductData_C_CreateDummyData2) == 0x000060, "Wrong size on BP_SBProductData_C_CreateDummyData2");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, DummyItemCountMax) == 0x000000, "Member 'BP_SBProductData_C_CreateDummyData2::DummyItemCountMax' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_RandomInteger_ReturnValue) == 0x000004, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000008, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_RandomInteger_ReturnValue_1) == 0x00000C, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_RandomInteger_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000018, "Member 'BP_SBProductData_C_CreateDummyData2::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_SBProductData_C_CreateDummyData2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_SpawnObject_ReturnValue_1) == 0x000030, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, K2Node_DynamicCast_AsBPI_SBProduct_Data_1) == 0x000038, "Member 'BP_SBProductData_C_CreateDummyData2::K2Node_DynamicCast_AsBPI_SBProduct_Data_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_SBProductData_C_CreateDummyData2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_Array_Add_ReturnValue_1) == 0x00004C, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_MakeDateTime_ReturnValue) == 0x000050, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_CreateDummyData2, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000058, "Member 'BP_SBProductData_C_CreateDummyData2::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.HasPurchasePeriod
// 0x0024 (0x0024 - 0x0000)
struct BP_SBProductData_C_HasPurchasePeriod final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9690[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_HasPurchasePeriod) == 0x000004, "Wrong alignment on BP_SBProductData_C_HasPurchasePeriod");
static_assert(sizeof(BP_SBProductData_C_HasPurchasePeriod) == 0x000024, "Wrong size on BP_SBProductData_C_HasPurchasePeriod");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_HasPurchasePeriod::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Year) == 0x000004, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Month) == 0x000008, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Day) == 0x00000C, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Hour) == 0x000010, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Minute) == 0x000014, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Second) == 0x000018, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_BreakDateTime_Millisecond) == 0x00001C, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchasePeriod, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_SBProductData_C_HasPurchasePeriod::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetProductIconItemData
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductData_C_GetProductIconItemData final
{
public:
	class UBP_SBProductItemData_C*                ItemData;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9691[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_GetProductIconItemData) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetProductIconItemData");
static_assert(sizeof(BP_SBProductData_C_GetProductIconItemData) == 0x000018, "Wrong size on BP_SBProductData_C_GetProductIconItemData");
static_assert(offsetof(BP_SBProductData_C_GetProductIconItemData, ItemData) == 0x000000, "Member 'BP_SBProductData_C_GetProductIconItemData::ItemData' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetProductIconItemData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000008, "Member 'BP_SBProductData_C_GetProductIconItemData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetProductIconItemData, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_SBProductData_C_GetProductIconItemData::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.HasPurchaseRestriction
// 0x0002 (0x0002 - 0x0000)
struct BP_SBProductData_C_HasPurchaseRestriction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_HasPurchaseRestriction) == 0x000001, "Wrong alignment on BP_SBProductData_C_HasPurchaseRestriction");
static_assert(sizeof(BP_SBProductData_C_HasPurchaseRestriction) == 0x000002, "Wrong size on BP_SBProductData_C_HasPurchaseRestriction");
static_assert(offsetof(BP_SBProductData_C_HasPurchaseRestriction, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_HasPurchaseRestriction::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_HasPurchaseRestriction, CallFunc_Greater_IntInt_ReturnValue) == 0x000001, "Member 'BP_SBProductData_C_HasPurchaseRestriction::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.SetDetailType
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductData_C_SetDetailType final
{
public:
	E_SBProductDetailType                         Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_SetDetailType) == 0x000001, "Wrong alignment on BP_SBProductData_C_SetDetailType");
static_assert(sizeof(BP_SBProductData_C_SetDetailType) == 0x000001, "Wrong size on BP_SBProductData_C_SetDetailType");
static_assert(offsetof(BP_SBProductData_C_SetDetailType, Type) == 0x000000, "Member 'BP_SBProductData_C_SetDetailType::Type' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.SetShopType
// 0x000D (0x000D - 0x0000)
struct BP_SBProductData_C_SetShopType final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_8;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_9;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         Temp_byte_Variable_10;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SBProductDetailType                         K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_SetShopType) == 0x000001, "Wrong alignment on BP_SBProductData_C_SetShopType");
static_assert(sizeof(BP_SBProductData_C_SetShopType) == 0x00000D, "Wrong size on BP_SBProductData_C_SetShopType");
static_assert(offsetof(BP_SBProductData_C_SetShopType, ShopType) == 0x000000, "Member 'BP_SBProductData_C_SetShopType::ShopType' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable) == 0x000001, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_1) == 0x000002, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_2) == 0x000003, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_3) == 0x000004, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_4) == 0x000005, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_5) == 0x000006, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_6) == 0x000007, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_7) == 0x000008, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_8) == 0x000009, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_9) == 0x00000A, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, Temp_byte_Variable_10) == 0x00000B, "Member 'BP_SBProductData_C_SetShopType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_SetShopType, K2Node_Select_Default) == 0x00000C, "Member 'BP_SBProductData_C_SetShopType::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetPurchaseRestrictionCountText
// 0x00F0 (0x00F0 - 0x0000)
struct BP_SBProductData_C_GetPurchaseRestrictionCountText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9692[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
};
static_assert(alignof(BP_SBProductData_C_GetPurchaseRestrictionCountText) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetPurchaseRestrictionCountText");
static_assert(sizeof(BP_SBProductData_C_GetPurchaseRestrictionCountText) == 0x0000F0, "Wrong size on BP_SBProductData_C_GetPurchaseRestrictionCountText");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, K2Node_MakeArray_Array) == 0x0000C8, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchaseRestrictionCountText, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'BP_SBProductData_C_GetPurchaseRestrictionCountText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriodText
// 0x0030 (0x0030 - 0x0000)
struct BP_SBProductData_C_GetPurchasePeriodText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_DateTimeToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(BP_SBProductData_C_GetPurchasePeriodText) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetPurchasePeriodText");
static_assert(sizeof(BP_SBProductData_C_GetPurchasePeriodText) == 0x000030, "Wrong size on BP_SBProductData_C_GetPurchasePeriodText");
static_assert(offsetof(BP_SBProductData_C_GetPurchasePeriodText, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_GetPurchasePeriodText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetPurchasePeriodText, CallFunc_DateTimeToText_ReturnValue) == 0x000018, "Member 'BP_SBProductData_C_GetPurchasePeriodText::CallFunc_DateTimeToText_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromShopItemInfoList
// 0x0070 (0x0070 - 0x0000)
struct BP_SBProductData_C_InitFromShopItemInfoList final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FShopItemInfo>                  ShopItemInfoList;                                  // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBRmShopMenuType                             ShopType;                                          // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9693[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FShopItemInfo                          CallFunc_Array_Get_Item;                           // 0x0038(0x000C)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9694[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9695[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9696[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromShopItemInfoList) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromShopItemInfoList");
static_assert(sizeof(BP_SBProductData_C_InitFromShopItemInfoList) == 0x000070, "Wrong size on BP_SBProductData_C_InitFromShopItemInfoList");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, Description) == 0x000000, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::Description' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, ShopItemInfoList) == 0x000018, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::ShopItemInfoList' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, ShopType) == 0x000028, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::ShopType' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, CallFunc_SpawnObject_ReturnValue) == 0x000050, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000058, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromShopItemInfoList, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'BP_SBProductData_C_InitFromShopItemInfoList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromRoseOrbShopItemMaster
// 0x01A0 (0x01A0 - 0x0000)
struct BP_SBProductData_C_InitFromRoseOrbShopItemMaster final
{
public:
	struct FSBRoseOrbShopItemMasterData           RoseOrbShopItemMaster;                             // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   NewLocalVar_0;                                     // 0x0060(0x0018)(Edit, BlueprintVisible)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9697[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue; // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9698[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x00E8(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9699[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue_1; // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0178(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_969A[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromRoseOrbShopItemMaster");
static_assert(sizeof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster) == 0x0001A0, "Wrong size on BP_SBProductData_C_InitFromRoseOrbShopItemMaster");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, RoseOrbShopItemMaster) == 0x000000, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::RoseOrbShopItemMaster' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, NewLocalVar_0) == 0x000060, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_MakeDateTime_ReturnValue) == 0x000078, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Year) == 0x000080, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Month) == 0x000084, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Day) == 0x000088, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Hour) == 0x00008C, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Minute) == 0x000090, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Second) == 0x000094, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_BreakDateTime_Millisecond) == 0x000098, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue) == 0x0000A0, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_Conv_IntToString_ReturnValue) == 0x0000D0, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000E8, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000160, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000161, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue_1) == 0x000168, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000178, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, Temp_bool_Variable) == 0x000190, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromRoseOrbShopItemMaster, K2Node_Select_Default) == 0x000198, "Member 'BP_SBProductData_C_InitFromRoseOrbShopItemMaster::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDummyItemBox
// 0x0070 (0x0070 - 0x0000)
struct BP_SBProductData_C_InitFromDummyItemBox final
{
public:
	int32                                         DummyItemCountMax;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_969B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_969C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_969D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_969E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue_1;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data_1;         // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_969F[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A0[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromDummyItemBox) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromDummyItemBox");
static_assert(sizeof(BP_SBProductData_C_InitFromDummyItemBox) == 0x000070, "Wrong size on BP_SBProductData_C_InitFromDummyItemBox");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, DummyItemCountMax) == 0x000000, "Member 'BP_SBProductData_C_InitFromDummyItemBox::DummyItemCountMax' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, Temp_int_Variable) == 0x000004, "Member 'BP_SBProductData_C_InitFromDummyItemBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_RandomBool_ReturnValue) == 0x000010, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000020, "Member 'BP_SBProductData_C_InitFromDummyItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_SBProductData_C_InitFromDummyItemBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000034, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, Temp_int_Variable_1) == 0x000038, "Member 'BP_SBProductData_C_InitFromDummyItemBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_SpawnObject_ReturnValue_1) == 0x000048, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, K2Node_DynamicCast_AsBPI_SBProduct_Data_1) == 0x000050, "Member 'BP_SBProductData_C_InitFromDummyItemBox::K2Node_DynamicCast_AsBPI_SBProduct_Data_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_SBProductData_C_InitFromDummyItemBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000064, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDummyItemBox, CallFunc_Array_Add_ReturnValue_1) == 0x00006C, "Member 'BP_SBProductData_C_InitFromDummyItemBox::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromFlatShopProductData
// 0x02B0 (0x02B0 - 0x0000)
struct BP_SBProductData_C_InitFromFlatShopProductData final
{
public:
	struct FSBProductData                         ProductData;                                       // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBProductData                         L_product_data;                                    // 0x00D8(0x00D8)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96A1[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A2[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A3[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFlatShopItemSetMasterData>   CallFunc_BP_GetShopItemSetMaster_ReturnValue;      // 0x01F0(0x0010)(ReferenceParm)
	struct FSBFlatShopItemSetMasterData           CallFunc_Array_Get_Item;                           // 0x0200(0x003C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A4[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96A5[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0270(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A6[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0290(0x0018)()
	struct FDateTime                              K2Node_Select_Default;                             // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromFlatShopProductData) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromFlatShopProductData");
static_assert(sizeof(BP_SBProductData_C_InitFromFlatShopProductData) == 0x0002B0, "Wrong size on BP_SBProductData_C_InitFromFlatShopProductData");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, ProductData) == 0x000000, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::ProductData' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, L_product_data) == 0x0000D8, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::L_product_data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, Temp_int_Array_Index_Variable) == 0x0001B0, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, Temp_int_Loop_Counter_Variable) == 0x0001B4, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Add_IntInt_ReturnValue) == 0x0001B8, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_SpawnObject_ReturnValue) == 0x0001C0, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x0001C8, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Array_Add_ReturnValue) == 0x0001DC, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_GetMasterDataManager_IsValid) == 0x0001E0, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E8, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BP_GetShopItemSetMaster_ReturnValue) == 0x0001F0, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BP_GetShopItemSetMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Array_Get_Item) == 0x000200, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Array_Length_ReturnValue) == 0x00023C, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Less_IntInt_ReturnValue) == 0x000240, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000241, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_GetValidValue_ReturnValue) == 0x000242, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000243, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, Temp_bool_Variable) == 0x000244, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_MakeDateTime_ReturnValue) == 0x000248, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Year) == 0x000250, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Month) == 0x000254, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Day) == 0x000258, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Hour) == 0x00025C, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Minute) == 0x000260, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Second) == 0x000264, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_BreakDateTime_Millisecond) == 0x000268, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Conv_StringToText_ReturnValue) == 0x000270, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000288, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000290, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromFlatShopProductData, K2Node_Select_Default) == 0x0002A8, "Member 'BP_SBProductData_C_InitFromFlatShopProductData::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonRankPointShopProductData
// 0x02B0 (0x02B0 - 0x0000)
struct BP_SBProductData_C_InitFromSeasonRankPointShopProductData final
{
public:
	struct FSBProductData                         ProductData;                                       // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBProductData                         L_product_data;                                    // 0x00D8(0x00D8)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96A7[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A8[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96A9[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFlatShopItemSetMasterData>   CallFunc_BP_GetShopItemSetMaster_ReturnValue;      // 0x01F0(0x0010)(ReferenceParm)
	struct FSBFlatShopItemSetMasterData           CallFunc_Array_Get_Item;                           // 0x0200(0x003C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96AA[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96AB[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0270(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96AC[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0290(0x0018)()
	struct FDateTime                              K2Node_Select_Default;                             // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromSeasonRankPointShopProductData");
static_assert(sizeof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData) == 0x0002B0, "Wrong size on BP_SBProductData_C_InitFromSeasonRankPointShopProductData");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, ProductData) == 0x000000, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::ProductData' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, L_product_data) == 0x0000D8, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::L_product_data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, Temp_int_Array_Index_Variable) == 0x0001B0, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, Temp_int_Loop_Counter_Variable) == 0x0001B4, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Add_IntInt_ReturnValue) == 0x0001B8, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_SpawnObject_ReturnValue) == 0x0001C0, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x0001C8, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Array_Add_ReturnValue) == 0x0001DC, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_GetMasterDataManager_IsValid) == 0x0001E0, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E8, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BP_GetShopItemSetMaster_ReturnValue) == 0x0001F0, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BP_GetShopItemSetMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Array_Get_Item) == 0x000200, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Array_Length_ReturnValue) == 0x00023C, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Less_IntInt_ReturnValue) == 0x000240, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000241, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_GetValidValue_ReturnValue) == 0x000242, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000243, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, Temp_bool_Variable) == 0x000244, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_MakeDateTime_ReturnValue) == 0x000248, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Year) == 0x000250, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Month) == 0x000254, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Day) == 0x000258, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Hour) == 0x00025C, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Minute) == 0x000260, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Second) == 0x000264, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_BreakDateTime_Millisecond) == 0x000268, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Conv_StringToText_ReturnValue) == 0x000270, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000288, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000290, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonRankPointShopProductData, K2Node_Select_Default) == 0x0002A8, "Member 'BP_SBProductData_C_InitFromSeasonRankPointShopProductData::K2Node_Select_Default' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonPassRewardItemData
// 0x0058 (0x0058 - 0x0000)
struct BP_SBProductData_C_InitFromSeasonPassRewardItemData final
{
public:
	class USBSeasonPassMenuRewardItemData*        Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindMasterReward_bExists;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96AD[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x001C(0x0014)(NoDestructor)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_InitFromSeasonPassRewardItemData) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromSeasonPassRewardItemData");
static_assert(sizeof(BP_SBProductData_C_InitFromSeasonPassRewardItemData) == 0x000058, "Wrong size on BP_SBProductData_C_InitFromSeasonPassRewardItemData");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, Data) == 0x000000, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, CallFunc_FindMasterReward_bExists) == 0x000018, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::CallFunc_FindMasterReward_bExists' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, CallFunc_FindMasterReward_ReturnValue) == 0x00001C, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromSeasonPassRewardItemData, CallFunc_IsEmpty_ReturnValue) == 0x000050, "Member 'BP_SBProductData_C_InitFromSeasonPassRewardItemData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromGashaRewardList
// 0x00A0 (0x00A0 - 0x0000)
struct BP_SBProductData_C_InitFromGashaRewardList final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Description;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FSBGashaReward>                 GashaRewardList;                                   // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaReward                         CallFunc_Array_Get_Item;                           // 0x004C(0x0024)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96AE[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96AF[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromGashaRewardList) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromGashaRewardList");
static_assert(sizeof(BP_SBProductData_C_InitFromGashaRewardList) == 0x0000A0, "Wrong size on BP_SBProductData_C_InitFromGashaRewardList");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, Title) == 0x000000, "Member 'BP_SBProductData_C_InitFromGashaRewardList::Title' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, Description) == 0x000018, "Member 'BP_SBProductData_C_InitFromGashaRewardList::Description' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, GashaRewardList) == 0x000030, "Member 'BP_SBProductData_C_InitFromGashaRewardList::GashaRewardList' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_SBProductData_C_InitFromGashaRewardList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, Temp_int_Array_Index_Variable) == 0x000044, "Member 'BP_SBProductData_C_InitFromGashaRewardList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'BP_SBProductData_C_InitFromGashaRewardList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, CallFunc_Array_Get_Item) == 0x00004C, "Member 'BP_SBProductData_C_InitFromGashaRewardList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_SBProductData_C_InitFromGashaRewardList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'BP_SBProductData_C_InitFromGashaRewardList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000078, "Member 'BP_SBProductData_C_InitFromGashaRewardList::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_SBProductData_C_InitFromGashaRewardList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, CallFunc_SpawnObject_ReturnValue) == 0x000090, "Member 'BP_SBProductData_C_InitFromGashaRewardList::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromGashaRewardList, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'BP_SBProductData_C_InitFromGashaRewardList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriod
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductData_C_GetPurchasePeriod final
{
public:
	struct FDateTime                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_GetPurchasePeriod) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetPurchasePeriod");
static_assert(sizeof(BP_SBProductData_C_GetPurchasePeriod) == 0x000008, "Wrong size on BP_SBProductData_C_GetPurchasePeriod");
static_assert(offsetof(BP_SBProductData_C_GetPurchasePeriod, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_GetPurchasePeriod::ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromAdventureBoard
// 0x0014 (0x0014 - 0x0000)
struct BP_SBProductData_C_InitFromAdventureBoard final
{
public:
	struct FSBMasterReward                        MasterReward;                                      // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_InitFromAdventureBoard) == 0x000004, "Wrong alignment on BP_SBProductData_C_InitFromAdventureBoard");
static_assert(sizeof(BP_SBProductData_C_InitFromAdventureBoard) == 0x000014, "Wrong size on BP_SBProductData_C_InitFromAdventureBoard");
static_assert(offsetof(BP_SBProductData_C_InitFromAdventureBoard, MasterReward) == 0x000000, "Member 'BP_SBProductData_C_InitFromAdventureBoard::MasterReward' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.IsHideList
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductData_C_IsHideList final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_IsHideList) == 0x000001, "Wrong alignment on BP_SBProductData_C_IsHideList");
static_assert(sizeof(BP_SBProductData_C_IsHideList) == 0x000001, "Wrong size on BP_SBProductData_C_IsHideList");
static_assert(offsetof(BP_SBProductData_C_IsHideList, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_IsHideList::ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.IsSelectFirstItem
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductData_C_IsSelectFirstItem final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_IsSelectFirstItem) == 0x000001, "Wrong alignment on BP_SBProductData_C_IsSelectFirstItem");
static_assert(sizeof(BP_SBProductData_C_IsSelectFirstItem) == 0x000001, "Wrong size on BP_SBProductData_C_IsSelectFirstItem");
static_assert(offsetof(BP_SBProductData_C_IsSelectFirstItem, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_IsSelectFirstItem::ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenu
// 0x0010 (0x0010 - 0x0000)
struct BP_SBProductData_C_InitFromDetailMenu final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96B0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromDetailMenu) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromDetailMenu");
static_assert(sizeof(BP_SBProductData_C_InitFromDetailMenu) == 0x000010, "Wrong size on BP_SBProductData_C_InitFromDetailMenu");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenu, Data) == 0x000000, "Member 'BP_SBProductData_C_InitFromDetailMenu::Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_SBProductData_C_InitFromDetailMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenu, CallFunc_Array_Add_ReturnValue) == 0x00000C, "Member 'BP_SBProductData_C_InitFromDetailMenu::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMasterReward
// 0x0014 (0x0014 - 0x0000)
struct BP_SBProductData_C_InitFromDetailMenuByMasterReward final
{
public:
	struct FSBMasterReward                        MasterReward;                                      // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_InitFromDetailMenuByMasterReward) == 0x000004, "Wrong alignment on BP_SBProductData_C_InitFromDetailMenuByMasterReward");
static_assert(sizeof(BP_SBProductData_C_InitFromDetailMenuByMasterReward) == 0x000014, "Wrong size on BP_SBProductData_C_InitFromDetailMenuByMasterReward");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMasterReward, MasterReward) == 0x000000, "Member 'BP_SBProductData_C_InitFromDetailMenuByMasterReward::MasterReward' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDungeonSupply
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductData_C_InitFromDetailMenuByDungeonSupply final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_InitFromDetailMenuByDungeonSupply) == 0x000004, "Wrong alignment on BP_SBProductData_C_InitFromDetailMenuByDungeonSupply");
static_assert(sizeof(BP_SBProductData_C_InitFromDetailMenuByDungeonSupply) == 0x000008, "Wrong size on BP_SBProductData_C_InitFromDetailMenuByDungeonSupply");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByDungeonSupply, DungeonSupply) == 0x000000, "Member 'BP_SBProductData_C_InitFromDetailMenuByDungeonSupply::DungeonSupply' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMailDatas
// 0x02D0 (0x02D0 - 0x0000)
struct BP_SBProductData_C_InitFromDetailMenuByMailDatas final
{
public:
	TArray<struct FSBMailData>                    MailDatas;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96B1[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	struct FSBMailData                            CallFunc_Array_Get_Item;                           // 0x0060(0x0190)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96B2[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0200(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96B3[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0228(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0240(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96B4[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0288(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0298(0x0018)()
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x02B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96B5[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromDetailMenuByMailDatas) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromDetailMenuByMailDatas");
static_assert(sizeof(BP_SBProductData_C_InitFromDetailMenuByMailDatas) == 0x0002D0, "Wrong size on BP_SBProductData_C_InitFromDetailMenuByMailDatas");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, MailDatas) == 0x000000, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::MailDatas' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Array_Length_ReturnValue_1) == 0x000014, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, Temp_int_Loop_Counter_Variable) == 0x0001F0, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_GetSBPlayerState_ReturnValue) == 0x0001F8, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_GetCharacterName_self_CastInput) == 0x000200, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_GetCharacterName_ReturnValue) == 0x000210, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Less_IntInt_ReturnValue) == 0x000220, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Conv_StringToText_ReturnValue) == 0x000228, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, K2Node_MakeStruct_FormatArgumentData_1) == 0x000240, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Add_IntInt_ReturnValue) == 0x000280, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, K2Node_MakeArray_Array) == 0x000288, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Format_ReturnValue) == 0x000298, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_SpawnObject_ReturnValue) == 0x0002B0, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x0002B8, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, K2Node_DynamicCast_bSuccess) == 0x0002C8, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByMailDatas, CallFunc_Array_Add_ReturnValue) == 0x0002CC, "Member 'BP_SBProductData_C_InitFromDetailMenuByMailDatas::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByUniqueId
// 0x0040 (0x0040 - 0x0000)
struct BP_SBProductData_C_InitFromDetailMenuByUniqueId final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OverrideAmount;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96B6[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96B7[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromDetailMenuByUniqueId) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromDetailMenuByUniqueId");
static_assert(sizeof(BP_SBProductData_C_InitFromDetailMenuByUniqueId) == 0x000040, "Wrong size on BP_SBProductData_C_InitFromDetailMenuByUniqueId");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, UniqueId) == 0x000000, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::UniqueId' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, OverrideAmount) == 0x000010, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::OverrideAmount' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000028, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByUniqueId, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'BP_SBProductData_C_InitFromDetailMenuByUniqueId::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByRewardData
// 0x0038 (0x0038 - 0x0000)
struct BP_SBProductData_C_InitFromDetailMenuByRewardData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96B8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBonus;                                            // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96B9[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96BA[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitFromDetailMenuByRewardData) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitFromDetailMenuByRewardData");
static_assert(sizeof(BP_SBProductData_C_InitFromDetailMenuByRewardData) == 0x000038, "Wrong size on BP_SBProductData_C_InitFromDetailMenuByRewardData");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, RewardType) == 0x000000, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::RewardType' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, ItemId) == 0x000004, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::ItemId' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, Amount) == 0x000008, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::Amount' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, bBonus) == 0x00000C, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::bBonus' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000020, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitFromDetailMenuByRewardData, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'BP_SBProductData_C_InitFromDetailMenuByRewardData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitMasterReward_Internal
// 0x0040 (0x0040 - 0x0000)
struct BP_SBProductData_C_InitMasterReward_Internal final
{
public:
	struct FSBMasterReward                        MasterReward;                                      // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_96BB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96BC[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitMasterReward_Internal) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitMasterReward_Internal");
static_assert(sizeof(BP_SBProductData_C_InitMasterReward_Internal) == 0x000040, "Wrong size on BP_SBProductData_C_InitMasterReward_Internal");
static_assert(offsetof(BP_SBProductData_C_InitMasterReward_Internal, MasterReward) == 0x000000, "Member 'BP_SBProductData_C_InitMasterReward_Internal::MasterReward' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitMasterReward_Internal, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_SBProductData_C_InitMasterReward_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitMasterReward_Internal, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'BP_SBProductData_C_InitMasterReward_Internal::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitMasterReward_Internal, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000028, "Member 'BP_SBProductData_C_InitMasterReward_Internal::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitMasterReward_Internal, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_SBProductData_C_InitMasterReward_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitMasterReward_Internal, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'BP_SBProductData_C_InitMasterReward_Internal::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.IsTryingFirstItem
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductData_C_IsTryingFirstItem final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_IsTryingFirstItem) == 0x000001, "Wrong alignment on BP_SBProductData_C_IsTryingFirstItem");
static_assert(sizeof(BP_SBProductData_C_IsTryingFirstItem) == 0x000001, "Wrong size on BP_SBProductData_C_IsTryingFirstItem");
static_assert(offsetof(BP_SBProductData_C_IsTryingFirstItem, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_IsTryingFirstItem::ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.InitDungeonSupply_Internal
// 0x0030 (0x0030 - 0x0000)
struct BP_SBProductData_C_InitDungeonSupply_Internal final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_DynamicCast_AsBPI_SBProduct_Data;           // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96BD[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_InitDungeonSupply_Internal) == 0x000008, "Wrong alignment on BP_SBProductData_C_InitDungeonSupply_Internal");
static_assert(sizeof(BP_SBProductData_C_InitDungeonSupply_Internal) == 0x000030, "Wrong size on BP_SBProductData_C_InitDungeonSupply_Internal");
static_assert(offsetof(BP_SBProductData_C_InitDungeonSupply_Internal, DungeonSupply) == 0x000000, "Member 'BP_SBProductData_C_InitDungeonSupply_Internal::DungeonSupply' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitDungeonSupply_Internal, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_SBProductData_C_InitDungeonSupply_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitDungeonSupply_Internal, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_SBProductData_C_InitDungeonSupply_Internal::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitDungeonSupply_Internal, K2Node_DynamicCast_AsBPI_SBProduct_Data) == 0x000018, "Member 'BP_SBProductData_C_InitDungeonSupply_Internal::K2Node_DynamicCast_AsBPI_SBProduct_Data' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitDungeonSupply_Internal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_SBProductData_C_InitDungeonSupply_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_InitDungeonSupply_Internal, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'BP_SBProductData_C_InitDungeonSupply_Internal::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.SetPrice
// 0x0004 (0x0004 - 0x0000)
struct BP_SBProductData_C_SetPrice final
{
public:
	int32                                         Param_Price;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_SetPrice) == 0x000004, "Wrong alignment on BP_SBProductData_C_SetPrice");
static_assert(sizeof(BP_SBProductData_C_SetPrice) == 0x000004, "Wrong size on BP_SBProductData_C_SetPrice");
static_assert(offsetof(BP_SBProductData_C_SetPrice, Param_Price) == 0x000000, "Member 'BP_SBProductData_C_SetPrice::Param_Price' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.IsSoldOut
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductData_C_IsSoldOut final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_IsSoldOut) == 0x000001, "Wrong alignment on BP_SBProductData_C_IsSoldOut");
static_assert(sizeof(BP_SBProductData_C_IsSoldOut) == 0x000008, "Wrong size on BP_SBProductData_C_IsSoldOut");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_IsSoldOut::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000002, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000004, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000005, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_BooleanAND_ReturnValue_1) == 0x000006, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsSoldOut, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'BP_SBProductData_C_IsSoldOut::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductData_C_GetSelectedData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_GetSelectedData) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetSelectedData");
static_assert(sizeof(BP_SBProductData_C_GetSelectedData) == 0x000008, "Wrong size on BP_SBProductData_C_GetSelectedData");
static_assert(offsetof(BP_SBProductData_C_GetSelectedData, Data) == 0x000000, "Member 'BP_SBProductData_C_GetSelectedData::Data' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetDetailType
// 0x0001 (0x0001 - 0x0000)
struct BP_SBProductData_C_GetDetailType final
{
public:
	E_SBProductDetailType                         DetailType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_GetDetailType) == 0x000001, "Wrong alignment on BP_SBProductData_C_GetDetailType");
static_assert(sizeof(BP_SBProductData_C_GetDetailType) == 0x000001, "Wrong size on BP_SBProductData_C_GetDetailType");
static_assert(offsetof(BP_SBProductData_C_GetDetailType, DetailType) == 0x000000, "Member 'BP_SBProductData_C_GetDetailType::DetailType' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.IsCostumeSet
// 0x0020 (0x0020 - 0x0000)
struct BP_SBProductData_C_IsCostumeSet final
{
public:
	bool                                          bReturnValue;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96BE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsCostumeSet_self_CastInput;              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCostumeSet_bReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_IsCostumeSet) == 0x000008, "Wrong alignment on BP_SBProductData_C_IsCostumeSet");
static_assert(sizeof(BP_SBProductData_C_IsCostumeSet) == 0x000020, "Wrong size on BP_SBProductData_C_IsCostumeSet");
static_assert(offsetof(BP_SBProductData_C_IsCostumeSet, bReturnValue) == 0x000000, "Member 'BP_SBProductData_C_IsCostumeSet::bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsCostumeSet, CallFunc_IsCostumeSet_self_CastInput) == 0x000008, "Member 'BP_SBProductData_C_IsCostumeSet::CallFunc_IsCostumeSet_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsCostumeSet, CallFunc_IsCostumeSet_bReturnValue) == 0x000018, "Member 'BP_SBProductData_C_IsCostumeSet::CallFunc_IsCostumeSet_bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsCostumeSet, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_SBProductData_C_IsCostumeSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetIconItemData
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductData_C_GetIconItemData final
{
public:
	class UBP_SBProductItemData_C*                ItemData;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_GetIconItemData) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetIconItemData");
static_assert(sizeof(BP_SBProductData_C_GetIconItemData) == 0x000018, "Wrong size on BP_SBProductData_C_GetIconItemData");
static_assert(offsetof(BP_SBProductData_C_GetIconItemData, ItemData) == 0x000000, "Member 'BP_SBProductData_C_GetIconItemData::ItemData' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetIconItemData, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_SBProductData_C_GetIconItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetIconItemData, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_SBProductData_C_GetIconItemData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.IsItemBox
// 0x0020 (0x0020 - 0x0000)
struct BP_SBProductData_C_IsItemBox final
{
public:
	bool                                          bReturnValue;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96BF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_IsItemBox_self_CastInput;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_IsItemBox) == 0x000008, "Wrong alignment on BP_SBProductData_C_IsItemBox");
static_assert(sizeof(BP_SBProductData_C_IsItemBox) == 0x000020, "Wrong size on BP_SBProductData_C_IsItemBox");
static_assert(offsetof(BP_SBProductData_C_IsItemBox, bReturnValue) == 0x000000, "Member 'BP_SBProductData_C_IsItemBox::bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsItemBox, CallFunc_IsItemBox_self_CastInput) == 0x000008, "Member 'BP_SBProductData_C_IsItemBox::CallFunc_IsItemBox_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsItemBox, CallFunc_IsItemBox_bReturnValue) == 0x000018, "Member 'BP_SBProductData_C_IsItemBox::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_IsItemBox, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_SBProductData_C_IsItemBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetItemBoxDepthIndex
// 0x0008 (0x0008 - 0x0000)
struct BP_SBProductData_C_GetItemBoxDepthIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemBox_bReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_GetItemBoxDepthIndex) == 0x000004, "Wrong alignment on BP_SBProductData_C_GetItemBoxDepthIndex");
static_assert(sizeof(BP_SBProductData_C_GetItemBoxDepthIndex) == 0x000008, "Wrong size on BP_SBProductData_C_GetItemBoxDepthIndex");
static_assert(offsetof(BP_SBProductData_C_GetItemBoxDepthIndex, Param_Index) == 0x000000, "Member 'BP_SBProductData_C_GetItemBoxDepthIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetItemBoxDepthIndex, CallFunc_IsItemBox_bReturnValue) == 0x000004, "Member 'BP_SBProductData_C_GetItemBoxDepthIndex::CallFunc_IsItemBox_bReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetParentData
// 0x0018 (0x0018 - 0x0000)
struct BP_SBProductData_C_GetParentData final
{
public:
	bool                                          bIsValid;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96C0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  ParentData;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBProductData_C_GetParentData) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetParentData");
static_assert(sizeof(BP_SBProductData_C_GetParentData) == 0x000018, "Wrong size on BP_SBProductData_C_GetParentData");
static_assert(offsetof(BP_SBProductData_C_GetParentData, bIsValid) == 0x000000, "Member 'BP_SBProductData_C_GetParentData::bIsValid' has a wrong offset!");
static_assert(offsetof(BP_SBProductData_C_GetParentData, ParentData) == 0x000008, "Member 'BP_SBProductData_C_GetParentData::ParentData' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BP_SBProductData_C_GetScrollOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SBProductData_C_GetScrollOffset) == 0x000004, "Wrong alignment on BP_SBProductData_C_GetScrollOffset");
static_assert(sizeof(BP_SBProductData_C_GetScrollOffset) == 0x000004, "Wrong size on BP_SBProductData_C_GetScrollOffset");
static_assert(offsetof(BP_SBProductData_C_GetScrollOffset, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_GetScrollOffset::ReturnValue' has a wrong offset!");

// Function BP_SBProductData.BP_SBProductData_C.GetItemDataList
// 0x0010 (0x0010 - 0x0000)
struct BP_SBProductData_C_GetItemDataList final
{
public:
	TArray<class UBP_SBProductItemData_C*>        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_SBProductData_C_GetItemDataList) == 0x000008, "Wrong alignment on BP_SBProductData_C_GetItemDataList");
static_assert(sizeof(BP_SBProductData_C_GetItemDataList) == 0x000010, "Wrong size on BP_SBProductData_C_GetItemDataList");
static_assert(offsetof(BP_SBProductData_C_GetItemDataList, ReturnValue) == 0x000000, "Member 'BP_SBProductData_C_GetItemDataList::ReturnValue' has a wrong offset!");

}

