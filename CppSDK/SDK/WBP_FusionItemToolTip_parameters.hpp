#pragma once

 

// Package: WBP_FusionItemToolTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_FusionItemToolTip.WBP_FusionItemToolTip_C.SetItem
// 0x0578 (0x0578 - 0x0000)
struct WBP_FusionItemToolTip_C_SetItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_998B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityData                   MaxAccuracy;                                       // 0x0008(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBSyntheAbilityData                   MinAccuracy;                                       // 0x0024(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBAbilityMasterData                   AbilityData;                                       // 0x0040(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterFusionItem                    Data;                                              // 0x0088(0x0018)(Edit, BlueprintVisible, NoDestructor)
	bool                                          Unidentified;                                      // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_998C[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        MasterData;                                        // 0x00A8(0x00D0)(Edit, BlueprintVisible)
	bool                                          NewLocalVar_0;                                     // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_998D[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemToolTipText_OutName;               // 0x0180(0x0018)()
	class FText                                   CallFunc_GetItemToolTipText_OutType;               // 0x0198(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_998E[0x6];                                     // 0x01BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTooltipText_String;                    // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanNAND_ReturnValue;                  // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_998F[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01D8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9990[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTooltipText_String_1;                  // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0208(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_1;                // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9991[0x5];                                     // 0x0223(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0248(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0260(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0278(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x02B8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0308(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0318(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0330(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0348(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_3; // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9992[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x03A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x03B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x03F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0408(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9993[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0424(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x0440(0x001C)(NoDestructor)
	uint8                                         Pad_9994[0x4];                                     // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x0460(0x0050)(ConstParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x04B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x04C8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x04E0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9995[0x6];                                     // 0x04FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9996[0x6];                                     // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0510(0x0048)()
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9997[0x2];                                     // 0x055A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x055C(0x0018)(NoDestructor)
};
static_assert(alignof(WBP_FusionItemToolTip_C_SetItem) == 0x000008, "Wrong alignment on WBP_FusionItemToolTip_C_SetItem");
static_assert(sizeof(WBP_FusionItemToolTip_C_SetItem) == 0x000578, "Wrong size on WBP_FusionItemToolTip_C_SetItem");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, InItemIndex) == 0x000000, "Member 'WBP_FusionItemToolTip_C_SetItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, bUnidentified) == 0x000004, "Member 'WBP_FusionItemToolTip_C_SetItem::bUnidentified' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, MaxAccuracy) == 0x000008, "Member 'WBP_FusionItemToolTip_C_SetItem::MaxAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, MinAccuracy) == 0x000024, "Member 'WBP_FusionItemToolTip_C_SetItem::MinAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, AbilityData) == 0x000040, "Member 'WBP_FusionItemToolTip_C_SetItem::AbilityData' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, Data) == 0x000088, "Member 'WBP_FusionItemToolTip_C_SetItem::Data' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, Unidentified) == 0x0000A0, "Member 'WBP_FusionItemToolTip_C_SetItem::Unidentified' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, MasterData) == 0x0000A8, "Member 'WBP_FusionItemToolTip_C_SetItem::MasterData' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, NewLocalVar_0) == 0x000178, "Member 'WBP_FusionItemToolTip_C_SetItem::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000179, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetItemToolTipText_OutName) == 0x000180, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetItemToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetItemToolTipText_OutType) == 0x000198, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetItemToolTipText_OutType' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, Temp_bool_Variable) == 0x0001B0, "Member 'WBP_FusionItemToolTip_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001B1, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001B2, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, Temp_bool_Variable_1) == 0x0001B3, "Member 'WBP_FusionItemToolTip_C_SetItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001B4, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0001B5, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0001B6, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, Temp_bool_Variable_2) == 0x0001B7, "Member 'WBP_FusionItemToolTip_C_SetItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001B8, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001B9, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetTooltipText_String) == 0x0001C0, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetTooltipText_String' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_BooleanNAND_ReturnValue) == 0x0001D0, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_BooleanNAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0001D8, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0001F0, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_Select_Default) == 0x0001F1, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetTooltipText_String_1) == 0x0001F8, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetTooltipText_String_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000208, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000220, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_BooleanNAND_ReturnValue_1) == 0x000221, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_BooleanNAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_Select_Default_1) == 0x000222, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x000228, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000238, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000248, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000260, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_MakeStruct_FormatArgumentData) == 0x000278, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_MakeStruct_FormatArgumentData_1) == 0x0002B8, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x0002F8, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_MakeArray_Array) == 0x000308, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000318, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Format_ReturnValue) == 0x000330, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_MakeStruct_FormatArgumentData_2) == 0x000348, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_3) == 0x000388, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000398, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0003A0, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_MakeStruct_FormatArgumentData_3) == 0x0003B8, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_MakeArray_Array_1) == 0x0003F8, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Format_ReturnValue_1) == 0x000408, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000420, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000424, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x000440, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x000460, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0004B0, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0004C8, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0004E0, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_Select_Default_2) == 0x0004F8, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetMasterDataManager_IsValid) == 0x0004F9, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000500, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, Temp_bool_Variable_3) == 0x000508, "Member 'WBP_FusionItemToolTip_C_SetItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000509, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000510, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, K2Node_Select_Default_3) == 0x000558, "Member 'WBP_FusionItemToolTip_C_SetItem::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000559, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_SetItem, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00055C, "Member 'WBP_FusionItemToolTip_C_SetItem::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");

// Function WBP_FusionItemToolTip.WBP_FusionItemToolTip_C.GetTooltipText
// 0x0070 (0x0070 - 0x0000)
struct WBP_FusionItemToolTip_C_GetTooltipText final
{
public:
	int32                                         MinValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxValue;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 String;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9998[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FusionItemToolTip_C_GetTooltipText) == 0x000008, "Wrong alignment on WBP_FusionItemToolTip_C_GetTooltipText");
static_assert(sizeof(WBP_FusionItemToolTip_C_GetTooltipText) == 0x000070, "Wrong size on WBP_FusionItemToolTip_C_GetTooltipText");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, MinValue) == 0x000000, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::MinValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, MaxValue) == 0x000004, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::MaxValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, String) == 0x000008, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::String' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, Temp_bool_Variable) == 0x000018, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000019, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00001A, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00001B, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, Temp_bool_Variable_1) == 0x00001C, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000030, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000040, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, K2Node_Select_Default) == 0x000050, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_FusionItemToolTip_C_GetTooltipText, K2Node_Select_Default_1) == 0x000060, "Member 'WBP_FusionItemToolTip_C_GetTooltipText::K2Node_Select_Default_1' has a wrong offset!");

}

