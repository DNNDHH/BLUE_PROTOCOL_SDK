#pragma once

 

// Package: WeaponSynthePart_ItemBoxItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.ExecuteUbergraph_WeaponSynthePart_ItemBoxItem
// 0x0238 (0x0238 - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D44[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemId;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D45[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0070(0x0018)()
	bool                                          CallFunc_IsCondition_Result;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D46[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D47[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00A8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C0(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D48[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D49[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x00EC(0x0018)(NoDestructor)
	uint8                                         Pad_5D4A[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0108(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4B[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4C[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0160(0x00D0)()
	bool                                          Temp_bool_Variable;                                // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0233(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLockedItem_ReturnValue;                 // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem) == 0x000008, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem) == 0x000238, "Wrong size on WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, Temp_byte_Variable) == 0x000004, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, Temp_byte_Variable_1) == 0x000005, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, K2Node_CustomEvent_ItemId) == 0x000008, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::K2Node_CustomEvent_ItemId' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000020, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000060, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000070, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_IsCondition_Result) == 0x000088, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_IsCondition_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetItemText_ReturnValue) == 0x000090, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x0000A0, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000A8, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C0, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetMasterDataManager_IsValid) == 0x0000D8, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E0, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_BP_FindMasterFusionItem_Exists) == 0x0000E8, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x0000EC, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000108, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000120, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000130, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000138, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000148, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_FindItemMaster_bIsValid) == 0x000158, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_FindItemMaster_ItemMaster) == 0x000160, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, Temp_bool_Variable) == 0x000230, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000231, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, K2Node_Select_Default) == 0x000232, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000233, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, Temp_bool_Variable_1) == 0x000234, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, CallFunc_IsLockedItem_ReturnValue) == 0x000235, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::CallFunc_IsLockedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem, K2Node_Select_Default_1) == 0x000236, "Member 'WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem::K2Node_Select_Default_1' has a wrong offset!");

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.SetItemData
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_SetItemData final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_SetItemData) == 0x000004, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_SetItemData");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_SetItemData) == 0x000004, "Wrong size on WeaponSynthePart_ItemBoxItem_C_SetItemData");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_SetItemData, ItemId) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_SetItemData::ItemId' has a wrong offset!");

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.GetItemData
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_GetItemData final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_GetItemData) == 0x000004, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_GetItemData");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_GetItemData) == 0x000004, "Wrong size on WeaponSynthePart_ItemBoxItem_C_GetItemData");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_GetItemData, ItemId) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_GetItemData::ItemId' has a wrong offset!");

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.SetColorTextNeedNum
// 0x0080 (0x0080 - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum) == 0x000008, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum) == 0x000080, "Wrong size on WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum, IsActive) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum::IsActive' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum, K2Node_Select_Default) == 0x000058, "Member 'WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.IsCondition
// 0x000C (0x000C - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_IsCondition final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_IsCondition) == 0x000004, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_IsCondition");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_IsCondition) == 0x00000C, "Wrong size on WeaponSynthePart_ItemBoxItem_C_IsCondition");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsCondition, Result) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_IsCondition::Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsCondition, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000004, "Member 'WeaponSynthePart_ItemBoxItem_C_IsCondition::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsCondition, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_ItemBoxItem_C_IsCondition::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.Nodata
// 0x0028 (0x0028 - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_Nodata final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_Nodata) == 0x000008, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_Nodata");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_Nodata) == 0x000028, "Wrong size on WeaponSynthePart_ItemBoxItem_C_Nodata");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_Nodata, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_Nodata::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_Nodata, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_ItemBoxItem_C_Nodata::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.IsLockedItem
// 0x0006 (0x0006 - 0x0000)
struct WeaponSynthePart_ItemBoxItem_C_IsLockedItem final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLocked_OutRequiredCnt;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLocked_ReturnValue;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_OutRequiredCnt;       // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem) == 0x000001, "Wrong alignment on WeaponSynthePart_ItemBoxItem_C_IsLockedItem");
static_assert(sizeof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem) == 0x000006, "Wrong size on WeaponSynthePart_ItemBoxItem_C_IsLockedItem");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem, ReturnValue) == 0x000000, "Member 'WeaponSynthePart_ItemBoxItem_C_IsLockedItem::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem, CallFunc_isInventoryItemLocked_OutRequiredCnt) == 0x000001, "Member 'WeaponSynthePart_ItemBoxItem_C_IsLockedItem::CallFunc_isInventoryItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem, CallFunc_isInventoryItemLocked_ReturnValue) == 0x000002, "Member 'WeaponSynthePart_ItemBoxItem_C_IsLockedItem::CallFunc_isInventoryItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem, CallFunc_isStorageItemLocked_OutRequiredCnt) == 0x000003, "Member 'WeaponSynthePart_ItemBoxItem_C_IsLockedItem::CallFunc_isStorageItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem, CallFunc_isStorageItemLocked_ReturnValue) == 0x000004, "Member 'WeaponSynthePart_ItemBoxItem_C_IsLockedItem::CallFunc_isStorageItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ItemBoxItem_C_IsLockedItem, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'WeaponSynthePart_ItemBoxItem_C_IsLockedItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

