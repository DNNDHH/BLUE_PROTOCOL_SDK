#pragma once

 

// Package: WBP_ToolTip_Skill

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BuffIconAssetData_structs.hpp"


namespace SDK::Params
{

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.Set Skill
// 0x05C8 (0x05C8 - 0x0000)
struct WBP_ToolTip_Skill_C_Set_Skill final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplaySkillLV;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CC0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 LocalBaseTacticalSkillMasterData;                  // 0x0010(0x0058)(Edit, BlueprintVisible)
	ESBSkillAbilityType                           LocalAbilityType;                                  // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CC1[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   DataMaster;                                        // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffCnt;                                           // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SkillId;                                         // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillMasteryParam                   SkillMastery;                                      // 0x0080(0x0008)(Edit, BlueprintVisible, NoDestructor)
	int32                                         L_SkillLevel;                                      // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CC2[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 SkillData;                                         // 0x0090(0x0058)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidIntervalAlter_ReturnValue;           // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC3[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC4[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC5[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC6[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_BP_ReturnValue;              // 0x0120(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC7[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC8[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillSettingConditionCheckData      K2Node_MakeStruct_SBSkillSettingConditionCheckData; // 0x0138(0x0020)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0158(0x0018)()
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CC9[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CCA[0x2];                                     // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkilllevelOthersIncludedPlus_ReturnValue; // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CCB[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01A0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CCC[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CCD[0x2];                                     // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CCE[0x5];                                     // 0x01F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CCF[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0210(0x0018)()
	bool                                          Temp_bool_Variable_5;                              // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x022B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x022E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD0[0x1];                                     // 0x022F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillAbillityTypeText_ReturnValue;     // 0x0230(0x0018)()
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue_1;     // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0258(0x0018)()
	bool                                          CallFunc_FindSkillMasteryParam_bIsValid;           // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD1[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_FindSkillMasteryParam_OutSkillMasteryParam; // 0x0274(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD2[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0280(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD3[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0320(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0330(0x0018)()
	class FText                                   K2Node_Select_Default_3;                           // 0x0348(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0360(0x0040)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD4[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x03A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x03B8(0x0018)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x03D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 K2Node_DynamicCast_AsImage;                        // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CD5[0x6];                                     // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD6[0x2];                                     // 0x03F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetSkillBufIconList_ReturnValue;          // 0x03F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue_1;          // 0x0408(0x0018)()
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBuffIconAssetData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0428(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CD7[0x3];                                     // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CD8[0x2];                                     // 0x045A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1; // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x0461(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CD9[0x2];                                     // 0x0462(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_6;                           // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CDA[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_2;                          // 0x0470(0x0010)(ReferenceParm)
	struct FSBSkillSettingConditionCheckData      K2Node_MakeStruct_SBSkillSettingConditionCheckData_1; // 0x0480(0x0020)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_2;           // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_BP_ReturnValue_1;            // 0x04A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CDB[0x6];                                     // 0x04B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x04B8(0x0058)()
	bool                                          Temp_bool_Variable_8;                              // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CDC[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillSettingConditionCheckData      K2Node_Select_Default_7;                           // 0x0518(0x0020)()
	float                                         CallFunc_GetRecastTimeBySkillSetting_ReturnValue;  // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CDD[0x2];                                     // 0x0542(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_8;                           // 0x0544(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0548(0x0018)()
	bool                                          CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill; // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CDE[0x3];                                     // 0x0561(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId;  // 0x0564(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel; // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid_1;           // 0x056C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CDF[0x3];                                     // 0x056D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster_1;    // 0x0570(0x0058)()
};
static_assert(alignof(WBP_ToolTip_Skill_C_Set_Skill) == 0x000008, "Wrong alignment on WBP_ToolTip_Skill_C_Set_Skill");
static_assert(sizeof(WBP_ToolTip_Skill_C_Set_Skill) == 0x0005C8, "Wrong size on WBP_ToolTip_Skill_C_Set_Skill");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, SkillId) == 0x000000, "Member 'WBP_ToolTip_Skill_C_Set_Skill::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, SkillLevel) == 0x000004, "Member 'WBP_ToolTip_Skill_C_Set_Skill::SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, DisplaySkillLV) == 0x000008, "Member 'WBP_ToolTip_Skill_C_Set_Skill::DisplaySkillLV' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, LocalBaseTacticalSkillMasterData) == 0x000010, "Member 'WBP_ToolTip_Skill_C_Set_Skill::LocalBaseTacticalSkillMasterData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, LocalAbilityType) == 0x000068, "Member 'WBP_ToolTip_Skill_C_Set_Skill::LocalAbilityType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, DataMaster) == 0x000070, "Member 'WBP_ToolTip_Skill_C_Set_Skill::DataMaster' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, BuffCnt) == 0x000078, "Member 'WBP_ToolTip_Skill_C_Set_Skill::BuffCnt' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, L_SkillId) == 0x00007C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::L_SkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, SkillMastery) == 0x000080, "Member 'WBP_ToolTip_Skill_C_Set_Skill::SkillMastery' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, L_SkillLevel) == 0x000088, "Member 'WBP_ToolTip_Skill_C_Set_Skill::L_SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, SkillData) == 0x000090, "Member 'WBP_ToolTip_Skill_C_Set_Skill::SkillData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_int_Array_Index_Variable) == 0x0000E8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_ValidIntervalAlter_ReturnValue) == 0x0000EC, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_ValidIntervalAlter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_int_Loop_Counter_Variable) == 0x0000F0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable) == 0x0000F4, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_int_Variable) == 0x0000FC, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_int_Variable_1) == 0x000100, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_1) == 0x000104, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000108, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetPlayerManager_ReturnValue) == 0x000110, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000118, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000119, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default) == 0x00011C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSkillInfo_BP_ReturnValue) == 0x000120, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_2) == 0x000128, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_IsValid_ReturnValue) == 0x000129, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x00012C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FTrunc_ReturnValue) == 0x000130, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000134, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeStruct_SBSkillSettingConditionCheckData) == 0x000138, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeStruct_SBSkillSettingConditionCheckData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_IntToText_ReturnValue) == 0x000158, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000170, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_3) == 0x000174, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Subtract_IntInt_ReturnValue) == 0x000178, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Clamp_ReturnValue) == 0x00017C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000180, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000181, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Add_IntInt_ReturnValue_1) == 0x000184, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetCurrentSkilllevelOthersIncludedPlus_ReturnValue) == 0x000188, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetCurrentSkilllevelOthersIncludedPlus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000190, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue) == 0x0001A0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001B8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x0001C0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001E8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_4) == 0x0001E9, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_int_Variable_2) == 0x0001EC, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0001F0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_1) == 0x0001F1, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001F2, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0001F8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000208, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000210, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_5) == 0x000228, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_2) == 0x000229, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00022A, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00022B, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00022C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_BooleanOR_ReturnValue) == 0x00022D, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_BooleanOR_ReturnValue_1) == 0x00022E, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSkillAbillityTypeText_ReturnValue) == 0x000230, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSkillAbillityTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetMasterSkillDataText_ReturnValue_1) == 0x000248, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetMasterSkillDataText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000258, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FindSkillMasteryParam_bIsValid) == 0x000270, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FindSkillMasteryParam_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FindSkillMasteryParam_OutSkillMasteryParam) == 0x000274, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FindSkillMasteryParam_OutSkillMasteryParam' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00027C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSkillLevelText_ReturnValue) == 0x000280, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000298, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_BooleanAND_ReturnValue) == 0x000299, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetClassNameText_ReturnValue) == 0x0002A0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002B0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002C8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeStruct_FormatArgumentData) == 0x0002E0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeArray_Array) == 0x000320, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Format_ReturnValue) == 0x000330, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_3) == 0x000348, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeStruct_FormatArgumentData_1) == 0x000360, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_6) == 0x0003A0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeArray_Array_1) == 0x0003A8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Format_ReturnValue_1) == 0x0003B8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetChildAt_ReturnValue) == 0x0003D0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_DynamicCast_AsImage) == 0x0003D8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_DynamicCast_AsImage' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_DynamicCast_bSuccess) == 0x0003E0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0003E1, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetPlayerManager_ReturnValue_1) == 0x0003E8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_7) == 0x0003F0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0003F1, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_4) == 0x0003F4, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSkillBufIconList_ReturnValue) == 0x0003F8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSkillBufIconList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSkillLevelText_ReturnValue_1) == 0x000408, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSkillLevelText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Array_Get_Item) == 0x000420, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetDataTableRowFromName_OutRow) == 0x000428, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000450, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Array_Length_ReturnValue) == 0x000454, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Less_IntInt_ReturnValue) == 0x000458, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000459, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1) == 0x00045C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000460, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_5) == 0x000461, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_6) == 0x000464, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x000468, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeArray_Array_2) == 0x000470, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_MakeStruct_SBSkillSettingConditionCheckData_1) == 0x000480, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_MakeStruct_SBSkillSettingConditionCheckData_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetPlayerManager_ReturnValue_2) == 0x0004A0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetPlayerManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetSkillInfo_BP_ReturnValue_1) == 0x0004A8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetSkillInfo_BP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_IsValid_ReturnValue_1) == 0x0004B0, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FindSkillDataMaster_bIsValid) == 0x0004B1, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0004B8, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, Temp_bool_Variable_8) == 0x000510, "Member 'WBP_ToolTip_Skill_C_Set_Skill::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_7) == 0x000518, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetRecastTimeBySkillSetting_ReturnValue) == 0x000538, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetRecastTimeBySkillSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FTrunc_ReturnValue_1) == 0x00053C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000540, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000541, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, K2Node_Select_Default_8) == 0x000544, "Member 'WBP_ToolTip_Skill_C_Set_Skill::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000548, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill) == 0x000560, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId) == 0x000564, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel) == 0x000568, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FindSkillDataMaster_bIsValid_1) == 0x00056C, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FindSkillDataMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_Set_Skill, CallFunc_FindSkillDataMaster_SkillDataMaster_1) == 0x000570, "Member 'WBP_ToolTip_Skill_C_Set_Skill::CallFunc_FindSkillDataMaster_SkillDataMaster_1' has a wrong offset!");

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.BuffIconsCollapsed
// 0x0030 (0x0030 - 0x0000)
struct WBP_ToolTip_Skill_C_BuffIconsCollapsed final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CE0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CE1[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_DynamicCast_AsImage;                        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CE2[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolTip_Skill_C_BuffIconsCollapsed) == 0x000008, "Wrong alignment on WBP_ToolTip_Skill_C_BuffIconsCollapsed");
static_assert(sizeof(WBP_ToolTip_Skill_C_BuffIconsCollapsed) == 0x000030, "Wrong size on WBP_ToolTip_Skill_C_BuffIconsCollapsed");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, Temp_int_Variable) == 0x000000, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, Temp_int_Variable_1) == 0x000004, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, K2Node_DynamicCast_AsImage) == 0x000020, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::K2Node_DynamicCast_AsImage' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_BuffIconsCollapsed, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_ToolTip_Skill_C_BuffIconsCollapsed::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetUnleashedSkill
// 0x0228 (0x0228 - 0x0000)
struct WBP_ToolTip_Skill_C_SetUnleashedSkill final
{
public:
	ESBSkillType                                  InSkillIType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           InSkillAbilityType;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CE3[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InReleaseLevel;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalSkillTypeName;                                // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalReleaseLevel;                                 // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           LocalSkillAbilityType;                             // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  LocalSkillType;                                    // 0x001E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CE4[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CE5[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CE6[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CE7[0x5];                                     // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0130(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0148(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x01B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01C8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ToolTip_Skill_C_SetUnleashedSkill) == 0x000008, "Wrong alignment on WBP_ToolTip_Skill_C_SetUnleashedSkill");
static_assert(sizeof(WBP_ToolTip_Skill_C_SetUnleashedSkill) == 0x000228, "Wrong size on WBP_ToolTip_Skill_C_SetUnleashedSkill");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, InSkillIType) == 0x000000, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::InSkillIType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, InSkillAbilityType) == 0x000001, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::InSkillAbilityType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, InClassType) == 0x000002, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::InClassType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, InReleaseLevel) == 0x000004, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::InReleaseLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, LocalSkillTypeName) == 0x000008, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::LocalSkillTypeName' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, LocalReleaseLevel) == 0x000018, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::LocalReleaseLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, LocalClassType) == 0x00001C, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::LocalClassType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, LocalSkillAbilityType) == 0x00001D, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::LocalSkillAbilityType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, LocalSkillType) == 0x00001E, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::LocalSkillType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000030, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetClassNameText_ReturnValue) == 0x000070, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000080, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000088, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000A0, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, K2Node_MakeArray_Array) == 0x0000F8, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000108, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Format_ReturnValue) == 0x000110, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_BooleanAND_ReturnValue) == 0x000128, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, Temp_bool_Variable) == 0x000129, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_MakeLiteralBool_ReturnValue) == 0x00012A, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, K2Node_Select_Default) == 0x000130, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Conv_IntToText_ReturnValue) == 0x000148, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, K2Node_MakeStruct_FormatArgumentData_1) == 0x000160, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0001B0, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_Format_ReturnValue_1) == 0x0001C8, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0001E0, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0001F0, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x000200, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x000210, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, K2Node_SwitchEnum_CmpSuccess) == 0x000220, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_IsValid_ReturnValue) == 0x000221, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_IsValid_ReturnValue_1) == 0x000222, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_IsValid_ReturnValue_2) == 0x000223, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetUnleashedSkill, CallFunc_IsValid_ReturnValue_3) == 0x000224, "Member 'WBP_ToolTip_Skill_C_SetUnleashedSkill::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.GetTacticalSkillBaseInfo
// 0x0080 (0x0080 - 0x0000)
struct WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo final
{
public:
	struct FSBSkillDataMasterData                 InSkillMasterData;                                 // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsTacticalSkill;                                   // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CE8[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutBaseSkillId;                                    // 0x005C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutBaseSkillLevel;                                 // 0x0060(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalConditionSkillId;                             // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           LocalAbilityType;                                  // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  LocalSkillType;                                    // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CE9[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillLevel;                                   // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo) == 0x000008, "Wrong alignment on WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo");
static_assert(sizeof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo) == 0x000080, "Wrong size on WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, InSkillMasterData) == 0x000000, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::InSkillMasterData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, IsTacticalSkill) == 0x000058, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::IsTacticalSkill' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, OutBaseSkillId) == 0x00005C, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::OutBaseSkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, OutBaseSkillLevel) == 0x000060, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::OutBaseSkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, LocalConditionSkillId) == 0x000064, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::LocalConditionSkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, LocalAbilityType) == 0x000068, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::LocalAbilityType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, LocalSkillType) == 0x000069, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::LocalSkillType' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, LocalSkillLevel) == 0x00006C, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, LocalSkillId) == 0x000070, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::LocalSkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000074, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1) == 0x000078, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, K2Node_SwitchEnum_CmpSuccess) == 0x00007C, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x00007D, "Member 'WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetSkillActiveAbilityLvReference
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConditionSkillLevel;                               // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CEA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 SkillData;                                         // 0x0010(0x0058)(Edit, BlueprintVisible)
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0068(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CEB[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0088(0x0058)()
};
static_assert(alignof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference) == 0x000008, "Wrong alignment on WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference");
static_assert(sizeof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference) == 0x0000E0, "Wrong size on WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, SkillId) == 0x000000, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, SkillLevel) == 0x000004, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, ConditionSkillLevel) == 0x000008, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::ConditionSkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, SkillData) == 0x000010, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::SkillData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, CallFunc_GetSkillLevelText_ReturnValue) == 0x000068, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000080, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, CallFunc_FindSkillDataMaster_bIsValid) == 0x000081, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000088, "Member 'WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetDescription
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_ToolTip_Skill_C_SetDescription final
{
public:
	struct FSBSkillDataMasterData                 SBSkillDataMasterData;                             // 0x0000(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         DisplaySkillLV1;                                   // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplaySkillLV;                                    // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CEC[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CED[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CEE[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       K2Node_Select_Default;                             // 0x0074(0x0004)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
};
static_assert(alignof(WBP_ToolTip_Skill_C_SetDescription) == 0x000008, "Wrong alignment on WBP_ToolTip_Skill_C_SetDescription");
static_assert(sizeof(WBP_ToolTip_Skill_C_SetDescription) == 0x0000A0, "Wrong size on WBP_ToolTip_Skill_C_SetDescription");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, SBSkillDataMasterData) == 0x000000, "Member 'WBP_ToolTip_Skill_C_SetDescription::SBSkillDataMasterData' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, DisplaySkillLV1) == 0x000058, "Member 'WBP_ToolTip_Skill_C_SetDescription::DisplaySkillLV1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, DisplaySkillLV) == 0x00005C, "Member 'WBP_ToolTip_Skill_C_SetDescription::DisplaySkillLV' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000060, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_Subtract_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_BooleanAND_ReturnValue) == 0x000070, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, Temp_bool_Variable) == 0x000071, "Member 'WBP_ToolTip_Skill_C_SetDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, K2Node_Select_Default) == 0x000074, "Member 'WBP_ToolTip_Skill_C_SetDescription::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x000078, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_Skill_C_SetDescription, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'WBP_ToolTip_Skill_C_SetDescription::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

