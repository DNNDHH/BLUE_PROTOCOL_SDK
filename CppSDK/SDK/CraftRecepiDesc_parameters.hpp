#pragma once

 

// Package: CraftRecepiDesc

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CraftRecepiDesc.CraftRecepiDesc_C.ExecuteUbergraph_CraftRecepiDesc
// 0x01C0 (0x01C0 - 0x0000)
struct CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EA[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_2;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EB[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x001C(0x000C)(NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_3;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EC[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData_1;                // 0x0050(0x000C)(NoDestructor)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue_1;         // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67ED[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InItemId;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList_1; // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue; // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67EE[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_RecepiData;                     // 0x0070(0x0008)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue_1; // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67EF[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F0[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0090(0x0088)(ConstParm)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     K2Node_Select_Default;                             // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeoutItem_ReturnValue;                // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F1[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMasterData_isExists_1;           // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F2[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue_1;        // 0x0130(0x0088)(ConstParm)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     K2Node_Select_Default_1;                           // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeoutItem_ReturnValue_1;              // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x01BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc) == 0x000008, "Wrong alignment on CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc");
static_assert(sizeof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc) == 0x0001C0, "Wrong size on CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, EntryPoint) == 0x000000, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, Temp_bool_Variable) == 0x000004, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, Temp_byte_Variable) == 0x000005, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, Temp_byte_Variable_1) == 0x000006, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, Temp_byte_Variable_2) == 0x000018, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, K2Node_MakeStruct_SBWishListData) == 0x00001C, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetCharacterId_ReturnValue_1) == 0x000028, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_IsRegistedWishlist_ReturnValue) == 0x000038, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003A, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_2) == 0x00003B, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, Temp_byte_Variable_3) == 0x00003C, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetCharacterId_ReturnValue_2) == 0x000040, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, K2Node_MakeStruct_SBWishListData_1) == 0x000050, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::K2Node_MakeStruct_SBWishListData_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x00005C, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_IsRegistedWishlist_ReturnValue_1) == 0x00005D, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_IsRegistedWishlist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, K2Node_CustomEvent_InItemId) == 0x000060, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::K2Node_CustomEvent_InItemId' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_3) == 0x000064, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_4) == 0x000065, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_5) == 0x000066, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanAND_ReturnValue) == 0x000067, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList_1) == 0x000068, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, Temp_bool_Variable_1) == 0x000069, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanAND_ReturnValue_1) == 0x00006A, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue) == 0x00006B, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanAND_ReturnValue_2) == 0x00006C, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, K2Node_CustomEvent_RecepiData) == 0x000070, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::K2Node_CustomEvent_RecepiData' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanOR_ReturnValue) == 0x000078, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue_1) == 0x000079, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetMasterDataManager_IsValid) == 0x00007A, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanAND_ReturnValue_3) == 0x000088, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_FindCraftMasterData_isExists) == 0x000089, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_FindCraftMasterData_ReturnValue) == 0x000090, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanOR_ReturnValue_1) == 0x000118, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, K2Node_Select_Default) == 0x000119, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_IsTimeoutItem_ReturnValue) == 0x00011A, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_IsTimeoutItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetMasterDataManager_IsValid_1) == 0x00011B, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000120, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanAND_ReturnValue_4) == 0x000128, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_FindCraftMasterData_isExists_1) == 0x000129, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_FindCraftMasterData_isExists_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_FindCraftMasterData_ReturnValue_1) == 0x000130, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_FindCraftMasterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanOR_ReturnValue_2) == 0x0001B8, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_6) == 0x0001B9, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, K2Node_Select_Default_1) == 0x0001BA, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_IsTimeoutItem_ReturnValue_1) == 0x0001BB, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_IsTimeoutItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanAND_ReturnValue_5) == 0x0001BC, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_BooleanOR_ReturnValue_3) == 0x0001BD, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc, CallFunc_Not_PreBool_ReturnValue_7) == 0x0001BE, "Member 'CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");

// Function CraftRecepiDesc.CraftRecepiDesc_C.SetRecepiData
// 0x0008 (0x0008 - 0x0000)
struct CraftRecepiDesc_C_SetRecepiData final
{
public:
	struct FCharacterCraftRecepi                  Param_RecepiData;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CraftRecepiDesc_C_SetRecepiData) == 0x000004, "Wrong alignment on CraftRecepiDesc_C_SetRecepiData");
static_assert(sizeof(CraftRecepiDesc_C_SetRecepiData) == 0x000008, "Wrong size on CraftRecepiDesc_C_SetRecepiData");
static_assert(offsetof(CraftRecepiDesc_C_SetRecepiData, Param_RecepiData) == 0x000000, "Member 'CraftRecepiDesc_C_SetRecepiData::Param_RecepiData' has a wrong offset!");

// Function CraftRecepiDesc.CraftRecepiDesc_C.LoadImage
// 0x0004 (0x0004 - 0x0000)
struct CraftRecepiDesc_C_LoadImage final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDesc_C_LoadImage) == 0x000004, "Wrong alignment on CraftRecepiDesc_C_LoadImage");
static_assert(sizeof(CraftRecepiDesc_C_LoadImage) == 0x000004, "Wrong size on CraftRecepiDesc_C_LoadImage");
static_assert(offsetof(CraftRecepiDesc_C_LoadImage, InItemID) == 0x000000, "Member 'CraftRecepiDesc_C_LoadImage::InItemID' has a wrong offset!");

// Function CraftRecepiDesc.CraftRecepiDesc_C.CalclateMoney
// 0x0250 (0x0250 - 0x0000)
struct CraftRecepiDesc_C_CalclateMoney final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDiscount;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWeaponActive;                                     // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F3[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Remain_Weapon_Const;                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WeaponLiquidMemoryConstReduction;                  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkCostReduction;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RewardBoostCostReduction;                          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRewardBoostActive;                                // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F4[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LiquidMemoryConstReduction;                        // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F5[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Money;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseMoney;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Remain_Count;                                      // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftMasterData                       Master;                                            // 0x0030(0x0088)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F6[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F7[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F8[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67F9[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67FA[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0130(0x0028)(NoDestructor)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid; // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67FB[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue; // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1; // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67FC[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1; // 0x0170(0x0028)(NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid_1; // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67FD[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue_1; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67FE[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67FF[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCraftCostReduction_CostReduction;      // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCraftCostReduction_ReturnValue;        // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6800[0x2];                                     // 0x01C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x01C8(0x0088)(ConstParm)
};
static_assert(alignof(CraftRecepiDesc_C_CalclateMoney) == 0x000008, "Wrong alignment on CraftRecepiDesc_C_CalclateMoney");
static_assert(sizeof(CraftRecepiDesc_C_CalclateMoney) == 0x000250, "Wrong size on CraftRecepiDesc_C_CalclateMoney");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, ReturnValue) == 0x000000, "Member 'CraftRecepiDesc_C_CalclateMoney::ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, bIsDiscount) == 0x000004, "Member 'CraftRecepiDesc_C_CalclateMoney::bIsDiscount' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, bWeaponActive) == 0x000005, "Member 'CraftRecepiDesc_C_CalclateMoney::bWeaponActive' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Remain_Weapon_Const) == 0x000008, "Member 'CraftRecepiDesc_C_CalclateMoney::Remain_Weapon_Const' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, WeaponLiquidMemoryConstReduction) == 0x00000C, "Member 'CraftRecepiDesc_C_CalclateMoney::WeaponLiquidMemoryConstReduction' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, WorkCostReduction) == 0x000010, "Member 'CraftRecepiDesc_C_CalclateMoney::WorkCostReduction' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, RewardBoostCostReduction) == 0x000014, "Member 'CraftRecepiDesc_C_CalclateMoney::RewardBoostCostReduction' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, bRewardBoostActive) == 0x000018, "Member 'CraftRecepiDesc_C_CalclateMoney::bRewardBoostActive' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, LiquidMemoryConstReduction) == 0x00001C, "Member 'CraftRecepiDesc_C_CalclateMoney::LiquidMemoryConstReduction' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, bActive) == 0x000020, "Member 'CraftRecepiDesc_C_CalclateMoney::bActive' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Money) == 0x000024, "Member 'CraftRecepiDesc_C_CalclateMoney::Money' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, UseMoney) == 0x000028, "Member 'CraftRecepiDesc_C_CalclateMoney::UseMoney' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Remain_Count) == 0x00002C, "Member 'CraftRecepiDesc_C_CalclateMoney::Remain_Count' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Master) == 0x000030, "Member 'CraftRecepiDesc_C_CalclateMoney::Master' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Temp_int_Variable) == 0x0000B8, "Member 'CraftRecepiDesc_C_CalclateMoney::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Temp_bool_Variable) == 0x0000BC, "Member 'CraftRecepiDesc_C_CalclateMoney::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Temp_int_Variable_1) == 0x0000C0, "Member 'CraftRecepiDesc_C_CalclateMoney::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Temp_int_Variable_2) == 0x0000C4, "Member 'CraftRecepiDesc_C_CalclateMoney::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Conv_IntToString_ReturnValue) == 0x0000C8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_BooleanOR_ReturnValue) == 0x0000DC, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_BooleanOR_ReturnValue_1) == 0x0000DD, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Greater_IntInt_ReturnValue) == 0x0000DE, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_BooleanAND_ReturnValue) == 0x0000DF, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_SelectFloat_ReturnValue) == 0x0000E0, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000E4, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Not_PreBool_ReturnValue) == 0x0000E8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000EC, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000F0, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0000F8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000100, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_BooleanAND_ReturnValue_1) == 0x000101, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, Temp_float_Variable) == 0x000104, "Member 'CraftRecepiDesc_C_CalclateMoney::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, K2Node_Select_Default) == 0x000108, "Member 'CraftRecepiDesc_C_CalclateMoney::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Add_FloatFloat_ReturnValue) == 0x00010C, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000110, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000114, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetNetworkDataCache_IsValid) == 0x000118, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000120, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000128, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x00012C, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000130, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FFloor_ReturnValue) == 0x000158, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Add_IntInt_ReturnValue_1) == 0x00015C, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_BooleanAND_ReturnValue_2) == 0x000160, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid) == 0x000161, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue) == 0x000164, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1) == 0x000168, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1) == 0x000170, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000198, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid_1) == 0x00019C, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue_1) == 0x0001A0, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0001A4, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetMasterDataManager_IsValid) == 0x0001A8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001B0, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0001B8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001BC, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetCraftCostReduction_CostReduction) == 0x0001C0, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetCraftCostReduction_CostReduction' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_GetCraftCostReduction_ReturnValue) == 0x0001C4, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_GetCraftCostReduction_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FindCraftMasterData_isExists) == 0x0001C5, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_CalclateMoney, CallFunc_FindCraftMasterData_ReturnValue) == 0x0001C8, "Member 'CraftRecepiDesc_C_CalclateMoney::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");

// Function CraftRecepiDesc.CraftRecepiDesc_C.IsCraftable
// 0x0001 (0x0001 - 0x0000)
struct CraftRecepiDesc_C_IsCraftable final
{
public:
	bool                                          Param_bIsCraftable;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftRecepiDesc_C_IsCraftable) == 0x000001, "Wrong alignment on CraftRecepiDesc_C_IsCraftable");
static_assert(sizeof(CraftRecepiDesc_C_IsCraftable) == 0x000001, "Wrong size on CraftRecepiDesc_C_IsCraftable");
static_assert(offsetof(CraftRecepiDesc_C_IsCraftable, Param_bIsCraftable) == 0x000000, "Member 'CraftRecepiDesc_C_IsCraftable::Param_bIsCraftable' has a wrong offset!");

// Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneyAndItemList
// 0x01E8 (0x01E8 - 0x0000)
struct CraftRecepiDesc_C_UpdateMoneyAndItemList final
{
public:
	struct FCraftMasterData                       TmpCraftMasterData;                                // 0x0000(0x0088)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6801[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0098(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00C0(0x0028)()
	struct FCraftNeedItems                        CallFunc_Array_Get_Item;                           // 0x00E8(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6802[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalclateMoney_ReturnValue;                // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalclateMoney_bIsDiscount;                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6803[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6804[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0110(0x0088)(ConstParm)
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0198(0x0028)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01C0(0x0018)()
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftNeedItems                        K2Node_MakeStruct_CraftNeedItems;                  // 0x01DC(0x0008)(NoDestructor)
	bool                                          CallFunc_Add_OutIsCraftable;                       // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftRecepiDesc_C_UpdateMoneyAndItemList) == 0x000008, "Wrong alignment on CraftRecepiDesc_C_UpdateMoneyAndItemList");
static_assert(sizeof(CraftRecepiDesc_C_UpdateMoneyAndItemList) == 0x0001E8, "Wrong size on CraftRecepiDesc_C_UpdateMoneyAndItemList");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, TmpCraftMasterData) == 0x000000, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::TmpCraftMasterData' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, Temp_bool_Variable) == 0x000088, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, Temp_int_Array_Index_Variable) == 0x00008C, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, Temp_int_Loop_Counter_Variable) == 0x000090, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, K2Node_MakeStruct_SlateColor) == 0x000098, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, K2Node_MakeStruct_SlateColor_1) == 0x0000C0, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_CalclateMoney_ReturnValue) == 0x0000F8, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_CalclateMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_CalclateMoney_bIsDiscount) == 0x0000FC, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_CalclateMoney_bIsDiscount' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_GetMasterDataManager_IsValid) == 0x0000FD, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000100, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_FindCraftMasterData_isExists) == 0x000108, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_FindCraftMasterData_ReturnValue) == 0x000110, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, K2Node_Select_Default) == 0x000198, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Conv_IntToText_ReturnValue) == 0x0001C0, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Multiply_IntInt_ReturnValue) == 0x0001D8, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, K2Node_MakeStruct_CraftNeedItems) == 0x0001DC, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::K2Node_MakeStruct_CraftNeedItems' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_Add_OutIsCraftable) == 0x0001E4, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_Add_OutIsCraftable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDesc_C_UpdateMoneyAndItemList, CallFunc_BooleanAND_ReturnValue) == 0x0001E5, "Member 'CraftRecepiDesc_C_UpdateMoneyAndItemList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

