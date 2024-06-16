#pragma once

 

// Package: CmnBtn05

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn05.CmnBtn05_C.ExecuteUbergraph_CmnBtn05
// 0x00C8 (0x00C8 - 0x0000)
struct CmnBtn05_C_ExecuteUbergraph_CmnBtn05 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_909F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A0[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0018)()
};
static_assert(alignof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05) == 0x000008, "Wrong alignment on CmnBtn05_C_ExecuteUbergraph_CmnBtn05");
static_assert(sizeof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05) == 0x0000C8, "Wrong size on CmnBtn05_C_ExecuteUbergraph_CmnBtn05");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, EntryPoint) == 0x000000, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000068, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000088, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_ExecuteUbergraph_CmnBtn05, K2Node_Select_Default) == 0x0000B0, "Member 'CmnBtn05_C_ExecuteUbergraph_CmnBtn05::K2Node_Select_Default' has a wrong offset!");

// Function CmnBtn05.CmnBtn05_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn05_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn05_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn05_C_PreConstruct");
static_assert(sizeof(CmnBtn05_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn05_C_PreConstruct");
static_assert(offsetof(CmnBtn05_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn05_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn05.CmnBtn05_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn05_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn05_C_SetPressedSoundId) == 0x000001, "Wrong alignment on CmnBtn05_C_SetPressedSoundId");
static_assert(sizeof(CmnBtn05_C_SetPressedSoundId) == 0x000002, "Wrong size on CmnBtn05_C_SetPressedSoundId");
static_assert(offsetof(CmnBtn05_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'CmnBtn05_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn05_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn05.CmnBtn05_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn05_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn05_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on CmnBtn05_C_SetHoveredSoundId");
static_assert(sizeof(CmnBtn05_C_SetHoveredSoundId) == 0x000002, "Wrong size on CmnBtn05_C_SetHoveredSoundId");
static_assert(offsetof(CmnBtn05_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'CmnBtn05_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn05_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn05_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn05.CmnBtn05_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct CmnBtn05_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CmnBtn05_C_SetText) == 0x000008, "Wrong alignment on CmnBtn05_C_SetText");
static_assert(sizeof(CmnBtn05_C_SetText) == 0x000018, "Wrong size on CmnBtn05_C_SetText");
static_assert(offsetof(CmnBtn05_C_SetText, InText) == 0x000000, "Member 'CmnBtn05_C_SetText::InText' has a wrong offset!");

}

