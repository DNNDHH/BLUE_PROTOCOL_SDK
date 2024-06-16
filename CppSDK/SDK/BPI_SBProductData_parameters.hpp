#pragma once

 

// Package: BPI_SBProductData

#include "Basic.hpp"

#include "E_SBProductDetailType_structs.hpp"


namespace SDK::Params
{

// Function BPI_SBProductData.BPI_SBProductData_C.SetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BPI_SBProductData_C_SetScrollOffset final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_SetScrollOffset) == 0x000004, "Wrong alignment on BPI_SBProductData_C_SetScrollOffset");
static_assert(sizeof(BPI_SBProductData_C_SetScrollOffset) == 0x000004, "Wrong size on BPI_SBProductData_C_SetScrollOffset");
static_assert(offsetof(BPI_SBProductData_C_SetScrollOffset, Value) == 0x000000, "Member 'BPI_SBProductData_C_SetScrollOffset::Value' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct BPI_SBProductData_C_GetSelectedData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_GetSelectedData) == 0x000008, "Wrong alignment on BPI_SBProductData_C_GetSelectedData");
static_assert(sizeof(BPI_SBProductData_C_GetSelectedData) == 0x000008, "Wrong size on BPI_SBProductData_C_GetSelectedData");
static_assert(offsetof(BPI_SBProductData_C_GetSelectedData, Data) == 0x000000, "Member 'BPI_SBProductData_C_GetSelectedData::Data' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.SetSelectedData
// 0x0008 (0x0008 - 0x0000)
struct BPI_SBProductData_C_SetSelectedData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_SetSelectedData) == 0x000008, "Wrong alignment on BPI_SBProductData_C_SetSelectedData");
static_assert(sizeof(BPI_SBProductData_C_SetSelectedData) == 0x000008, "Wrong size on BPI_SBProductData_C_SetSelectedData");
static_assert(offsetof(BPI_SBProductData_C_SetSelectedData, Data) == 0x000000, "Member 'BPI_SBProductData_C_SetSelectedData::Data' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetDetailType
// 0x0001 (0x0001 - 0x0000)
struct BPI_SBProductData_C_GetDetailType final
{
public:
	E_SBProductDetailType                         DetailType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_GetDetailType) == 0x000001, "Wrong alignment on BPI_SBProductData_C_GetDetailType");
static_assert(sizeof(BPI_SBProductData_C_GetDetailType) == 0x000001, "Wrong size on BPI_SBProductData_C_GetDetailType");
static_assert(offsetof(BPI_SBProductData_C_GetDetailType, DetailType) == 0x000000, "Member 'BPI_SBProductData_C_GetDetailType::DetailType' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.IsCostumeSet
// 0x0001 (0x0001 - 0x0000)
struct BPI_SBProductData_C_IsCostumeSet final
{
public:
	bool                                          bReturnValue;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SBProductData_C_IsCostumeSet) == 0x000001, "Wrong alignment on BPI_SBProductData_C_IsCostumeSet");
static_assert(sizeof(BPI_SBProductData_C_IsCostumeSet) == 0x000001, "Wrong size on BPI_SBProductData_C_IsCostumeSet");
static_assert(offsetof(BPI_SBProductData_C_IsCostumeSet, bReturnValue) == 0x000000, "Member 'BPI_SBProductData_C_IsCostumeSet::bReturnValue' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetIconItemData
// 0x0008 (0x0008 - 0x0000)
struct BPI_SBProductData_C_GetIconItemData final
{
public:
	class UBP_SBProductItemData_C*                ItemData;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_GetIconItemData) == 0x000008, "Wrong alignment on BPI_SBProductData_C_GetIconItemData");
static_assert(sizeof(BPI_SBProductData_C_GetIconItemData) == 0x000008, "Wrong size on BPI_SBProductData_C_GetIconItemData");
static_assert(offsetof(BPI_SBProductData_C_GetIconItemData, ItemData) == 0x000000, "Member 'BPI_SBProductData_C_GetIconItemData::ItemData' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.IsItemBox
// 0x0001 (0x0001 - 0x0000)
struct BPI_SBProductData_C_IsItemBox final
{
public:
	bool                                          bReturnValue;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SBProductData_C_IsItemBox) == 0x000001, "Wrong alignment on BPI_SBProductData_C_IsItemBox");
static_assert(sizeof(BPI_SBProductData_C_IsItemBox) == 0x000001, "Wrong size on BPI_SBProductData_C_IsItemBox");
static_assert(offsetof(BPI_SBProductData_C_IsItemBox, bReturnValue) == 0x000000, "Member 'BPI_SBProductData_C_IsItemBox::bReturnValue' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetItemBoxDepthIndex
// 0x0004 (0x0004 - 0x0000)
struct BPI_SBProductData_C_GetItemBoxDepthIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_GetItemBoxDepthIndex) == 0x000004, "Wrong alignment on BPI_SBProductData_C_GetItemBoxDepthIndex");
static_assert(sizeof(BPI_SBProductData_C_GetItemBoxDepthIndex) == 0x000004, "Wrong size on BPI_SBProductData_C_GetItemBoxDepthIndex");
static_assert(offsetof(BPI_SBProductData_C_GetItemBoxDepthIndex, Param_Index) == 0x000000, "Member 'BPI_SBProductData_C_GetItemBoxDepthIndex::Param_Index' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetParentData
// 0x0018 (0x0018 - 0x0000)
struct BPI_SBProductData_C_GetParentData final
{
public:
	bool                                          bIsValid;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  ParentData;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SBProductData_C_GetParentData) == 0x000008, "Wrong alignment on BPI_SBProductData_C_GetParentData");
static_assert(sizeof(BPI_SBProductData_C_GetParentData) == 0x000018, "Wrong size on BPI_SBProductData_C_GetParentData");
static_assert(offsetof(BPI_SBProductData_C_GetParentData, bIsValid) == 0x000000, "Member 'BPI_SBProductData_C_GetParentData::bIsValid' has a wrong offset!");
static_assert(offsetof(BPI_SBProductData_C_GetParentData, ParentData) == 0x000008, "Member 'BPI_SBProductData_C_GetParentData::ParentData' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BPI_SBProductData_C_GetScrollOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBProductData_C_GetScrollOffset) == 0x000004, "Wrong alignment on BPI_SBProductData_C_GetScrollOffset");
static_assert(sizeof(BPI_SBProductData_C_GetScrollOffset) == 0x000004, "Wrong size on BPI_SBProductData_C_GetScrollOffset");
static_assert(offsetof(BPI_SBProductData_C_GetScrollOffset, ReturnValue) == 0x000000, "Member 'BPI_SBProductData_C_GetScrollOffset::ReturnValue' has a wrong offset!");

// Function BPI_SBProductData.BPI_SBProductData_C.GetItemDataList
// 0x0010 (0x0010 - 0x0000)
struct BPI_SBProductData_C_GetItemDataList final
{
public:
	TArray<class UBP_SBProductItemData_C*>        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BPI_SBProductData_C_GetItemDataList) == 0x000008, "Wrong alignment on BPI_SBProductData_C_GetItemDataList");
static_assert(sizeof(BPI_SBProductData_C_GetItemDataList) == 0x000010, "Wrong size on BPI_SBProductData_C_GetItemDataList");
static_assert(offsetof(BPI_SBProductData_C_GetItemDataList, ReturnValue) == 0x000000, "Member 'BPI_SBProductData_C_GetItemDataList::ReturnValue' has a wrong offset!");

}

