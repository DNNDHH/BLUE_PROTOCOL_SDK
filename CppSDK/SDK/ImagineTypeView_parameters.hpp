#pragma once

 

// Package: ImagineTypeView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineTypeView.ImagineTypeView_C.ExecuteUbergraph_ImagineTypeView
// 0x00B8 (0x00B8 - 0x0000)
struct ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926A[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bEnableFlatStyle;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0020(0x0088)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926C[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView) == 0x000008, "Wrong alignment on ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView");
static_assert(sizeof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView) == 0x0000B8, "Wrong size on ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, EntryPoint) == 0x000000, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, K2Node_Event_IsDesignTime) == 0x000006, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000008, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, K2Node_CustomEvent_bEnableFlatStyle) == 0x00001C, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::K2Node_CustomEvent_bEnableFlatStyle' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, K2Node_MakeStruct_SlateFontInfo) == 0x000020, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, Temp_bool_Variable) == 0x0000A8, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_GetStackBNum_ReturnValue) == 0x0000AC, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B0, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_BooleanAND_ReturnValue) == 0x0000B1, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, CallFunc_BooleanOR_ReturnValue) == 0x0000B2, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView, K2Node_Select_Default) == 0x0000B3, "Member 'ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView::K2Node_Select_Default' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.Set Enable Flat Style
// 0x0001 (0x0001 - 0x0000)
struct ImagineTypeView_C_Set_Enable_Flat_Style final
{
public:
	bool                                          Param_bEnableFlatStyle;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineTypeView_C_Set_Enable_Flat_Style) == 0x000001, "Wrong alignment on ImagineTypeView_C_Set_Enable_Flat_Style");
static_assert(sizeof(ImagineTypeView_C_Set_Enable_Flat_Style) == 0x000001, "Wrong size on ImagineTypeView_C_Set_Enable_Flat_Style");
static_assert(offsetof(ImagineTypeView_C_Set_Enable_Flat_Style, Param_bEnableFlatStyle) == 0x000000, "Member 'ImagineTypeView_C_Set_Enable_Flat_Style::Param_bEnableFlatStyle' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ImagineTypeView_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineTypeView_C_PreConstruct) == 0x000001, "Wrong alignment on ImagineTypeView_C_PreConstruct");
static_assert(sizeof(ImagineTypeView_C_PreConstruct) == 0x000001, "Wrong size on ImagineTypeView_C_PreConstruct");
static_assert(offsetof(ImagineTypeView_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ImagineTypeView_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineParam
// 0x0460 (0x0460 - 0x0000)
struct ImagineTypeView_C_ApplyBattleImagineParam final
{
public:
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsPossession;                                     // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926D[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalPossessionDesc;                               // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionName;                               // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionTypeName;                           // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedTypeName;                             // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedName;                                 // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalSummonedInfo;                                 // 0x0108(0x0048)(Edit, BlueprintVisible)
	class FString                                 LocalSummonedDesc;                                 // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBImagineSkillInfo*                    ImagineSkillInfo;                                  // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926E[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_1;       // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_2;       // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x01A8(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926F[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x01F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9270[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0200(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0218(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0230(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0280(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0290(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02C0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0300(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0318(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0358(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0368(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName_1;     // 0x0390(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsName_OutArtsName;           // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x03C8(0x0018)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9271[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x03F0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x03F8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0438(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0448(0x0018)()
};
static_assert(alignof(ImagineTypeView_C_ApplyBattleImagineParam) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyBattleImagineParam");
static_assert(sizeof(ImagineTypeView_C_ApplyBattleImagineParam) == 0x000460, "Wrong size on ImagineTypeView_C_ApplyBattleImagineParam");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, ImagineMaster) == 0x000000, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, bIsPossession) == 0x0000B0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::bIsPossession' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalPossessionDesc) == 0x0000B8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalPossessionDesc' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalPossessionName) == 0x0000C8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalPossessionName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalPossessionTypeName) == 0x0000D8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalPossessionTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalSummonedTypeName) == 0x0000E8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalSummonedTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalSummonedName) == 0x0000F8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalSummonedName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalSummonedInfo) == 0x000108, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalSummonedInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, LocalSummonedDesc) == 0x000150, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::LocalSummonedDesc' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, ImagineSkillInfo) == 0x000160, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::ImagineSkillInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetMasterImagineText_ReturnValue) == 0x000170, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetMasterImagineText_ReturnValue_1) == 0x000180, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetMasterImagineText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToName_ReturnValue) == 0x000190, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetMasterImagineText_ReturnValue_2) == 0x000198, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetMasterImagineText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetDataTableRowFromName_OutRow) == 0x0001A8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001F0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0001F4, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue) == 0x000200, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000218, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, K2Node_MakeStruct_FormatArgumentData) == 0x000230, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000270, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, K2Node_MakeArray_Array) == 0x000280, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000290, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Format_ReturnValue) == 0x0002A8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002C0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0002D8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002E8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000300, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, K2Node_MakeStruct_FormatArgumentData_1) == 0x000318, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, K2Node_MakeArray_Array_1) == 0x000358, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Format_ReturnValue_1) == 0x000368, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x000380, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetImagineArtsTypeName_OutTypeName_1) == 0x000390, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetImagineArtsTypeName_OutTypeName_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetImagineArtsName_OutArtsName) == 0x0003A0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetImagineArtsName_OutArtsName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetTextFromAsset_ReturnValue) == 0x0003B0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0003C0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0003C8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetPlayerManager_ReturnValue) == 0x0003E0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x0003E8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x0003F0, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003F8, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, K2Node_MakeArray_Array_2) == 0x000438, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineParam, CallFunc_Format_ReturnValue_2) == 0x000448, "Member 'ImagineTypeView_C_ApplyBattleImagineParam::CallFunc_Format_ReturnValue_2' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.SetEquipPosition
// 0x00B0 (0x00B0 - 0x0000)
struct ImagineTypeView_C_SetEquipPosition final
{
public:
	struct FSBMasterImagine                       ImagineData;                                       // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineTypeView_C_SetEquipPosition) == 0x000008, "Wrong alignment on ImagineTypeView_C_SetEquipPosition");
static_assert(sizeof(ImagineTypeView_C_SetEquipPosition) == 0x0000B0, "Wrong size on ImagineTypeView_C_SetEquipPosition");
static_assert(offsetof(ImagineTypeView_C_SetEquipPosition, ImagineData) == 0x000000, "Member 'ImagineTypeView_C_SetEquipPosition::ImagineData' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyInnerImagineParam
// 0x00B8 (0x00B8 - 0x0000)
struct ImagineTypeView_C_ApplyInnerImagineParam final
{
public:
	struct FSBMasterImagine                       MasterData;                                        // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Level;                                             // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineTypeView_C_ApplyInnerImagineParam) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyInnerImagineParam");
static_assert(sizeof(ImagineTypeView_C_ApplyInnerImagineParam) == 0x0000B8, "Wrong size on ImagineTypeView_C_ApplyInnerImagineParam");
static_assert(offsetof(ImagineTypeView_C_ApplyInnerImagineParam, MasterData) == 0x000000, "Member 'ImagineTypeView_C_ApplyInnerImagineParam::MasterData' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyInnerImagineParam, Level) == 0x0000B0, "Member 'ImagineTypeView_C_ApplyInnerImagineParam::Level' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyImagineParam
// 0x00E0 (0x00E0 - 0x0000)
struct ImagineTypeView_C_ApplyImagineParam final
{
public:
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Level;                                             // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9272[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineTypeView_C_ApplyImagineParam) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyImagineParam");
static_assert(sizeof(ImagineTypeView_C_ApplyImagineParam) == 0x0000E0, "Wrong size on ImagineTypeView_C_ApplyImagineParam");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, ImagineMaster) == 0x000000, "Member 'ImagineTypeView_C_ApplyImagineParam::ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, Level) == 0x0000B0, "Member 'ImagineTypeView_C_ApplyImagineParam::Level' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, Temp_byte_Variable) == 0x0000B4, "Member 'ImagineTypeView_C_ApplyImagineParam::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, K2Node_SwitchEnum_CmpSuccess) == 0x0000B5, "Member 'ImagineTypeView_C_ApplyImagineParam::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x0000B8, "Member 'ImagineTypeView_C_ApplyImagineParam::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x0000C8, "Member 'ImagineTypeView_C_ApplyImagineParam::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyImagineParam, K2Node_Select_Default) == 0x0000D8, "Member 'ImagineTypeView_C_ApplyImagineParam::K2Node_Select_Default' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.Set Development View
// 0x0010 (0x0010 - 0x0000)
struct ImagineTypeView_C_Set_Development_View final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9273[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineTypeView_C_Set_Development_View) == 0x000008, "Wrong alignment on ImagineTypeView_C_Set_Development_View");
static_assert(sizeof(ImagineTypeView_C_Set_Development_View) == 0x000010, "Wrong size on ImagineTypeView_C_Set_Development_View");
static_assert(offsetof(ImagineTypeView_C_Set_Development_View, Temp_bool_Variable) == 0x000000, "Member 'ImagineTypeView_C_Set_Development_View::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Development_View, K2Node_Select_Default) == 0x000008, "Member 'ImagineTypeView_C_Set_Development_View::K2Node_Select_Default' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyData
// 0x0200 (0x0200 - 0x0000)
struct ImagineTypeView_C_ApplyData final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9274[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0120(0x00B0)()
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9275[0x3];                                     // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBImagineDescText_ReturnValue;     // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
};
static_assert(alignof(ImagineTypeView_C_ApplyData) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyData");
static_assert(sizeof(ImagineTypeView_C_ApplyData) == 0x000200, "Wrong size on ImagineTypeView_C_ApplyData");
static_assert(offsetof(ImagineTypeView_C_ApplyData, OwnItemInfo) == 0x000000, "Member 'ImagineTypeView_C_ApplyData::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000118, "Member 'ImagineTypeView_C_ApplyData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_FindImagineMaster_bIsValid) == 0x000119, "Member 'ImagineTypeView_C_ApplyData::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_FindImagineMaster_ImagineMaster) == 0x000120, "Member 'ImagineTypeView_C_ApplyData::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_GetItemLevel_ReturnValue) == 0x0001D0, "Member 'ImagineTypeView_C_ApplyData::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001D4, "Member 'ImagineTypeView_C_ApplyData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_GetStackBImagineDescText_ReturnValue) == 0x0001D8, "Member 'ImagineTypeView_C_ApplyData::CallFunc_GetStackBImagineDescText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'ImagineTypeView_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineData
// 0x0238 (0x0238 - 0x0000)
struct ImagineTypeView_C_ApplyBattleImagineData final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9276[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9277[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBImagineDescText_ReturnValue;     // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9278[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9279[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBImagineDescText_ReturnValue_1;   // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_927A[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue_1;               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_927B[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0180(0x00B0)()
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineTypeView_C_ApplyBattleImagineData) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyBattleImagineData");
static_assert(sizeof(ImagineTypeView_C_ApplyBattleImagineData) == 0x000238, "Wrong size on ImagineTypeView_C_ApplyBattleImagineData");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, Info) == 0x000000, "Member 'ImagineTypeView_C_ApplyBattleImagineData::Info' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000118, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_GetStackBNum_ReturnValue) == 0x00011C, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_Greater_IntInt_ReturnValue) == 0x000120, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_GetStackBImagineDescText_ReturnValue) == 0x000128, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_GetStackBImagineDescText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000138, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, Temp_bool_Variable) == 0x000158, "Member 'ImagineTypeView_C_ApplyBattleImagineData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_GetStackBImagineDescText_ReturnValue_1) == 0x000160, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_GetStackBImagineDescText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, K2Node_Select_Default) == 0x000170, "Member 'ImagineTypeView_C_ApplyBattleImagineData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_GetStackBNum_ReturnValue_1) == 0x000174, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_GetStackBNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000178, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_FindImagineMaster_bIsValid) == 0x000179, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_FindImagineMaster_ImagineMaster) == 0x000180, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineData, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000230, "Member 'ImagineTypeView_C_ApplyBattleImagineData::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParam
// 0x0598 (0x0598 - 0x0000)
struct ImagineTypeView_C_ApplyBattleImagineStackParam final
{
public:
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 StackBText;                                        // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Info;                                              // 0x00C0(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsPossession;                                     // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_927C[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalPossessionDesc;                               // 0x01E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionName;                               // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionTypeName;                           // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedTypeName;                             // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedName;                                 // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalSummonedInfo;                                 // 0x0230(0x0048)(Edit, BlueprintVisible)
	class FString                                 LocalSummonedDesc;                                 // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBImagineSkillInfo*                    ImagineSkillInfo;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_1;       // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x02D0(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_927D[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_2;       // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_927E[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0338(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0350(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0368(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x03F8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0410(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0420(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0438(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0450(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0490(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x04A0(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName_1;     // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsName_OutArtsName;           // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x04E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0500(0x0018)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_927F[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x0528(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0530(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0570(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0580(0x0018)()
};
static_assert(alignof(ImagineTypeView_C_ApplyBattleImagineStackParam) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyBattleImagineStackParam");
static_assert(sizeof(ImagineTypeView_C_ApplyBattleImagineStackParam) == 0x000598, "Wrong size on ImagineTypeView_C_ApplyBattleImagineStackParam");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, ImagineMaster) == 0x000000, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, StackBText) == 0x0000B0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::StackBText' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, Info) == 0x0000C0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::Info' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, bIsPossession) == 0x0001D8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::bIsPossession' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalPossessionDesc) == 0x0001E0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalPossessionDesc' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalPossessionName) == 0x0001F0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalPossessionName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalPossessionTypeName) == 0x000200, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalPossessionTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalSummonedTypeName) == 0x000210, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalSummonedTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalSummonedName) == 0x000220, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalSummonedName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalSummonedInfo) == 0x000230, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalSummonedInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, LocalSummonedDesc) == 0x000278, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::LocalSummonedDesc' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, ImagineSkillInfo) == 0x000288, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::ImagineSkillInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000290, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetMasterImagineText_ReturnValue) == 0x0002A0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToName_ReturnValue) == 0x0002B0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetMasterImagineText_ReturnValue_1) == 0x0002B8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetMasterImagineText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0002C8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetDataTableRowFromName_OutRow) == 0x0002D0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000318, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetMasterImagineText_ReturnValue_2) == 0x000320, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetMasterImagineText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_IsValid_ReturnValue) == 0x000330, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue) == 0x000338, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000350, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, K2Node_MakeStruct_FormatArgumentData) == 0x000368, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0003A8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, K2Node_MakeArray_Array) == 0x0003B8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003C8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Format_ReturnValue) == 0x0003E0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0003F8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000410, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000420, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000438, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, K2Node_MakeStruct_FormatArgumentData_1) == 0x000450, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, K2Node_MakeArray_Array_1) == 0x000490, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Format_ReturnValue_1) == 0x0004A0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x0004B8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetImagineArtsTypeName_OutTypeName_1) == 0x0004C8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetImagineArtsTypeName_OutTypeName_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetImagineArtsName_OutArtsName) == 0x0004D8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetImagineArtsName_OutArtsName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetTextFromAsset_ReturnValue) == 0x0004E8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0004F8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000500, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetPlayerManager_ReturnValue) == 0x000518, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x000520, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x000528, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, K2Node_MakeStruct_FormatArgumentData_2) == 0x000530, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, K2Node_MakeArray_Array_2) == 0x000570, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParam, CallFunc_Format_ReturnValue_2) == 0x000580, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParam::CallFunc_Format_ReturnValue_2' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.Set Diff Show
// 0x0010 (0x0010 - 0x0000)
struct ImagineTypeView_C_Set_Diff_Show final
{
public:
	bool                                          Param_bShow;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9280[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineTypeView_C_Set_Diff_Show) == 0x000004, "Wrong alignment on ImagineTypeView_C_Set_Diff_Show");
static_assert(sizeof(ImagineTypeView_C_Set_Diff_Show) == 0x000010, "Wrong size on ImagineTypeView_C_Set_Diff_Show");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, Param_bShow) == 0x000000, "Member 'ImagineTypeView_C_Set_Diff_Show::Param_bShow' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ImagineTypeView_C_Set_Diff_Show::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ImagineTypeView_C_Set_Diff_Show::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, Temp_bool_Variable) == 0x000003, "Member 'ImagineTypeView_C_Set_Diff_Show::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'ImagineTypeView_C_Set_Diff_Show::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, CallFunc_GetStackBNum_ReturnValue) == 0x000008, "Member 'ImagineTypeView_C_Set_Diff_Show::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'ImagineTypeView_C_Set_Diff_Show::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, CallFunc_BooleanAND_ReturnValue_1) == 0x00000D, "Member 'ImagineTypeView_C_Set_Diff_Show::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_Set_Diff_Show, K2Node_Select_Default) == 0x00000E, "Member 'ImagineTypeView_C_Set_Diff_Show::K2Node_Select_Default' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyDataMaxStackB
// 0x01C8 (0x01C8 - 0x0000)
struct ImagineTypeView_C_ApplyDataMaxStackB final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9281[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalImagineDescTxt;                               // 0x0008(0x0018)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalImagineMaster;                                // 0x0020(0x00B0)(Edit, BlueprintVisible)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9282[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x00D8(0x00B0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9283[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9284[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBImagineDescTextByItemId_ReturnValue; // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
};
static_assert(alignof(ImagineTypeView_C_ApplyDataMaxStackB) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyDataMaxStackB");
static_assert(sizeof(ImagineTypeView_C_ApplyDataMaxStackB) == 0x0001C8, "Wrong size on ImagineTypeView_C_ApplyDataMaxStackB");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, ItemId) == 0x000000, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::ItemId' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, LocalImagineDescTxt) == 0x000008, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::LocalImagineDescTxt' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, LocalImagineMaster) == 0x000020, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::LocalImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_FindImagineMaster_bIsValid) == 0x0000D0, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_FindImagineMaster_ImagineMaster) == 0x0000D8, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_GetMasterDataManager_IsValid) == 0x000188, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_GetMasterDataManager_ReturnValue) == 0x000190, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_BooleanAND_ReturnValue) == 0x000198, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_GetStackBImagineDescTextByItemId_ReturnValue) == 0x0001A0, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_GetStackBImagineDescTextByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyDataMaxStackB, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'ImagineTypeView_C_ApplyDataMaxStackB::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.InitUIStackBMaxMode
// 0x0048 (0x0048 - 0x0000)
struct ImagineTypeView_C_InitUIStackBMaxMode final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9285[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9286[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineTypeView_C_InitUIStackBMaxMode) == 0x000008, "Wrong alignment on ImagineTypeView_C_InitUIStackBMaxMode");
static_assert(sizeof(ImagineTypeView_C_InitUIStackBMaxMode) == 0x000048, "Wrong size on ImagineTypeView_C_InitUIStackBMaxMode");
static_assert(offsetof(ImagineTypeView_C_InitUIStackBMaxMode, Temp_bool_Variable) == 0x000000, "Member 'ImagineTypeView_C_InitUIStackBMaxMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_InitUIStackBMaxMode, Temp_byte_Variable) == 0x000001, "Member 'ImagineTypeView_C_InitUIStackBMaxMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_InitUIStackBMaxMode, Temp_byte_Variable_1) == 0x000002, "Member 'ImagineTypeView_C_InitUIStackBMaxMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_InitUIStackBMaxMode, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'ImagineTypeView_C_InitUIStackBMaxMode::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_InitUIStackBMaxMode, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'ImagineTypeView_C_InitUIStackBMaxMode::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_InitUIStackBMaxMode, K2Node_Select_Default) == 0x000040, "Member 'ImagineTypeView_C_InitUIStackBMaxMode::K2Node_Select_Default' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineDataByMaster
// 0x0108 (0x0108 - 0x0000)
struct ImagineTypeView_C_ApplyBattleImagineDataByMaster final
{
public:
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9287[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBImagineDescTextByItemId_ReturnValue; // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStackBImagineDescTextByItemId_ReturnValue_1; // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9288[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
	int32                                         CallFunc_BP_GetStackBMax_ReturnValue;              // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStackBIconOneItemBase_OutIsVisible;    // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineTypeView_C_ApplyBattleImagineDataByMaster) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyBattleImagineDataByMaster");
static_assert(sizeof(ImagineTypeView_C_ApplyBattleImagineDataByMaster) == 0x000108, "Wrong size on ImagineTypeView_C_ApplyBattleImagineDataByMaster");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, ImagineMaster) == 0x000000, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000B0, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B1, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, Temp_bool_Variable) == 0x0000B2, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_GetStackBImagineDescTextByItemId_ReturnValue) == 0x0000B8, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_GetStackBImagineDescTextByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_GetStackBImagineDescTextByItemId_ReturnValue_1) == 0x0000C8, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_GetStackBImagineDescTextByItemId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_GetMasterDataManager_IsValid) == 0x0000D8, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E0, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_BP_GetStackBMax_ReturnValue) == 0x000100, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_BP_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_Greater_IntInt_ReturnValue) == 0x000104, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, K2Node_Select_Default) == 0x000105, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineDataByMaster, CallFunc_SetStackBIconOneItemBase_OutIsVisible) == 0x000106, "Member 'ImagineTypeView_C_ApplyBattleImagineDataByMaster::CallFunc_SetStackBIconOneItemBase_OutIsVisible' has a wrong offset!");

// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParamByMaster
// 0x0470 (0x0470 - 0x0000)
struct ImagineTypeView_C_ApplyBattleImagineStackParamByMaster final
{
public:
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 StackBText;                                        // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bIsPossession;                                     // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9289[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalPossessionDesc;                               // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionName;                               // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalPossessionTypeName;                           // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedTypeName;                             // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalSummonedName;                                 // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         LocalSummonedInfo;                                 // 0x0118(0x0048)(Edit, BlueprintVisible)
	class FString                                 LocalSummonedDesc;                                 // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBImagineSkillInfo*                    ImagineSkillInfo;                                  // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_928A[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x017C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_928B[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_1;       // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue_2;       // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x01C0(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_928C[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0210(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0228(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0240(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0290(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02A0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02D0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0310(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0328(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0368(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0378(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x0390(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName_1;     // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetImagineArtsName_OutArtsName;           // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x03D8(0x0018)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_928D[0x4];                                     // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x0400(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0408(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0448(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0458(0x0018)()
};
static_assert(alignof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster) == 0x000008, "Wrong alignment on ImagineTypeView_C_ApplyBattleImagineStackParamByMaster");
static_assert(sizeof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster) == 0x000470, "Wrong size on ImagineTypeView_C_ApplyBattleImagineStackParamByMaster");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, ImagineMaster) == 0x000000, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, StackBText) == 0x0000B0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::StackBText' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, bIsPossession) == 0x0000C0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::bIsPossession' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalPossessionDesc) == 0x0000C8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalPossessionDesc' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalPossessionName) == 0x0000D8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalPossessionName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalPossessionTypeName) == 0x0000E8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalPossessionTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalSummonedTypeName) == 0x0000F8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalSummonedTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalSummonedName) == 0x000108, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalSummonedName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalSummonedInfo) == 0x000118, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalSummonedInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, LocalSummonedDesc) == 0x000160, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::LocalSummonedDesc' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, ImagineSkillInfo) == 0x000170, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::ImagineSkillInfo' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToName_ReturnValue) == 0x00017C, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetMasterImagineText_ReturnValue) == 0x000188, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetMasterImagineText_ReturnValue_1) == 0x000198, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetMasterImagineText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0001A8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetMasterImagineText_ReturnValue_2) == 0x0001B0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetMasterImagineText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetDataTableRowFromName_OutRow) == 0x0001C0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000208, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue) == 0x000210, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000228, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, K2Node_MakeStruct_FormatArgumentData) == 0x000240, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000280, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, K2Node_MakeArray_Array) == 0x000290, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002A0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Format_ReturnValue) == 0x0002B8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002D0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0002E8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002F8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000310, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, K2Node_MakeStruct_FormatArgumentData_1) == 0x000328, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, K2Node_MakeArray_Array_1) == 0x000368, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Format_ReturnValue_1) == 0x000378, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x000390, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetImagineArtsTypeName_OutTypeName_1) == 0x0003A0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetImagineArtsTypeName_OutTypeName_1' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetImagineArtsName_OutArtsName) == 0x0003B0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetImagineArtsName_OutArtsName' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetTextFromAsset_ReturnValue) == 0x0003C0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0003D0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0003D8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetPlayerManager_ReturnValue) == 0x0003F0, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x0003F8, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x000400, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, K2Node_MakeStruct_FormatArgumentData_2) == 0x000408, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, K2Node_MakeArray_Array_2) == 0x000448, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ImagineTypeView_C_ApplyBattleImagineStackParamByMaster, CallFunc_Format_ReturnValue_2) == 0x000458, "Member 'ImagineTypeView_C_ApplyBattleImagineStackParamByMaster::CallFunc_Format_ReturnValue_2' has a wrong offset!");

}

