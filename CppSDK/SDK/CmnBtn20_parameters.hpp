#pragma once

 

// Package: CmnBtn20

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn20.CmnBtn20_C.ExecuteUbergraph_CmnBtn20
// 0x0150 (0x0150 - 0x0000)
struct CmnBtn20_C_ExecuteUbergraph_CmnBtn20 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B27[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0080(0x0088)(HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B28[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0120(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0138(0x0018)()
};
static_assert(alignof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20) == 0x000008, "Wrong alignment on CmnBtn20_C_ExecuteUbergraph_CmnBtn20");
static_assert(sizeof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20) == 0x000150, "Wrong size on CmnBtn20_C_ExecuteUbergraph_CmnBtn20");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, EntryPoint) == 0x000000, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, K2Node_MakeStruct_SlateFontInfo) == 0x000080, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, CallFunc_IsHovered_ReturnValue) == 0x000108, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000109, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000110, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000120, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_ExecuteUbergraph_CmnBtn20, K2Node_Select_Default) == 0x000138, "Member 'CmnBtn20_C_ExecuteUbergraph_CmnBtn20::K2Node_Select_Default' has a wrong offset!");

// Function CmnBtn20.CmnBtn20_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn20_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn20_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn20_C_PreConstruct");
static_assert(sizeof(CmnBtn20_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn20_C_PreConstruct");
static_assert(offsetof(CmnBtn20_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn20_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn20.CmnBtn20_C.SetTextId
// 0x0030 (0x0030 - 0x0000)
struct CmnBtn20_C_SetTextId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B29[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CmnBtn20_C_SetTextId) == 0x000008, "Wrong alignment on CmnBtn20_C_SetTextId");
static_assert(sizeof(CmnBtn20_C_SetTextId) == 0x000030, "Wrong size on CmnBtn20_C_SetTextId");
static_assert(offsetof(CmnBtn20_C_SetTextId, TextId) == 0x000000, "Member 'CmnBtn20_C_SetTextId::TextId' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_SetTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtn20_C_SetTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_SetTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CmnBtn20_C_SetTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CmnBtn20.CmnBtn20_C.SetTextName
// 0x0030 (0x0030 - 0x0000)
struct CmnBtn20_C_SetTextName final
{
public:
	class FName                                   Param_InTextName;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CmnBtn20_C_SetTextName) == 0x000008, "Wrong alignment on CmnBtn20_C_SetTextName");
static_assert(sizeof(CmnBtn20_C_SetTextName) == 0x000030, "Wrong size on CmnBtn20_C_SetTextName");
static_assert(offsetof(CmnBtn20_C_SetTextName, Param_InTextName) == 0x000000, "Member 'CmnBtn20_C_SetTextName::Param_InTextName' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_SetTextName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'CmnBtn20_C_SetTextName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn20_C_SetTextName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CmnBtn20_C_SetTextName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CmnBtn20.CmnBtn20_C.SetSoundID
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn20_C_SetSoundID final
{
public:
	ESystemSE                                     SoundId;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn20_C_SetSoundID) == 0x000001, "Wrong alignment on CmnBtn20_C_SetSoundID");
static_assert(sizeof(CmnBtn20_C_SetSoundID) == 0x000001, "Wrong size on CmnBtn20_C_SetSoundID");
static_assert(offsetof(CmnBtn20_C_SetSoundID, SoundId) == 0x000000, "Member 'CmnBtn20_C_SetSoundID::SoundId' has a wrong offset!");

// Function CmnBtn20.CmnBtn20_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct CmnBtn20_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CmnBtn20_C_SetText) == 0x000008, "Wrong alignment on CmnBtn20_C_SetText");
static_assert(sizeof(CmnBtn20_C_SetText) == 0x000018, "Wrong size on CmnBtn20_C_SetText");
static_assert(offsetof(CmnBtn20_C_SetText, InText) == 0x000000, "Member 'CmnBtn20_C_SetText::InText' has a wrong offset!");

}

