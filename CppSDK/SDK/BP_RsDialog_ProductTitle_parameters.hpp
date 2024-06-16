#pragma once

 

// Package: BP_RsDialog_ProductTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.ExecuteUbergraph_BP_RsDialog_ProductTitle
// 0x00C0 (0x00C0 - 0x0000)
struct BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_Type;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId_1;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0048(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5520[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5521[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetShopItemSetMasterByShopItemId_IsExists; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5522[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFlatShopItemSetMasterData           CallFunc_BP_GetShopItemSetMasterByShopItemId_ReturnValue; // 0x007C(0x003C)(NoDestructor)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue_1;         // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType;        // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle) == 0x000008, "Wrong alignment on BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle");
static_assert(sizeof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle) == 0x0000C0, "Wrong size on BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, EntryPoint) == 0x000000, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_CustomEvent_Type) == 0x000004, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_CustomEvent_ItemSetId_1) == 0x000008, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_CustomEvent_ItemSetId_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_CustomEvent_ProductName) == 0x000010, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_CustomEvent_RankFrom) == 0x000028, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_CustomEvent_RankTo) == 0x00002C, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000048, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_MakeLiteralByte_ReturnValue) == 0x000061, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, K2Node_CustomEvent_ItemSetId) == 0x000064, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_BP_GetShopItemSetMasterByShopItemId_IsExists) == 0x000078, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_BP_GetShopItemSetMasterByShopItemId_IsExists' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_BP_GetShopItemSetMasterByShopItemId_ReturnValue) == 0x00007C, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_BP_GetShopItemSetMasterByShopItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_LessEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_LessEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000B9, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000BA, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_GetValidValue_ReturnValue) == 0x0000BB, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_LessEqual_ByteByte_ReturnValue_1) == 0x0000BC, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_LessEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_BooleanAND_ReturnValue) == 0x0000BD, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle, CallFunc_RewardItemTypeToItemType_ItemType) == 0x0000BE, "Member 'BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle::CallFunc_RewardItemTypeToItemType_ItemType' has a wrong offset!");

// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.LoadTexture_CmnIcon
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon final
{
public:
	int32                                         ItemSetId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon) == 0x000004, "Wrong alignment on BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon");
static_assert(sizeof(BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon) == 0x000004, "Wrong size on BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon, ItemSetId) == 0x000000, "Member 'BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon::ItemSetId' has a wrong offset!");

// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.SetProductTitleInfo
// 0x0028 (0x0028 - 0x0000)
struct BP_RsDialog_ProductTitle_C_SetProductTitleInfo final
{
public:
	ERsDialogProductTitleType                     Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5523[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo) == 0x000008, "Wrong alignment on BP_RsDialog_ProductTitle_C_SetProductTitleInfo");
static_assert(sizeof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo) == 0x000028, "Wrong size on BP_RsDialog_ProductTitle_C_SetProductTitleInfo");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo, Type) == 0x000000, "Member 'BP_RsDialog_ProductTitle_C_SetProductTitleInfo::Type' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_ProductTitle_C_SetProductTitleInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_ProductTitle_C_SetProductTitleInfo::ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo, RankFrom) == 0x000020, "Member 'BP_RsDialog_ProductTitle_C_SetProductTitleInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetProductTitleInfo, RankTo) == 0x000024, "Member 'BP_RsDialog_ProductTitle_C_SetProductTitleInfo::RankTo' has a wrong offset!");

// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.SetSelectNum
// 0x00A8 (0x00A8 - 0x0000)
struct BP_RsDialog_ProductTitle_C_SetSelectNum final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5524[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5525[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5526[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(BP_RsDialog_ProductTitle_C_SetSelectNum) == 0x000008, "Wrong alignment on BP_RsDialog_ProductTitle_C_SetSelectNum");
static_assert(sizeof(BP_RsDialog_ProductTitle_C_SetSelectNum) == 0x0000A8, "Wrong size on BP_RsDialog_ProductTitle_C_SetSelectNum");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, Amount) == 0x000000, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::Amount' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, K2Node_MakeArray_Array) == 0x000048, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000059, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, Temp_bool_Variable) == 0x00005A, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, K2Node_Select_Default) == 0x000070, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ProductTitle_C_SetSelectNum, CallFunc_Format_ReturnValue) == 0x000090, "Member 'BP_RsDialog_ProductTitle_C_SetSelectNum::CallFunc_Format_ReturnValue' has a wrong offset!");

}

