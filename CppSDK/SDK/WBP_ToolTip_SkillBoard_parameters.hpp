#pragma once

 

// Package: WBP_ToolTip_SkillBoard

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.Set Skill
// 0x0290 (0x0290 - 0x0000)
struct WBP_ToolTip_SkillBoard_C_Set_Skill final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillDataMasterData                 SwitchSkillData;                                   // 0x0008(0x0058)(Edit, BlueprintVisible)
	TArray<int32>                                 NewLocalVar_0;                                     // 0x0060(0x0010)(Edit, BlueprintVisible)
	int32                                         CurrentSkillLevel;                                 // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BEF[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   DataMaster;                                        // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SkillId;                                         // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SkillLevel;                                      // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillDataMasterData                 SkillData;                                         // 0x0088(0x0058)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF0[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillDataText_OutText;                 // 0x00E8(0x0018)()
	class FText                                   CallFunc_GetSkillDataText_OutText_1;               // 0x0100(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF1[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF2[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BF3[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF4[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x0160(0x0008)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF5[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0170(0x0058)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0218(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF6[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BF7[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0250(0x0018)()
	class FText                                   CallFunc_GetSkillDataText_OutText_2;               // 0x0268(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BF8[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolTip_SkillBoard_C_Set_Skill) == 0x000008, "Wrong alignment on WBP_ToolTip_SkillBoard_C_Set_Skill");
static_assert(sizeof(WBP_ToolTip_SkillBoard_C_Set_Skill) == 0x000290, "Wrong size on WBP_ToolTip_SkillBoard_C_Set_Skill");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, SkillId) == 0x000000, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, SkillLevel) == 0x000004, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, SwitchSkillData) == 0x000008, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::SwitchSkillData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, NewLocalVar_0) == 0x000060, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CurrentSkillLevel) == 0x000070, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CurrentSkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, DataMaster) == 0x000078, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::DataMaster' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, L_SkillId) == 0x000080, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::L_SkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, L_SkillLevel) == 0x000084, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::L_SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, SkillData) == 0x000088, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::SkillData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E0, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000E1, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, Temp_bool_Variable) == 0x0000E2, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E3, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetSkillDataText_OutText) == 0x0000E8, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetSkillDataText_OutText' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetSkillDataText_OutText_1) == 0x000100, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetSkillDataText_OutText_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000118, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x00011C, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000120, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, Temp_int_Variable) == 0x000124, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, K2Node_Select_Default) == 0x000128, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000130, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, Temp_int_Variable_1) == 0x000158, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetSkillMasteryParam_IsExists) == 0x00015C, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x000160, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000168, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000170, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, K2Node_MakeStruct_FormatArgumentData) == 0x0001C8, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, K2Node_MakeArray_Array) == 0x000208, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_Format_ReturnValue) == 0x000218, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, Temp_bool_Variable_1) == 0x000230, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x000238, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, K2Node_Select_Default_1) == 0x000248, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000250, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetSkillDataText_OutText_2) == 0x000268, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetSkillDataText_OutText_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetMasterDataManager_IsValid) == 0x000280, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_Set_Skill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000288, "Member 'WBP_ToolTip_SkillBoard_C_Set_Skill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.GetSkillDataText
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_ToolTip_SkillBoard_C_GetSkillDataText final
{
public:
	struct FSBSkillDataMasterData                 InSkillData;                                       // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InLevel;                                           // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BF9[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutText;                                           // 0x0060(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BFA[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BFB[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BFC[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       K2Node_Select_Default;                             // 0x008C(0x0004)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
};
static_assert(alignof(WBP_ToolTip_SkillBoard_C_GetSkillDataText) == 0x000008, "Wrong alignment on WBP_ToolTip_SkillBoard_C_GetSkillDataText");
static_assert(sizeof(WBP_ToolTip_SkillBoard_C_GetSkillDataText) == 0x0000B8, "Wrong size on WBP_ToolTip_SkillBoard_C_GetSkillDataText");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, InSkillData) == 0x000000, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::InSkillData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, InLevel) == 0x000058, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::InLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, OutText) == 0x000060, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::OutText' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, Temp_bool_Variable) == 0x000078, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_Subtract_IntInt_ReturnValue) == 0x00007C, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000080, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000088, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_BooleanAND_ReturnValue) == 0x000089, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, K2Node_Select_Default) == 0x00008C, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x000090, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_SkillBoard_C_GetSkillDataText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'WBP_ToolTip_SkillBoard_C_GetSkillDataText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

