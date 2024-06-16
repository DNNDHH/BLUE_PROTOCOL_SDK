#pragma once

 

// Package: WBP_SkillDescriptionBasics

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.Set Skill
// 0x0788 (0x0788 - 0x0000)
struct WBP_SkillDescriptionBasics_C_Set_Skill final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplaySkillLV;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B72[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalBufIconList;                                  // 0x0010(0x0010)(Edit, BlueprintVisible)
	struct FSBSkillDataMasterData                 NSkill;                                            // 0x0020(0x0058)(Edit, BlueprintVisible)
	int32                                         ClassLv;                                           // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlpha;                                           // 0x007C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          L_IsTacticalSkill;                                 // 0x007D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B73[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   DataMaster;                                        // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffCnt;                                           // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_SkillId;                                         // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillMasteryParam                   SkillMastery;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, NoDestructor)
	int32                                         L_SkillLevel;                                      // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B74[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 SkillData;                                         // 0x00A0(0x0058)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B75[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0107(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B76[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonToolTip_AbilityPerk_C*           CallFunc_Create_ReturnValue;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidIntervalAlter_ReturnValue;           // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B77[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0130(0x0018)()
	bool                                          CallFunc_IsOutCheckDebugMode_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B78[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B79[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B7A[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_BP_ReturnValue;              // 0x0170(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B7B[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWPB_BuffIcon_C*                        K2Node_DynamicCast_AsWPB_Buff_Icon;                // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B7C[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0198(0x0018)()
	struct FSBSkillSettingConditionCheckData      K2Node_MakeStruct_SBSkillSettingConditionCheckData; // 0x01B0(0x0020)()
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B7D[0x2];                                     // 0x01D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01D8(0x0018)()
	class FName                                   Temp_name_Variable;                                // 0x01F0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B7E[0x2];                                     // 0x0202(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       K2Node_Select_Default_1;                           // 0x020C(0x0004)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B7F[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0228(0x0018)()
	class FName                                   Temp_name_Variable_1;                              // 0x0240(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutCheckDebugMode_ReturnValue_1;        // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B80[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B81[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0268(0x0018)()
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue_1;     // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B82[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x02C8(0x0058)()
	class FName                                   K2Node_Select_Default_2;                           // 0x0320(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0338(0x0018)()
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue_1;          // 0x0350(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists_1;    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B83[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue_1; // 0x0390(0x0058)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03E8(0x0018)()
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue_2;     // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0410(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0460(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0470(0x0018)()
	int32                                         Temp_int_Variable_2;                               // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B84[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0490(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x04D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04E0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B85[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0500(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0510(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0518(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0530(0x0018)()
	class FName                                   Temp_name_Variable_3;                              // 0x0548(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_3;                           // 0x0550(0x0018)()
	bool                                          Temp_bool_Variable_6;                              // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B86[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_4;                           // 0x0570(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B87[0x3];                                     // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_5;                           // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0591(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0592(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B88[0x1];                                     // 0x0593(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_7;                           // 0x0594(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B89[0x4];                                     // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x05A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x05B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x05C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x05D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UCanvasPanel*>                   K2Node_MakeArray_Array_2;                          // 0x05E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x05F0(0x0018)()
	class UCanvasPanel*                           CallFunc_Array_Get_Item;                           // 0x0608(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0610(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0614(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B8A[0x3];                                     // 0x0615(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetSkillBufIconList_ReturnValue;          // 0x0620(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B8B[0x3];                                     // 0x0631(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x0634(0x0008)(NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x063C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B8C[0x3];                                     // 0x063D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1; // 0x0640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0644(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B8D[0x3];                                     // 0x0645(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_3;                          // 0x0648(0x0010)(ReferenceParm)
	struct FSBSkillSettingConditionCheckData      K2Node_MakeStruct_SBSkillSettingConditionCheckData_1; // 0x0658(0x0020)()
	int32                                         K2Node_Select_Default_8;                           // 0x0678(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B8E[0x4];                                     // 0x067C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_2;           // 0x0680(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_BP_ReturnValue_1;            // 0x0688(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists_2;    // 0x0691(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B8F[0x6];                                     // 0x0692(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue_2; // 0x0698(0x0058)()
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x06F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x06F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x06FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x06FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x06FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B90[0x1];                                     // 0x06FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillSettingConditionCheckData      K2Node_Select_Default_9;                           // 0x0700(0x0020)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B91[0x3];                                     // 0x0721(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRecastTimeBySkillSetting_ReturnValue;  // 0x0724(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0728(0x0018)()
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0740(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0744(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B92[0x3];                                     // 0x0745(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0748(0x0018)()
	class FText                                   K2Node_Select_Default_10;                          // 0x0760(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B93[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillDescriptionBasics_C_Set_Skill) == 0x000008, "Wrong alignment on WBP_SkillDescriptionBasics_C_Set_Skill");
static_assert(sizeof(WBP_SkillDescriptionBasics_C_Set_Skill) == 0x000788, "Wrong size on WBP_SkillDescriptionBasics_C_Set_Skill");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, SkillId) == 0x000000, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, SkillLevel) == 0x000004, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, DisplaySkillLV) == 0x000008, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::DisplaySkillLV' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, LocalBufIconList) == 0x000010, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::LocalBufIconList' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, NSkill) == 0x000020, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::NSkill' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, ClassLv) == 0x000078, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::ClassLv' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, IsAlpha) == 0x00007C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::IsAlpha' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, L_IsTacticalSkill) == 0x00007D, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::L_IsTacticalSkill' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, DataMaster) == 0x000080, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::DataMaster' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, BuffCnt) == 0x000088, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::BuffCnt' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, L_SkillId) == 0x00008C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::L_SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, SkillMastery) == 0x000090, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::SkillMastery' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, L_SkillLevel) == 0x000098, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::L_SkillLevel' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, SkillData) == 0x0000A0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::SkillData' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable) == 0x0000F8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Variable) == 0x0000FC, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Variable_1) == 0x000100, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_1) == 0x000104, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_byte_Variable) == 0x000105, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_byte_Variable_1) == 0x000106, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_2) == 0x000107, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000108, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Create_ReturnValue) == 0x000110, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Loop_Counter_Variable) == 0x000118, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Loop_Counter_Variable_1) == 0x00011C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Add_IntInt_ReturnValue) == 0x000120, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Add_IntInt_ReturnValue_1) == 0x000124, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Array_Index_Variable) == 0x000128, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_3) == 0x00012C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_ValidIntervalAlter_ReturnValue) == 0x00012D, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_ValidIntervalAlter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_IntToText_ReturnValue) == 0x000130, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_IsOutCheckDebugMode_ReturnValue) == 0x000148, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_IsOutCheckDebugMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Array_Index_Variable_1) == 0x00014C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_4) == 0x000150, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000158, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetPlayerManager_ReturnValue) == 0x000160, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000168, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default) == 0x00016C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillInfo_BP_ReturnValue) == 0x000170, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetChildAt_ReturnValue) == 0x000178, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_DynamicCast_AsWPB_Buff_Icon) == 0x000188, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_DynamicCast_AsWPB_Buff_Icon' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x000194, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_FloatToText_ReturnValue) == 0x000198, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeStruct_SBSkillSettingConditionCheckData) == 0x0001B0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeStruct_SBSkillSettingConditionCheckData' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FTrunc_ReturnValue) == 0x0001D0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001D4, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001D5, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001D8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_name_Variable) == 0x0001F0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001F8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Array_Length_ReturnValue) == 0x0001FC, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000200, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_BooleanAND_ReturnValue) == 0x000201, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000204, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000208, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_1) == 0x00020C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Clamp_ReturnValue) == 0x000210, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x000218, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue) == 0x000228, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_name_Variable_1) == 0x000240, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_IsOutCheckDebugMode_ReturnValue_1) == 0x000248, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_IsOutCheckDebugMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_5) == 0x000249, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000250, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Add_IntInt_ReturnValue_2) == 0x000260, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillLevelText_ReturnValue) == 0x000268, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetMasterSkillDataText_ReturnValue_1) == 0x000280, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetMasterSkillDataText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_TextToString_ReturnValue) == 0x000290, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Concat_StrStr_ReturnValue) == 0x0002A0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002B0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0002C0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0002C8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_2) == 0x000320, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000328, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000338, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillLevelText_ReturnValue_1) == 0x000350, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillLevelText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000368, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000378, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_IsExists_1) == 0x000388, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_IsExists_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_ReturnValue_1) == 0x000390, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003E8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetMasterSkillDataText_ReturnValue_2) == 0x000400, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetMasterSkillDataText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeStruct_FormatArgumentData) == 0x000410, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000450, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeArray_Array) == 0x000460, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000470, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_int_Variable_2) == 0x000488, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeStruct_FormatArgumentData_1) == 0x000490, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeArray_Array_1) == 0x0004D0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Format_ReturnValue) == 0x0004E0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_IsValid_ReturnValue_1) == 0x0004F8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000500, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_name_Variable_2) == 0x000510, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000518, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Format_ReturnValue_1) == 0x000530, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_name_Variable_3) == 0x000548, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_3) == 0x000550, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_6) == 0x000568, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_4) == 0x000570, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000588, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_5) == 0x00058C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_SwitchEnum_CmpSuccess) == 0x000590, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_7) == 0x000591, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_6) == 0x000592, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_7) == 0x000594, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x0005A0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0005B0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0005C0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0005D0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeArray_Array_2) == 0x0005E0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0005F0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Array_Get_Item) == 0x000608, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Array_Length_ReturnValue_1) == 0x000610, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Less_IntInt_ReturnValue) == 0x000614, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000618, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillBufIconList_ReturnValue) == 0x000620, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillBufIconList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillMasteryParam_IsExists) == 0x000630, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x000634, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_8) == 0x00063C, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1) == 0x000640, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000644, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeArray_Array_3) == 0x000648, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_MakeStruct_SBSkillSettingConditionCheckData_1) == 0x000658, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_MakeStruct_SBSkillSettingConditionCheckData_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_8) == 0x000678, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetPlayerManager_ReturnValue_2) == 0x000680, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetPlayerManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetSkillInfo_BP_ReturnValue_1) == 0x000688, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetSkillInfo_BP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_IsValid_ReturnValue_2) == 0x000690, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_IsExists_2) == 0x000691, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_IsExists_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FindSkillDataDataBySkillId_ReturnValue_2) == 0x000698, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FindSkillDataDataBySkillId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Array_Get_Item_1) == 0x0006F0, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Array_Length_ReturnValue_2) == 0x0006F8, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Less_IntInt_ReturnValue_1) == 0x0006FC, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_9) == 0x0006FD, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, Temp_bool_Variable_10) == 0x0006FE, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_9) == 0x000700, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000720, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetRecastTimeBySkillSetting_ReturnValue) == 0x000724, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetRecastTimeBySkillSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000728, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_FTrunc_ReturnValue_1) == 0x000740, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000744, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000748, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, K2Node_Select_Default_10) == 0x000760, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetMasterDataManager_IsValid) == 0x000778, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_Set_Skill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000780, "Member 'WBP_SkillDescriptionBasics_C_Set_Skill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.BuffIconsCollapsed
// 0x0030 (0x0030 - 0x0000)
struct WBP_SkillDescriptionBasics_C_BuffIconsCollapsed final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B94[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B95[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B96[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWPB_BuffIcon_C*                        K2Node_DynamicCast_AsWPB_Buff_Icon;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B97[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed) == 0x000008, "Wrong alignment on WBP_SkillDescriptionBasics_C_BuffIconsCollapsed");
static_assert(sizeof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed) == 0x000030, "Wrong size on WBP_SkillDescriptionBasics_C_BuffIconsCollapsed");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, Temp_int_Variable) == 0x000000, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, K2Node_DynamicCast_AsWPB_Buff_Icon) == 0x000020, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::K2Node_DynamicCast_AsWPB_Buff_Icon' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_BuffIconsCollapsed, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_SkillDescriptionBasics_C_BuffIconsCollapsed::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.GetToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_SkillDescriptionBasics_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillDescriptionBasics_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on WBP_SkillDescriptionBasics_C_GetToolTipWidget_0");
static_assert(sizeof(WBP_SkillDescriptionBasics_C_GetToolTipWidget_0) == 0x000010, "Wrong size on WBP_SkillDescriptionBasics_C_GetToolTipWidget_0");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'WBP_SkillDescriptionBasics_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillDescriptionBasics_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_SkillDescriptionBasics_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

