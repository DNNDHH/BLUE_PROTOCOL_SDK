#pragma once

 

// Package: UMG_LiquidMemoryItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetEfficacyTypeText
// 0x0060 (0x0060 - 0x0000)
struct UMG_LiquidMemoryItem_C_SetEfficacyTypeText final
{
public:
	struct FSBTextTableHash                       InNameTextId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       InDescTextId;                                      // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue_1;        // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText) == 0x000008, "Wrong alignment on UMG_LiquidMemoryItem_C_SetEfficacyTypeText");
static_assert(sizeof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText) == 0x000060, "Wrong size on UMG_LiquidMemoryItem_C_SetEfficacyTypeText");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, InNameTextId) == 0x000000, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::InNameTextId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, InDescTextId) == 0x000004, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::InDescTextId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, CallFunc_GetLiquidMemoryText_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::CallFunc_GetLiquidMemoryText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, CallFunc_GetLiquidMemoryText_ReturnValue_1) == 0x000018, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::CallFunc_GetLiquidMemoryText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetEfficacyTypeText, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'UMG_LiquidMemoryItem_C_SetEfficacyTypeText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetBottleStatus
// 0x0288 (0x0288 - 0x0000)
struct UMG_LiquidMemoryItem_C_SetBottleStatus final
{
public:
	bool                                          InIsLiquidMemoryInfoValid;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57FD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    InLiquidMemoryInfo;                                // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class FString                                 TooltipString;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          TmpActivateFlag;                                   // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57FE[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    TmpLiquidMemoryInfo;                               // 0x0048(0x0028)(Edit, BlueprintVisible, NoDestructor)
	bool                                          TmpIsLiquidMemoryInfoValid;                        // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57FF[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5800[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5801[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0130(0x0010)(ReferenceParm)
	bool                                          CallFunc_UpdateBonusStatus_Visible;                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5802[0x2];                                     // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0180(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0198(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01B0(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5803[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5804[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x01E0(0x0038)()
	struct FSBLiquidMemoryAccumulateConditionParameter CallFunc_Array_Get_Item;                           // 0x0218(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5805[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5806[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryEfficacyParameter       CallFunc_Array_Get_Item_1;                         // 0x0250(0x0030)()
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryItem_C_SetBottleStatus) == 0x000008, "Wrong alignment on UMG_LiquidMemoryItem_C_SetBottleStatus");
static_assert(sizeof(UMG_LiquidMemoryItem_C_SetBottleStatus) == 0x000288, "Wrong size on UMG_LiquidMemoryItem_C_SetBottleStatus");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, InIsLiquidMemoryInfoValid) == 0x000000, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::InIsLiquidMemoryInfoValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, InLiquidMemoryInfo) == 0x000008, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::InLiquidMemoryInfo' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, TooltipString) == 0x000030, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::TooltipString' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, TmpActivateFlag) == 0x000040, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::TmpActivateFlag' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, TmpLiquidMemoryInfo) == 0x000048, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::TmpLiquidMemoryInfo' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, TmpIsLiquidMemoryInfoValid) == 0x000070, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::TmpIsLiquidMemoryInfoValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_bool_Variable) == 0x000071, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_byte_Variable) == 0x000072, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_byte_Variable_1) == 0x000073, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_bool_Variable_1) == 0x000074, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_byte_Variable_2) == 0x000075, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_byte_Variable_3) == 0x000076, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_byte_Variable_4) == 0x000077, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_bool_Variable_2) == 0x000078, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_int_Array_Index_Variable) == 0x000084, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_MakeDateTime_ReturnValue) == 0x000088, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_Select_Default) == 0x000092, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_MakeArray_Array) == 0x0000D8, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_SetDateTime_ReturnValue) == 0x0000E8, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x0000E9, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F0, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_MakeArray_Array_1) == 0x000130, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_UpdateBonusStatus_Visible) == 0x000140, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_UpdateBonusStatus_Visible' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_Select_Default_1) == 0x000141, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_IsValid_ReturnValue_2) == 0x000142, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_IsValid_ReturnValue_3) == 0x000143, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_IsValid_ReturnValue_4) == 0x000144, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_IsValid_ReturnValue_5) == 0x000145, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_GetTextFromAsset_ReturnValue) == 0x000148, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000158, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000180, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Format_ReturnValue) == 0x000198, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Format_ReturnValue_1) == 0x0001B0, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_GetMasterDataManager_IsValid) == 0x0001C8, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001D0, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x0001D8, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x0001E0, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Array_Get_Item) == 0x000218, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Array_Length_ReturnValue) == 0x000240, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Less_IntInt_ReturnValue) == 0x000244, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Array_Add_ReturnValue) == 0x000248, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, CallFunc_Array_Get_Item_1) == 0x000250, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, Temp_byte_Variable_5) == 0x000280, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetBottleStatus, K2Node_Select_Default_2) == 0x000281, "Member 'UMG_LiquidMemoryItem_C_SetBottleStatus::K2Node_Select_Default_2' has a wrong offset!");

// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetAccumulateConditionText
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_LiquidMemoryItem_C_SetAccumulateConditionText final
{
public:
	TArray<struct FSBTextTableHash>               InTextID;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextBlock*                             TmpTxtObj;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpArrayIndex;                                     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5807[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     TmpTxtObjRefArray;                                 // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5808[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue;          // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5809[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_580A[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item_2;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_580B[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_580C[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText) == 0x000008, "Wrong alignment on UMG_LiquidMemoryItem_C_SetAccumulateConditionText");
static_assert(sizeof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText) == 0x0000B8, "Wrong size on UMG_LiquidMemoryItem_C_SetAccumulateConditionText");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, InTextID) == 0x000000, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::InTextID' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, TmpTxtObj) == 0x000010, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::TmpTxtObj' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, TmpArrayIndex) == 0x000018, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::TmpArrayIndex' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, TmpTxtObjRefArray) == 0x000020, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::TmpTxtObjRefArray' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, Temp_int_Array_Index_Variable) == 0x000030, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Array_Get_Item) == 0x000038, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_GetLiquidMemoryText_ReturnValue) == 0x000040, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_GetLiquidMemoryText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, Temp_int_Array_Index_Variable_1) == 0x000070, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, Temp_int_Loop_Counter_Variable_1) == 0x000074, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Array_Get_Item_2) == 0x000090, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Array_Length_ReturnValue_2) == 0x00009C, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000A0, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_SetAccumulateConditionText, K2Node_MakeArray_Array) == 0x0000A8, "Member 'UMG_LiquidMemoryItem_C_SetAccumulateConditionText::K2Node_MakeArray_Array' has a wrong offset!");

// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.Setup Tooltip Widget
// 0x0020 (0x0020 - 0x0000)
struct UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget final
{
public:
	TArray<struct FSBRewardBoostTooltipData>      DataList;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_580D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget) == 0x000008, "Wrong alignment on UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget");
static_assert(sizeof(UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget) == 0x000020, "Wrong size on UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget");
static_assert(offsetof(UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget, DataList) == 0x000000, "Member 'UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget::DataList' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.UpdateBonusStatus
// 0x0030 (0x0030 - 0x0000)
struct UMG_LiquidMemoryItem_C_UpdateBonusStatus final
{
public:
	int32                                         LiquidMemoryId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_580E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveLiquidMemory_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_580F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetLiquidMemoryTooltipText_TooltipDataList; // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(UMG_LiquidMemoryItem_C_UpdateBonusStatus) == 0x000008, "Wrong alignment on UMG_LiquidMemoryItem_C_UpdateBonusStatus");
static_assert(sizeof(UMG_LiquidMemoryItem_C_UpdateBonusStatus) == 0x000030, "Wrong size on UMG_LiquidMemoryItem_C_UpdateBonusStatus");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, LiquidMemoryId) == 0x000000, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::LiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, Visible) == 0x000004, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::Visible' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, CallFunc_IsEffectiveLiquidMemory_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::CallFunc_IsEffectiveLiquidMemory_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryItem_C_UpdateBonusStatus, CallFunc_GetLiquidMemoryTooltipText_TooltipDataList) == 0x000020, "Member 'UMG_LiquidMemoryItem_C_UpdateBonusStatus::CallFunc_GetLiquidMemoryTooltipText_TooltipDataList' has a wrong offset!");

}

