#pragma once

 

// Package: NeedItemList_Item

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function NeedItemList_Item.NeedItemList_Item_C.ExecuteUbergraph_NeedItemList_Item
// 0x02E8 (0x02E8 - 0x0000)
struct NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6778[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6779[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	int32                                         CallFunc_getInventoryItemAmount_OutIsAmount;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_677A[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatNumber_ReturnValue;                 // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_677B[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   CallFunc_getItemName_OutIsItemNameText;            // 0x0088(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_677C[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChangeItemAmountParam               K2Node_CustomEvent_InParam;                        // 0x00B0(0x0020)(ConstParm)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_getInventoryItemAmount_OutIsAmount_1;     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_677D[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatNumber_ReturnValue_1;               // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_677E[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_677F[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6780[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0130(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0158(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0180(0x0028)()
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate;              // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_isCraftMaterialLocked_ReturnValue;        // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6781[0x5];                                     // 0x01BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x01C0(0x00D0)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0290(0x0028)()
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x02BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x02BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6782[0x2];                                     // 0x02BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x02C0(0x0028)()
};
static_assert(alignof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item) == 0x000008, "Wrong alignment on NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item");
static_assert(sizeof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item) == 0x0002E8, "Wrong size on NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, EntryPoint) == 0x000000, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_MakeLiteralByte_ReturnValue) == 0x000030, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, Temp_bool_Variable) == 0x000031, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, Temp_bool_Variable_1) == 0x000032, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, Temp_bool_Variable_2) == 0x000033, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_Event_IsDesignTime) == 0x000034, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_getInventoryItemAmount_OutIsAmount) == 0x000050, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_getInventoryItemAmount_OutIsAmount' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_FormatNumber_ReturnValue) == 0x000058, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_FormatNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_getItemName_OutIsItemNameText) == 0x000088, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_getItemName_OutIsItemNameText' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000A0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000A1, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_GetNetworkDataCache_IsValid) == 0x0000A2, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000A8, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_CustomEvent_InParam) == 0x0000B0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_GetOwnItemList_ReturnValue) == 0x0000D0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_getInventoryItemAmount_OutIsAmount_1) == 0x0000D8, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_getInventoryItemAmount_OutIsAmount_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_FormatNumber_ReturnValue_1) == 0x0000E0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_FormatNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000110, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000118, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000120, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, Temp_bool_Variable_3) == 0x000128, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000129, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_MakeStruct_SlateColor_1) == 0x000130, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_MakeStruct_SlateColor_2) == 0x000158, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_Select_Default) == 0x000180, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_CreateDelegate_OutputDelegate) == 0x0001A8, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_isCraftMaterialLocked_ReturnValue) == 0x0001B8, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_isCraftMaterialLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_Select_Default_1) == 0x0001B9, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_FindItemMaster_bIsValid) == 0x0001BA, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_FindItemMaster_ItemMaster) == 0x0001C0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_MakeStruct_SlateColor_3) == 0x000290, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_IsEventTermActive_ReturnValue) == 0x0002B8, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_IsEmpty_ReturnValue) == 0x0002B9, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002BA, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_Not_PreBool_ReturnValue_2) == 0x0002BB, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, CallFunc_BooleanAND_ReturnValue) == 0x0002BC, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_Select_Default_2) == 0x0002BD, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item, K2Node_Select_Default_3) == 0x0002C0, "Member 'NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item::K2Node_Select_Default_3' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.OnOwnItemChangeDelegate
// 0x0020 (0x0020 - 0x0000)
struct NeedItemList_Item_C_OnOwnItemChangeDelegate final
{
public:
	struct FSBChangeItemAmountParam               InParam;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NeedItemList_Item_C_OnOwnItemChangeDelegate) == 0x000008, "Wrong alignment on NeedItemList_Item_C_OnOwnItemChangeDelegate");
static_assert(sizeof(NeedItemList_Item_C_OnOwnItemChangeDelegate) == 0x000020, "Wrong size on NeedItemList_Item_C_OnOwnItemChangeDelegate");
static_assert(offsetof(NeedItemList_Item_C_OnOwnItemChangeDelegate, InParam) == 0x000000, "Member 'NeedItemList_Item_C_OnOwnItemChangeDelegate::InParam' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct NeedItemList_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NeedItemList_Item_C_PreConstruct) == 0x000001, "Wrong alignment on NeedItemList_Item_C_PreConstruct");
static_assert(sizeof(NeedItemList_Item_C_PreConstruct) == 0x000001, "Wrong size on NeedItemList_Item_C_PreConstruct");
static_assert(offsetof(NeedItemList_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NeedItemList_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.GetItemName
// 0x0130 (0x0130 - 0x0000)
struct NeedItemList_Item_C_GetItemName final
{
public:
	int32                                         ItemIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6783[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutIsItemNameText;                                 // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6784[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6785[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0038(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0118(0x0018)()
};
static_assert(alignof(NeedItemList_Item_C_GetItemName) == 0x000008, "Wrong alignment on NeedItemList_Item_C_GetItemName");
static_assert(sizeof(NeedItemList_Item_C_GetItemName) == 0x000130, "Wrong size on NeedItemList_Item_C_GetItemName");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, ItemIdx) == 0x000000, "Member 'NeedItemList_Item_C_GetItemName::ItemIdx' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, OutIsItemNameText) == 0x000008, "Member 'NeedItemList_Item_C_GetItemName::OutIsItemNameText' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'NeedItemList_Item_C_GetItemName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'NeedItemList_Item_C_GetItemName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, CallFunc_GetItemMasterData_IsExists) == 0x000030, "Member 'NeedItemList_Item_C_GetItemName::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, CallFunc_GetItemMasterData_ReturnValue) == 0x000038, "Member 'NeedItemList_Item_C_GetItemName::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, CallFunc_GetItemText_ReturnValue) == 0x000108, "Member 'NeedItemList_Item_C_GetItemName::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetItemName, CallFunc_Conv_StringToText_ReturnValue) == 0x000118, "Member 'NeedItemList_Item_C_GetItemName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.getInventoryItemAmount
// 0x0018 (0x0018 - 0x0000)
struct NeedItemList_Item_C_GetInventoryItemAmount final
{
public:
	int32                                         ItemIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutIsAmount;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NeedItemList_Item_C_GetInventoryItemAmount) == 0x000008, "Wrong alignment on NeedItemList_Item_C_GetInventoryItemAmount");
static_assert(sizeof(NeedItemList_Item_C_GetInventoryItemAmount) == 0x000018, "Wrong size on NeedItemList_Item_C_GetInventoryItemAmount");
static_assert(offsetof(NeedItemList_Item_C_GetInventoryItemAmount, ItemIdx) == 0x000000, "Member 'NeedItemList_Item_C_GetInventoryItemAmount::ItemIdx' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetInventoryItemAmount, OutIsAmount) == 0x000004, "Member 'NeedItemList_Item_C_GetInventoryItemAmount::OutIsAmount' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetInventoryItemAmount, CallFunc_GetCharacterStorage_ReturnValue) == 0x000008, "Member 'NeedItemList_Item_C_GetInventoryItemAmount::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetInventoryItemAmount, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000010, "Member 'NeedItemList_Item_C_GetInventoryItemAmount::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.getStorageItemAmount
// 0x0140 (0x0140 - 0x0000)
struct NeedItemList_Item_C_GetStorageItemAmount final
{
public:
	int32                                         ItemIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutIsAmount;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6786[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6787[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x0028(0x0118)(ConstParm)
};
static_assert(alignof(NeedItemList_Item_C_GetStorageItemAmount) == 0x000008, "Wrong alignment on NeedItemList_Item_C_GetStorageItemAmount");
static_assert(sizeof(NeedItemList_Item_C_GetStorageItemAmount) == 0x000140, "Wrong size on NeedItemList_Item_C_GetStorageItemAmount");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, ItemIdx) == 0x000000, "Member 'NeedItemList_Item_C_GetStorageItemAmount::ItemIdx' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, OutIsAmount) == 0x000004, "Member 'NeedItemList_Item_C_GetStorageItemAmount::OutIsAmount' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, CallFunc_GetNetworkDataCache_IsValid) == 0x000008, "Member 'NeedItemList_Item_C_GetStorageItemAmount::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'NeedItemList_Item_C_GetStorageItemAmount::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, CallFunc_GetInventory_ReturnValue) == 0x000018, "Member 'NeedItemList_Item_C_GetStorageItemAmount::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x000020, "Member 'NeedItemList_Item_C_GetStorageItemAmount::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_GetStorageItemAmount, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x000028, "Member 'NeedItemList_Item_C_GetStorageItemAmount::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.IsCraftable
// 0x0001 (0x0001 - 0x0000)
struct NeedItemList_Item_C_IsCraftable final
{
public:
	bool                                          Craftable;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NeedItemList_Item_C_IsCraftable) == 0x000001, "Wrong alignment on NeedItemList_Item_C_IsCraftable");
static_assert(sizeof(NeedItemList_Item_C_IsCraftable) == 0x000001, "Wrong size on NeedItemList_Item_C_IsCraftable");
static_assert(offsetof(NeedItemList_Item_C_IsCraftable, Craftable) == 0x000000, "Member 'NeedItemList_Item_C_IsCraftable::Craftable' has a wrong offset!");

// Function NeedItemList_Item.NeedItemList_Item_C.InitWidthSize
// 0x0010 (0x0010 - 0x0000)
struct NeedItemList_Item_C_InitWidthSize final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NeedItemList_Item_C_InitWidthSize) == 0x000008, "Wrong alignment on NeedItemList_Item_C_InitWidthSize");
static_assert(sizeof(NeedItemList_Item_C_InitWidthSize) == 0x000010, "Wrong size on NeedItemList_Item_C_InitWidthSize");
static_assert(offsetof(NeedItemList_Item_C_InitWidthSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'NeedItemList_Item_C_InitWidthSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(NeedItemList_Item_C_InitWidthSize, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'NeedItemList_Item_C_InitWidthSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

