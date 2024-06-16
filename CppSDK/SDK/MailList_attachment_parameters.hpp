#pragma once

 

// Package: MailList_attachment

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"


namespace SDK::Params
{

// Function MailList_attachment.MailList_attachment_C.ExecuteUbergraph_MailList_attachment
// 0x0008 (0x0008 - 0x0000)
struct MailList_attachment_C_ExecuteUbergraph_MailList_attachment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment) == 0x000004, "Wrong alignment on MailList_attachment_C_ExecuteUbergraph_MailList_attachment");
static_assert(sizeof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment) == 0x000008, "Wrong size on MailList_attachment_C_ExecuteUbergraph_MailList_attachment");
static_assert(offsetof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment, EntryPoint) == 0x000000, "Member 'MailList_attachment_C_ExecuteUbergraph_MailList_attachment::EntryPoint' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'MailList_attachment_C_ExecuteUbergraph_MailList_attachment::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000005, "Member 'MailList_attachment_C_ExecuteUbergraph_MailList_attachment::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'MailList_attachment_C_ExecuteUbergraph_MailList_attachment::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_ExecuteUbergraph_MailList_attachment, CallFunc_BooleanOR_ReturnValue_1) == 0x000007, "Member 'MailList_attachment_C_ExecuteUbergraph_MailList_attachment::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function MailList_attachment.MailList_attachment_C.SetMoney
// 0x0020 (0x0020 - 0x0000)
struct MailList_attachment_C_SetMoney final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7ADD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(MailList_attachment_C_SetMoney) == 0x000008, "Wrong alignment on MailList_attachment_C_SetMoney");
static_assert(sizeof(MailList_attachment_C_SetMoney) == 0x000020, "Wrong size on MailList_attachment_C_SetMoney");
static_assert(offsetof(MailList_attachment_C_SetMoney, Amount) == 0x000000, "Member 'MailList_attachment_C_SetMoney::Amount' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetMoney, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MailList_attachment_C_SetMoney::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function MailList_attachment.MailList_attachment_C.SetViewType
// 0x01E8 (0x01E8 - 0x0000)
struct MailList_attachment_C_SetViewType final
{
public:
	ESBMailAttachmentViewType                     Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7ADE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempString;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ADF[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE0[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE1[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE2[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLotteryTypeRewardStorageType_ReturnValue; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE3[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0108(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x01DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x01DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailList_attachment_C_SetViewType) == 0x000008, "Wrong alignment on MailList_attachment_C_SetViewType");
static_assert(sizeof(MailList_attachment_C_SetViewType) == 0x0001E8, "Wrong size on MailList_attachment_C_SetViewType");
static_assert(offsetof(MailList_attachment_C_SetViewType, Type) == 0x000000, "Member 'MailList_attachment_C_SetViewType::Type' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, TempString) == 0x000008, "Member 'MailList_attachment_C_SetViewType::TempString' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, MasterDataManager) == 0x000018, "Member 'MailList_attachment_C_SetViewType::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'MailList_attachment_C_SetViewType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000050, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_Conv_IntToString_ReturnValue) == 0x000060, "Member 'MailList_attachment_C_SetViewType::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000070, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000080, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000081, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000088, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, Temp_bool_Variable) == 0x000098, "Member 'MailList_attachment_C_SetViewType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x0000A0, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, K2Node_Select_Default) == 0x0000B0, "Member 'MailList_attachment_C_SetViewType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0000C0, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetMasterDataManager_IsValid) == 0x0000D0, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D8, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetLotteryTypeRewardStorageType_ReturnValue) == 0x0000E0, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetLotteryTypeRewardStorageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E5, "Member 'MailList_attachment_C_SetViewType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000E6, "Member 'MailList_attachment_C_SetViewType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000E7, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E8, "Member 'MailList_attachment_C_SetViewType::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000100, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetItemMasterData_IsExists) == 0x000101, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_GetItemMasterData_ReturnValue) == 0x000108, "Member 'MailList_attachment_C_SetViewType::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001D8, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0001D9, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0001DA, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0001DB, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0001DC, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x0001DD, "Member 'MailList_attachment_C_SetViewType::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_BooleanOR_ReturnValue) == 0x0001DE, "Member 'MailList_attachment_C_SetViewType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_BooleanOR_ReturnValue_1) == 0x0001DF, "Member 'MailList_attachment_C_SetViewType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetViewType, CallFunc_BooleanOR_ReturnValue_2) == 0x0001E0, "Member 'MailList_attachment_C_SetViewType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function MailList_attachment.MailList_attachment_C.SetAttentionStatus
// 0x000C (0x000C - 0x0000)
struct MailList_attachment_C_SetAttentionStatus final
{
public:
	int32                                         Status;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailList_attachment_C_SetAttentionStatus) == 0x000004, "Wrong alignment on MailList_attachment_C_SetAttentionStatus");
static_assert(sizeof(MailList_attachment_C_SetAttentionStatus) == 0x00000C, "Wrong size on MailList_attachment_C_SetAttentionStatus");
static_assert(offsetof(MailList_attachment_C_SetAttentionStatus, Status) == 0x000000, "Member 'MailList_attachment_C_SetAttentionStatus::Status' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetAttentionStatus, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'MailList_attachment_C_SetAttentionStatus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetAttentionStatus, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'MailList_attachment_C_SetAttentionStatus::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function MailList_attachment.MailList_attachment_C.UpdateIconExtraData
// 0x0038 (0x0038 - 0x0000)
struct MailList_attachment_C_UpdateIconExtraData final
{
public:
	TArray<int32>                                 WorkExtraData;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE5[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateColorManager*             CallFunc_GetColorManager_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharaCreateColor>            CallFunc_GetColorTable_ReturnValue;                // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailList_attachment_C_UpdateIconExtraData) == 0x000008, "Wrong alignment on MailList_attachment_C_UpdateIconExtraData");
static_assert(sizeof(MailList_attachment_C_UpdateIconExtraData) == 0x000038, "Wrong size on MailList_attachment_C_UpdateIconExtraData");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, WorkExtraData) == 0x000000, "Member 'MailList_attachment_C_UpdateIconExtraData::WorkExtraData' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'MailList_attachment_C_UpdateIconExtraData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'MailList_attachment_C_UpdateIconExtraData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000012, "Member 'MailList_attachment_C_UpdateIconExtraData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, CallFunc_GetColorManager_ReturnValue) == 0x000018, "Member 'MailList_attachment_C_UpdateIconExtraData::CallFunc_GetColorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, CallFunc_GetColorTable_ReturnValue) == 0x000020, "Member 'MailList_attachment_C_UpdateIconExtraData::CallFunc_GetColorTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'MailList_attachment_C_UpdateIconExtraData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateIconExtraData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'MailList_attachment_C_UpdateIconExtraData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MailList_attachment.MailList_attachment_C.UpdateStorageIcon
// 0x00E8 (0x00E8 - 0x0000)
struct MailList_attachment_C_UpdateStorageIcon final
{
public:
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE7[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0018(0x00D0)()
};
static_assert(alignof(MailList_attachment_C_UpdateStorageIcon) == 0x000008, "Wrong alignment on MailList_attachment_C_UpdateStorageIcon");
static_assert(sizeof(MailList_attachment_C_UpdateStorageIcon) == 0x0000E8, "Wrong size on MailList_attachment_C_UpdateStorageIcon");
static_assert(offsetof(MailList_attachment_C_UpdateStorageIcon, CallFunc_GetMasterDataManager_IsValid) == 0x000000, "Member 'MailList_attachment_C_UpdateStorageIcon::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateStorageIcon, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'MailList_attachment_C_UpdateStorageIcon::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateStorageIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'MailList_attachment_C_UpdateStorageIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateStorageIcon, CallFunc_GetItemMasterData_IsExists) == 0x000011, "Member 'MailList_attachment_C_UpdateStorageIcon::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_UpdateStorageIcon, CallFunc_GetItemMasterData_ReturnValue) == 0x000018, "Member 'MailList_attachment_C_UpdateStorageIcon::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");

// Function MailList_attachment.MailList_attachment_C.SetToolTips
// 0x01B0 (0x01B0 - 0x0000)
struct MailList_attachment_C_SetToolTips final
{
public:
	bool                                          TmpUseGrouping;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindRewardLotteryGroupsMaster_bIsValid;   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE8[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster; // 0x0008(0x0018)()
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0020(0x0078)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0098(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AE9[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_1;                // 0x00B8(0x0078)(HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_2;                // 0x0130(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailList_attachment_C_SetToolTips) == 0x000008, "Wrong alignment on MailList_attachment_C_SetToolTips");
static_assert(sizeof(MailList_attachment_C_SetToolTips) == 0x0001B0, "Wrong size on MailList_attachment_C_SetToolTips");
static_assert(offsetof(MailList_attachment_C_SetToolTips, TmpUseGrouping) == 0x000000, "Member 'MailList_attachment_C_SetToolTips::TmpUseGrouping' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'MailList_attachment_C_SetToolTips::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, CallFunc_FindRewardLotteryGroupsMaster_bIsValid) == 0x000002, "Member 'MailList_attachment_C_SetToolTips::CallFunc_FindRewardLotteryGroupsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster) == 0x000008, "Member 'MailList_attachment_C_SetToolTips::CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000020, "Member 'MailList_attachment_C_SetToolTips::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, CallFunc_Conv_IntToText_ReturnValue) == 0x000098, "Member 'MailList_attachment_C_SetToolTips::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B0, "Member 'MailList_attachment_C_SetToolTips::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, K2Node_MakeStruct_ST_ToolTipInfo_1) == 0x0000B8, "Member 'MailList_attachment_C_SetToolTips::K2Node_MakeStruct_ST_ToolTipInfo_1' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, K2Node_MakeStruct_ST_ToolTipInfo_2) == 0x000130, "Member 'MailList_attachment_C_SetToolTips::K2Node_MakeStruct_ST_ToolTipInfo_2' has a wrong offset!");
static_assert(offsetof(MailList_attachment_C_SetToolTips, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001A8, "Member 'MailList_attachment_C_SetToolTips::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");

}

