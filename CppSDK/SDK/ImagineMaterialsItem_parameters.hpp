#pragma once

 

// Package: ImagineMaterialsItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ImagineMaterialsItem.ImagineMaterialsItem_C.ExecuteUbergraph_ImagineMaterialsItem
// 0x0358 (0x0358 - 0x0000)
struct ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C4E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C4F[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0060(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C50[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImagineMaterial                 K2Node_CustomEvent_Material;                       // 0x0098(0x000C)(NoDestructor)
	bool                                          CallFunc_isCraftMaterialLocked_ReturnValue;        // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C51[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C52[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x00C8(0x00D0)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C53[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x01A0(0x00D0)()
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C54[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C55[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0290(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C56[0x5];                                     // 0x02AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C57[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02C0(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x02D8(0x0028)()
	bool                                          Temp_bool_Variable_3;                              // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C58[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0308(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x0330(0x0028)()
};
static_assert(alignof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem) == 0x000008, "Wrong alignment on ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem");
static_assert(sizeof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem) == 0x000358, "Wrong size on ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, EntryPoint) == 0x000000, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000030, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, Temp_bool_Variable) == 0x000031, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_MakeStruct_SlateColor_2) == 0x000060, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000088, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, Temp_bool_Variable_1) == 0x000089, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, Temp_bool_Variable_2) == 0x00008A, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00008B, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00008C, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_GetMasterDataManager_IsValid) == 0x00008D, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_CustomEvent_Material) == 0x000098, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_CustomEvent_Material' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_isCraftMaterialLocked_ReturnValue) == 0x0000A4, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_isCraftMaterialLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A8, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_Select_Default) == 0x0000C0, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_FindItemMaster_bIsValid) == 0x0000C1, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_FindItemMaster_ItemMaster) == 0x0000C8, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_GetItemMasterData_IsExists) == 0x000198, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_GetItemMasterData_ReturnValue) == 0x0001A0, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_IsEventTermActive_ReturnValue) == 0x000270, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_GetItemText_ReturnValue) == 0x000278, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_Not_PreBool_ReturnValue) == 0x000288, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000290, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_IsEmpty_ReturnValue) == 0x0002A8, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002A9, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_BooleanAND_ReturnValue) == 0x0002AA, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_GetCharacterStorage_ReturnValue) == 0x0002B0, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x0002B8, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_Greater_IntInt_ReturnValue) == 0x0002BC, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002C0, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_Select_Default_1) == 0x0002D8, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, Temp_bool_Variable_3) == 0x000300, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_Select_Default_2) == 0x000301, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_MakeStruct_SlateColor_3) == 0x000308, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem, K2Node_Select_Default_3) == 0x000330, "Member 'ImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem::K2Node_Select_Default_3' has a wrong offset!");

// Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetMaterialData
// 0x000C (0x000C - 0x0000)
struct ImagineMaterialsItem_C_SetMaterialData final
{
public:
	struct FMasterImagineMaterial                 Param_Material;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ImagineMaterialsItem_C_SetMaterialData) == 0x000004, "Wrong alignment on ImagineMaterialsItem_C_SetMaterialData");
static_assert(sizeof(ImagineMaterialsItem_C_SetMaterialData) == 0x00000C, "Wrong size on ImagineMaterialsItem_C_SetMaterialData");
static_assert(offsetof(ImagineMaterialsItem_C_SetMaterialData, Param_Material) == 0x000000, "Member 'ImagineMaterialsItem_C_SetMaterialData::Param_Material' has a wrong offset!");

}

