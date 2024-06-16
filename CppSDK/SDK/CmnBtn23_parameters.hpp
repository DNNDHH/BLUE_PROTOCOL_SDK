#pragma once

 

// Package: CmnBtn23

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn23.CmnBtn23_C.ExecuteUbergraph_CmnBtn23
// 0x0078 (0x0078 - 0x0000)
struct CmnBtn23_C_ExecuteUbergraph_CmnBtn23 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_446B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_446C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};
static_assert(alignof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23) == 0x000008, "Wrong alignment on CmnBtn23_C_ExecuteUbergraph_CmnBtn23");
static_assert(sizeof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23) == 0x000078, "Wrong size on CmnBtn23_C_ExecuteUbergraph_CmnBtn23");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, EntryPoint) == 0x000000, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_ExecuteUbergraph_CmnBtn23, K2Node_Select_Default) == 0x000060, "Member 'CmnBtn23_C_ExecuteUbergraph_CmnBtn23::K2Node_Select_Default' has a wrong offset!");

// Function CmnBtn23.CmnBtn23_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn23_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn23_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn23_C_PreConstruct");
static_assert(sizeof(CmnBtn23_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn23_C_PreConstruct");
static_assert(offsetof(CmnBtn23_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn23_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn23.CmnBtn23_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn23_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn23_C_SetPressedSoundId) == 0x000001, "Wrong alignment on CmnBtn23_C_SetPressedSoundId");
static_assert(sizeof(CmnBtn23_C_SetPressedSoundId) == 0x000002, "Wrong size on CmnBtn23_C_SetPressedSoundId");
static_assert(offsetof(CmnBtn23_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'CmnBtn23_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn23_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn23.CmnBtn23_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn23_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn23_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on CmnBtn23_C_SetHoveredSoundId");
static_assert(sizeof(CmnBtn23_C_SetHoveredSoundId) == 0x000002, "Wrong size on CmnBtn23_C_SetHoveredSoundId");
static_assert(offsetof(CmnBtn23_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'CmnBtn23_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn23_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn23.CmnBtn23_C.SetSelected
// 0x0788 (0x0788 - 0x0000)
struct CmnBtn23_C_SetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_446D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0068(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00F0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0178(0x0088)()
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0200(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0210(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0488(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0510(0x0278)()
};
static_assert(alignof(CmnBtn23_C_SetSelected) == 0x000008, "Wrong alignment on CmnBtn23_C_SetSelected");
static_assert(sizeof(CmnBtn23_C_SetSelected) == 0x000788, "Wrong size on CmnBtn23_C_SetSelected");
static_assert(offsetof(CmnBtn23_C_SetSelected, IsSelected) == 0x000000, "Member 'CmnBtn23_C_SetSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_Margin) == 0x000058, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_SlateBrush) == 0x000068, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000F0, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000178, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_Margin_1) == 0x000200, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_ButtonStyle) == 0x000210, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000488, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000510, "Member 'CmnBtn23_C_SetSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function CmnBtn23.CmnBtn23_C.SetTextId
// 0x0040 (0x0040 - 0x0000)
struct CmnBtn23_C_SetTextId final
{
public:
	int32                                         Param_InTextID;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_446E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_446F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn23_C_SetTextId) == 0x000008, "Wrong alignment on CmnBtn23_C_SetTextId");
static_assert(sizeof(CmnBtn23_C_SetTextId) == 0x000040, "Wrong size on CmnBtn23_C_SetTextId");
static_assert(offsetof(CmnBtn23_C_SetTextId, Param_InTextID) == 0x000000, "Member 'CmnBtn23_C_SetTextId::Param_InTextID' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtn23_C_SetTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetTextId, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CmnBtn23_C_SetTextId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CmnBtn23_C_SetTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn23_C_SetTextId, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'CmnBtn23_C_SetTextId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

