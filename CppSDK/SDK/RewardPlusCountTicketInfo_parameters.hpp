#pragma once

 

// Package: RewardPlusCountTicketInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.ExecuteUbergraph_RewardPlusCountTicketInfo
// 0x0098 (0x0098 - 0x0000)
struct RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBRecoverRewardPlusCountResult Result)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	ESBRecoverRewardPlusCountResult               Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74B4[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRecoverRewardPlusCountResult               K2Node_CustomEvent_Result;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B5[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_RecoverRewardPlusCount_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B6[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FText                                   CallFunc_GetTokenUseText_ReturnValue;              // 0x0068(0x0018)()
	bool                                          CallFunc_ValidModifySeasonPass_ReturnValue;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B7[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo");
static_assert(sizeof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo) == 0x000098, "Wrong size on RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, EntryPoint) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, Temp_byte_Variable) == 0x000014, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, Temp_int_Variable) == 0x000018, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, Temp_int_Variable_1) == 0x00001C, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, Temp_int_Variable_2) == 0x000020, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, Temp_int_Variable_3) == 0x000024, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, K2Node_CustomEvent_Result) == 0x000030, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000031, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, K2Node_Select_Default) == 0x000034, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_Request_RecoverRewardPlusCount_ReturnValue) == 0x000048, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_Request_RecoverRewardPlusCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_GetTokenUseText_ReturnValue) == 0x000068, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_GetTokenUseText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_ValidModifySeasonPass_ReturnValue) == 0x000080, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_ValidModifySeasonPass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000088, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000090, "Member 'RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.OnRecoverRewardPlusCount
// 0x0001 (0x0001 - 0x0000)
struct RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount final
{
public:
	ESBRecoverRewardPlusCountResult               Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount) == 0x000001, "Wrong alignment on RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount");
static_assert(sizeof(RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount) == 0x000001, "Wrong size on RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount");
static_assert(offsetof(RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount, Result) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount::Result' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetCountValueCurrent
// 0x0028 (0x0028 - 0x0000)
struct RewardPlusCountTicketInfo_C_SetCountValueCurrent final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_GetTokenFromPlaceToConsume_ReturnValue;   // 0x0004(0x000C)(NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(RewardPlusCountTicketInfo_C_SetCountValueCurrent) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_SetCountValueCurrent");
static_assert(sizeof(RewardPlusCountTicketInfo_C_SetCountValueCurrent) == 0x000028, "Wrong size on RewardPlusCountTicketInfo_C_SetCountValueCurrent");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueCurrent, Count) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_SetCountValueCurrent::Count' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueCurrent, CallFunc_GetTokenFromPlaceToConsume_ReturnValue) == 0x000004, "Member 'RewardPlusCountTicketInfo_C_SetCountValueCurrent::CallFunc_GetTokenFromPlaceToConsume_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueCurrent, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_SetCountValueCurrent::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetCountValueLimit
// 0x0028 (0x0028 - 0x0000)
struct RewardPlusCountTicketInfo_C_SetCountValueLimit final
{
public:
	int32                                         MaxAmount;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCountValueLimit_CountValueLimit;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(RewardPlusCountTicketInfo_C_SetCountValueLimit) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_SetCountValueLimit");
static_assert(sizeof(RewardPlusCountTicketInfo_C_SetCountValueLimit) == 0x000028, "Wrong size on RewardPlusCountTicketInfo_C_SetCountValueLimit");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueLimit, MaxAmount) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_SetCountValueLimit::MaxAmount' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueLimit, CallFunc_GetCountValueLimit_CountValueLimit) == 0x000004, "Member 'RewardPlusCountTicketInfo_C_SetCountValueLimit::CallFunc_GetCountValueLimit_CountValueLimit' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueLimit, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RewardPlusCountTicketInfo_C_SetCountValueLimit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueLimit, CallFunc_SelectInt_ReturnValue) == 0x00000C, "Member 'RewardPlusCountTicketInfo_C_SetCountValueLimit::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetCountValueLimit, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_SetCountValueLimit::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetTicketValue
// 0x0028 (0x0028 - 0x0000)
struct RewardPlusCountTicketInfo_C_SetTicketValue final
{
public:
	int32                                         Ticket;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_GetTokenFromPlaceToConsume_ReturnValue;   // 0x0004(0x000C)(NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(RewardPlusCountTicketInfo_C_SetTicketValue) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_SetTicketValue");
static_assert(sizeof(RewardPlusCountTicketInfo_C_SetTicketValue) == 0x000028, "Wrong size on RewardPlusCountTicketInfo_C_SetTicketValue");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetTicketValue, Ticket) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_SetTicketValue::Ticket' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetTicketValue, CallFunc_GetTokenFromPlaceToConsume_ReturnValue) == 0x000004, "Member 'RewardPlusCountTicketInfo_C_SetTicketValue::CallFunc_GetTokenFromPlaceToConsume_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetTicketValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_SetTicketValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetColorRedIfZero
// 0x0068 (0x0068 - 0x0000)
struct RewardPlusCountTicketInfo_C_SetColorRedIfZero final
{
public:
	class UTextBlock*                             Text;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B8[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
};
static_assert(alignof(RewardPlusCountTicketInfo_C_SetColorRedIfZero) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_SetColorRedIfZero");
static_assert(sizeof(RewardPlusCountTicketInfo_C_SetColorRedIfZero) == 0x000068, "Wrong size on RewardPlusCountTicketInfo_C_SetColorRedIfZero");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, Text) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::Text' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, Value) == 0x000008, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::Value' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, Temp_bool_Variable) == 0x00000C, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000D, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, Temp_struct_Variable) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, Temp_struct_Variable_1) == 0x000020, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, K2Node_Select_Default) == 0x000030, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetColorRedIfZero, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'RewardPlusCountTicketInfo_C_SetColorRedIfZero::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Get_ImageTicketIcon_ToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0");
static_assert(sizeof(RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0) == 0x000008, "Wrong size on RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0");
static_assert(offsetof(RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Get_ImageSeparation_ToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0");
static_assert(sizeof(RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0) == 0x000008, "Wrong size on RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0");
static_assert(offsetof(RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetupToolTip
// 0x00D0 (0x00D0 - 0x0000)
struct RewardPlusCountTicketInfo_C_SetupToolTip final
{
public:
	class UWBP_CommonToolTipDetail_Fixed_C*       CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_GetTokenFromPlaceToConsume_ReturnValue;   // 0x0008(0x000C)(NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B9[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74BA[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0038(0x0058)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	class FString                                 CallFunc_GetTokenText_ReturnValue;                 // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B8(0x0018)()
};
static_assert(alignof(RewardPlusCountTicketInfo_C_SetupToolTip) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_SetupToolTip");
static_assert(sizeof(RewardPlusCountTicketInfo_C_SetupToolTip) == 0x0000D0, "Wrong size on RewardPlusCountTicketInfo_C_SetupToolTip");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_Create_ReturnValue) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_GetTokenFromPlaceToConsume_ReturnValue) == 0x000008, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_GetTokenFromPlaceToConsume_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_GetMasterDataManager_IsValid) == 0x000014, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_BP_FindMasterToken_bIsValid) == 0x000030, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000038, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_GetTokenText_ReturnValue) == 0x0000A8, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_GetTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetupToolTip, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B8, "Member 'RewardPlusCountTicketInfo_C_SetupToolTip::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetEnableBtn16Ticket
// 0x0024 (0x0024 - 0x0000)
struct RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket final
{
public:
	int32                                         CallFunc_GetCountValueLimit_CountValueLimit;       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_GetTokenFromPlaceToConsume_ReturnValue;   // 0x0004(0x000C)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74BB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterToken                      CallFunc_GetTokenFromPlaceToConsume_ReturnValue_1; // 0x0014(0x000C)(NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket) == 0x000004, "Wrong alignment on RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket");
static_assert(sizeof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket) == 0x000024, "Wrong size on RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket, CallFunc_GetCountValueLimit_CountValueLimit) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket::CallFunc_GetCountValueLimit_CountValueLimit' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket, CallFunc_GetTokenFromPlaceToConsume_ReturnValue) == 0x000004, "Member 'RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket::CallFunc_GetTokenFromPlaceToConsume_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket, CallFunc_GetTokenFromPlaceToConsume_ReturnValue_1) == 0x000014, "Member 'RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket::CallFunc_GetTokenFromPlaceToConsume_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'RewardPlusCountTicketInfo_C_SetEnableBtn16Ticket::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.GetCountValueLimit
// 0x0078 (0x0078 - 0x0000)
struct RewardPlusCountTicketInfo_C_GetCountValueLimit final
{
public:
	int32                                         CountValueLimit;                                   // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAmount;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74BC[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74BD[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0020(0x0058)()
};
static_assert(alignof(RewardPlusCountTicketInfo_C_GetCountValueLimit) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_GetCountValueLimit");
static_assert(sizeof(RewardPlusCountTicketInfo_C_GetCountValueLimit) == 0x000078, "Wrong size on RewardPlusCountTicketInfo_C_GetCountValueLimit");
static_assert(offsetof(RewardPlusCountTicketInfo_C_GetCountValueLimit, CountValueLimit) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_GetCountValueLimit::CountValueLimit' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_GetCountValueLimit, MaxAmount) == 0x000004, "Member 'RewardPlusCountTicketInfo_C_GetCountValueLimit::MaxAmount' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_GetCountValueLimit, CallFunc_GetMasterDataManager_IsValid) == 0x000008, "Member 'RewardPlusCountTicketInfo_C_GetCountValueLimit::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_GetCountValueLimit, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_GetCountValueLimit::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_GetCountValueLimit, CallFunc_BP_FindMasterToken_bIsValid) == 0x000018, "Member 'RewardPlusCountTicketInfo_C_GetCountValueLimit::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_GetCountValueLimit, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000020, "Member 'RewardPlusCountTicketInfo_C_GetCountValueLimit::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.UpdateSeasonPassInfo
// 0x0038 (0x0038 - 0x0000)
struct RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo final
{
public:
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74BE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSBGameSettingsMasterDataForBP_IsExists; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74BF[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGameSettingsMasterData              CallFunc_FindSBGameSettingsMasterDataForBP_ReturnValue; // 0x001C(0x0008)(NoDestructor)
	uint8                                         Pad_74C0[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidPlanSubscribed_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74C1[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo) == 0x000008, "Wrong alignment on RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo");
static_assert(sizeof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo) == 0x000038, "Wrong size on RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000000, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_FindSBGameSettingsMasterDataForBP_IsExists) == 0x000018, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_FindSBGameSettingsMasterDataForBP_IsExists' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_FindSBGameSettingsMasterDataForBP_ReturnValue) == 0x00001C, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_FindSBGameSettingsMasterDataForBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000028, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_IsPaidPlanSubscribed_ReturnValue) == 0x000030, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_IsPaidPlanSubscribed_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo, CallFunc_SelectInt_ReturnValue) == 0x000034, "Member 'RewardPlusCountTicketInfo_C_UpdateSeasonPassInfo::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

}

