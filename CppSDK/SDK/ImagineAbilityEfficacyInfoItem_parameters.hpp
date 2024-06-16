#pragma once

 

// Package: ImagineAbilityEfficacyInfoItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo
// 0x0090 (0x0090 - 0x0000)
struct ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo final
{
public:
	struct FSBAbilityConfig                       InAbilityConfig;                                   // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InEfficacyDesc;                                    // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InEfficacyValue;                                   // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAbilityUIAttribute                         LocalAbilityUIAttribute;                           // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStatusAilmentIconType                      LocalIconType;                                     // 0x0055(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D03[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalEfficacyValue;                                // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D04[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalEfficacyDesc;                                 // 0x0060(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D05[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ComvertAddElementResistRate_ReturnValue;  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo) == 0x000008, "Wrong alignment on ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo");
static_assert(sizeof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo) == 0x000090, "Wrong size on ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, InAbilityConfig) == 0x000000, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::InAbilityConfig' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, InEfficacyDesc) == 0x000038, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::InEfficacyDesc' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, InEfficacyValue) == 0x000050, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::InEfficacyValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, LocalAbilityUIAttribute) == 0x000054, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::LocalAbilityUIAttribute' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, LocalIconType) == 0x000055, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::LocalIconType' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, LocalEfficacyValue) == 0x000058, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::LocalEfficacyValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, LocalEfficacyDesc) == 0x000060, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::LocalEfficacyDesc' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue) == 0x000078, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_GetIsAbilityDBIconTypeAttributeResist_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00007C, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_ComvertAddElementResistRate_ReturnValue) == 0x000080, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_ComvertAddElementResistRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000084, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_FTrunc_ReturnValue) == 0x000088, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x00008C, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_GetValidValue_ReturnValue) == 0x00008D, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo, CallFunc_IsValid_ReturnValue) == 0x00008E, "Member 'ImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetUnderlineVisibility
// 0x0006 (0x0006 - 0x0000)
struct ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility) == 0x000001, "Wrong alignment on ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility");
static_assert(sizeof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility) == 0x000006, "Wrong size on ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility, InIsVisible) == 0x000000, "Member 'ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility, Temp_byte_Variable) == 0x000001, "Member 'ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility, Temp_bool_Variable) == 0x000003, "Member 'ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility, K2Node_Select_Default) == 0x000005, "Member 'ImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility::K2Node_Select_Default' has a wrong offset!");

// Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation
// 0x0088 (0x0088 - 0x0000)
struct ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D06[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutConvertedValue;                                 // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalValue;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D07[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D08[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation) == 0x000008, "Wrong alignment on ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation");
static_assert(sizeof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation) == 0x000088, "Wrong size on ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, InValue) == 0x000000, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::InValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, OutConvertedValue) == 0x000008, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::OutConvertedValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, LocalValue) == 0x000018, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::LocalValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, Temp_bool_Variable) == 0x00001C, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, Temp_string_Variable) == 0x000020, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, Temp_string_Variable_1) == 0x000030, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, K2Node_Select_Default) == 0x000058, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'ImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetValueText
// 0x0078 (0x0078 - 0x0000)
struct ImagineAbilityEfficacyInfoItem_C_SetValueText final
{
public:
	ESBAbilityUIAttribute                         InUIAttribute;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D09[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InValue;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAbilityUIAttribute                         Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D0A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertValueToPercentageNotation_OutConvertedValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D0B[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D0C[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};
static_assert(alignof(ImagineAbilityEfficacyInfoItem_C_SetValueText) == 0x000008, "Wrong alignment on ImagineAbilityEfficacyInfoItem_C_SetValueText");
static_assert(sizeof(ImagineAbilityEfficacyInfoItem_C_SetValueText) == 0x000078, "Wrong size on ImagineAbilityEfficacyInfoItem_C_SetValueText");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, InUIAttribute) == 0x000000, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::InUIAttribute' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, InValue) == 0x000004, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::InValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, Temp_byte_Variable) == 0x000008, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, CallFunc_ConvertValueToPercentageNotation_OutConvertedValue) == 0x000010, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::CallFunc_ConvertValueToPercentageNotation_OutConvertedValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, CallFunc_MakeLiteralBool_ReturnValue) == 0x000038, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityEfficacyInfoItem_C_SetValueText, K2Node_Select_Default) == 0x000060, "Member 'ImagineAbilityEfficacyInfoItem_C_SetValueText::K2Node_Select_Default' has a wrong offset!");

}

