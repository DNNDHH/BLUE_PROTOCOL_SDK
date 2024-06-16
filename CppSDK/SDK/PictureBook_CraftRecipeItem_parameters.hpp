#pragma once

 

// Package: PictureBook_CraftRecipeItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.ExecuteUbergraph_PictureBook_CraftRecipeItem
// 0x02C0 (0x02C0 - 0x0000)
struct PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DA8[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA9[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_getInventoryItemAmount_OutIsAmount;       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DAA[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_getItemName_OutIsItemNameText;            // 0x0088(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DAB[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatNumber_ReturnValue;                 // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	struct FSBChangeItemAmountParam               K2Node_CustomEvent_InParam;                        // 0x00D0(0x0020)(ConstParm)
	int32                                         CallFunc_getInventoryItemAmount_OutIsAmount_1;     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DAC[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatNumber_ReturnValue_1;               // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DAD[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DAE[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DAF[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0148(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0170(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0198(0x0028)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DB0[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSBChangeItemAmountParam& InParam)> K2Node_CreateDelegate_OutputDelegate;              // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DB1[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x01E8(0x00D0)()
	bool                                          CallFunc_IsEventTermNoneLimmit_ReturnValue;        // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem) == 0x000008, "Wrong alignment on PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem");
static_assert(sizeof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem) == 0x0002C0, "Wrong size on PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, EntryPoint) == 0x000000, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, Temp_bool_Variable) == 0x000004, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, Temp_float_Variable) == 0x000008, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, Temp_float_Variable_1) == 0x00000C, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_Select_Default) == 0x000010, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_MakeStruct_LinearColor) == 0x000014, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetNetworkDataCache_IsValid) == 0x000050, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000058, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetOwnItemList_ReturnValue) == 0x000078, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_getInventoryItemAmount_OutIsAmount) == 0x000080, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_getInventoryItemAmount_OutIsAmount' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_getItemName_OutIsItemNameText) == 0x000088, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_getItemName_OutIsItemNameText' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_FormatNumber_ReturnValue) == 0x0000A8, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_FormatNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_CustomEvent_InParam) == 0x0000D0, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_getInventoryItemAmount_OutIsAmount_1) == 0x0000F0, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_getInventoryItemAmount_OutIsAmount_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_FormatNumber_ReturnValue_1) == 0x0000F8, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_FormatNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000108, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000128, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000129, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000130, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000138, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, Temp_bool_Variable_1) == 0x000140, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_MakeStruct_SlateColor_1) == 0x000148, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_MakeStruct_SlateColor_2) == 0x000170, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_Select_Default_1) == 0x000198, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetMasterDataManager_IsValid) == 0x0001C0, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001C8, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, K2Node_CreateDelegate_OutputDelegate) == 0x0001D0, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetItemMasterData_IsExists) == 0x0001E0, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_GetItemMasterData_ReturnValue) == 0x0001E8, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_IsEventTermNoneLimmit_ReturnValue) == 0x0002B8, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_IsEventTermNoneLimmit_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_IsEventTermActive_ReturnValue) == 0x0002B9, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002BA, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_BooleanAND_ReturnValue) == 0x0002BB, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x0002BC, "Member 'PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.OnOwnItemChangeDelegate
// 0x0020 (0x0020 - 0x0000)
struct PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate final
{
public:
	struct FSBChangeItemAmountParam               InParam;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate) == 0x000008, "Wrong alignment on PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate");
static_assert(sizeof(PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate) == 0x000020, "Wrong size on PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate, InParam) == 0x000000, "Member 'PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate::InParam' has a wrong offset!");

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.GetItemName
// 0x0130 (0x0130 - 0x0000)
struct PictureBook_CraftRecipeItem_C_GetItemName final
{
public:
	int32                                         ItemIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DB2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutIsItemNameText;                                 // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DB3[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DB4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0038(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0118(0x0018)()
};
static_assert(alignof(PictureBook_CraftRecipeItem_C_GetItemName) == 0x000008, "Wrong alignment on PictureBook_CraftRecipeItem_C_GetItemName");
static_assert(sizeof(PictureBook_CraftRecipeItem_C_GetItemName) == 0x000130, "Wrong size on PictureBook_CraftRecipeItem_C_GetItemName");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, ItemIdx) == 0x000000, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::ItemIdx' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, OutIsItemNameText) == 0x000008, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::OutIsItemNameText' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, CallFunc_GetItemMasterData_IsExists) == 0x000030, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, CallFunc_GetItemMasterData_ReturnValue) == 0x000038, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, CallFunc_GetItemText_ReturnValue) == 0x000108, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetItemName, CallFunc_Conv_StringToText_ReturnValue) == 0x000118, "Member 'PictureBook_CraftRecipeItem_C_GetItemName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getInventoryItemAmount
// 0x0018 (0x0018 - 0x0000)
struct PictureBook_CraftRecipeItem_C_GetInventoryItemAmount final
{
public:
	int32                                         ItemIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutIsAmount;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PictureBook_CraftRecipeItem_C_GetInventoryItemAmount) == 0x000008, "Wrong alignment on PictureBook_CraftRecipeItem_C_GetInventoryItemAmount");
static_assert(sizeof(PictureBook_CraftRecipeItem_C_GetInventoryItemAmount) == 0x000018, "Wrong size on PictureBook_CraftRecipeItem_C_GetInventoryItemAmount");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetInventoryItemAmount, ItemIdx) == 0x000000, "Member 'PictureBook_CraftRecipeItem_C_GetInventoryItemAmount::ItemIdx' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetInventoryItemAmount, OutIsAmount) == 0x000004, "Member 'PictureBook_CraftRecipeItem_C_GetInventoryItemAmount::OutIsAmount' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetInventoryItemAmount, CallFunc_GetCharacterStorage_ReturnValue) == 0x000008, "Member 'PictureBook_CraftRecipeItem_C_GetInventoryItemAmount::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetInventoryItemAmount, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000010, "Member 'PictureBook_CraftRecipeItem_C_GetInventoryItemAmount::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getStorageItemAmount
// 0x0140 (0x0140 - 0x0000)
struct PictureBook_CraftRecipeItem_C_GetStorageItemAmount final
{
public:
	int32                                         ItemIdx;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutIsAmount;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DB5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByItemIndex_bOutExist;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DB6[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByItemIndex_ReturnValue;      // 0x0028(0x0118)(ConstParm)
};
static_assert(alignof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount) == 0x000008, "Wrong alignment on PictureBook_CraftRecipeItem_C_GetStorageItemAmount");
static_assert(sizeof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount) == 0x000140, "Wrong size on PictureBook_CraftRecipeItem_C_GetStorageItemAmount");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, ItemIdx) == 0x000000, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::ItemIdx' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, OutIsAmount) == 0x000004, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::OutIsAmount' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, CallFunc_GetNetworkDataCache_IsValid) == 0x000008, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, CallFunc_GetInventory_ReturnValue) == 0x000018, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, CallFunc_BP_FindItem_ByItemIndex_bOutExist) == 0x000020, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::CallFunc_BP_FindItem_ByItemIndex_bOutExist' has a wrong offset!");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_GetStorageItemAmount, CallFunc_BP_FindItem_ByItemIndex_ReturnValue) == 0x000028, "Member 'PictureBook_CraftRecipeItem_C_GetStorageItemAmount::CallFunc_BP_FindItem_ByItemIndex_ReturnValue' has a wrong offset!");

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.IsCraftable
// 0x0001 (0x0001 - 0x0000)
struct PictureBook_CraftRecipeItem_C_IsCraftable final
{
public:
	bool                                          Craftable;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PictureBook_CraftRecipeItem_C_IsCraftable) == 0x000001, "Wrong alignment on PictureBook_CraftRecipeItem_C_IsCraftable");
static_assert(sizeof(PictureBook_CraftRecipeItem_C_IsCraftable) == 0x000001, "Wrong size on PictureBook_CraftRecipeItem_C_IsCraftable");
static_assert(offsetof(PictureBook_CraftRecipeItem_C_IsCraftable, Craftable) == 0x000000, "Member 'PictureBook_CraftRecipeItem_C_IsCraftable::Craftable' has a wrong offset!");

}

