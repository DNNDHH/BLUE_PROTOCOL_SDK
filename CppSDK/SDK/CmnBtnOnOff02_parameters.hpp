#pragma once

 

// Package: CmnBtnOnOff02

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtnOnOff02.CmnBtnOnOff02_C.ExecuteUbergraph_CmnBtnOnOff02
// 0x0080 (0x0080 - 0x0000)
struct CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7668[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
};
static_assert(alignof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02) == 0x000008, "Wrong alignment on CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02");
static_assert(sizeof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02) == 0x000080, "Wrong size on CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02");
static_assert(offsetof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02, EntryPoint) == 0x000000, "Member 'CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

// Function CmnBtnOnOff02.CmnBtnOnOff02_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtnOnOff02_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtnOnOff02_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtnOnOff02_C_PreConstruct");
static_assert(sizeof(CmnBtnOnOff02_C_PreConstruct) == 0x000001, "Wrong size on CmnBtnOnOff02_C_PreConstruct");
static_assert(offsetof(CmnBtnOnOff02_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtnOnOff02_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtnOnOff02.CmnBtnOnOff02_C.SetBtnSelected
// 0x0168 (0x0168 - 0x0000)
struct CmnBtnOnOff02_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7669[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_766A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0060(0x0028)()
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_766B[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_766C[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00E8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0110(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0138(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0150(0x0018)()
};
static_assert(alignof(CmnBtnOnOff02_C_SetBtnSelected) == 0x000008, "Wrong alignment on CmnBtnOnOff02_C_SetBtnSelected");
static_assert(sizeof(CmnBtnOnOff02_C_SetBtnSelected) == 0x000168, "Wrong size on CmnBtnOnOff02_C_SetBtnSelected");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, bSelected) == 0x000000, "Member 'CmnBtnOnOff02_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, Temp_bool_Variable) == 0x000001, "Member 'CmnBtnOnOff02_C_SetBtnSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtnOnOff02_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, Temp_bool_Variable_1) == 0x000030, "Member 'CmnBtnOnOff02_C_SetBtnSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'CmnBtnOnOff02_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_2) == 0x000060, "Member 'CmnBtnOnOff02_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_IsHovered_ReturnValue) == 0x000088, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000089, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000090, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0000A0, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C0, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, K2Node_Select_Default) == 0x0000E8, "Member 'CmnBtnOnOff02_C_SetBtnSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000100, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000110, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000128, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000138, "Member 'CmnBtnOnOff02_C_SetBtnSelected::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff02_C_SetBtnSelected, K2Node_Select_Default_1) == 0x000150, "Member 'CmnBtnOnOff02_C_SetBtnSelected::K2Node_Select_Default_1' has a wrong offset!");

}

