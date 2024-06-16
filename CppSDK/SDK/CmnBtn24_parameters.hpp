#pragma once

 

// Package: CmnBtn24

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn24.CmnBtn24_C.ExecuteUbergraph_CmnBtn24
// 0x00D0 (0x00D0 - 0x0000)
struct CmnBtn24_C_ExecuteUbergraph_CmnBtn24 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_477F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4780[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4781[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00B8(0x0018)()
};
static_assert(alignof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24) == 0x000008, "Wrong alignment on CmnBtn24_C_ExecuteUbergraph_CmnBtn24");
static_assert(sizeof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24) == 0x0000D0, "Wrong size on CmnBtn24_C_ExecuteUbergraph_CmnBtn24");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, EntryPoint) == 0x000000, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000058, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000070, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000090, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_ExecuteUbergraph_CmnBtn24, K2Node_Select_Default) == 0x0000B8, "Member 'CmnBtn24_C_ExecuteUbergraph_CmnBtn24::K2Node_Select_Default' has a wrong offset!");

// Function CmnBtn24.CmnBtn24_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn24_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn24_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn24_C_PreConstruct");
static_assert(sizeof(CmnBtn24_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn24_C_PreConstruct");
static_assert(offsetof(CmnBtn24_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn24_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn24.CmnBtn24_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn24_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn24_C_SetPressedSoundId) == 0x000001, "Wrong alignment on CmnBtn24_C_SetPressedSoundId");
static_assert(sizeof(CmnBtn24_C_SetPressedSoundId) == 0x000002, "Wrong size on CmnBtn24_C_SetPressedSoundId");
static_assert(offsetof(CmnBtn24_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'CmnBtn24_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn24_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn24.CmnBtn24_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn24_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn24_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on CmnBtn24_C_SetHoveredSoundId");
static_assert(sizeof(CmnBtn24_C_SetHoveredSoundId) == 0x000002, "Wrong size on CmnBtn24_C_SetHoveredSoundId");
static_assert(offsetof(CmnBtn24_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'CmnBtn24_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn24_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn24.CmnBtn24_C.SetText
// 0x0038 (0x0038 - 0x0000)
struct CmnBtn24_C_SetText final
{
public:
	class USBTextTableAsset*                      Param_InTextTable;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_InTextID;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4782[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(CmnBtn24_C_SetText) == 0x000008, "Wrong alignment on CmnBtn24_C_SetText");
static_assert(sizeof(CmnBtn24_C_SetText) == 0x000038, "Wrong size on CmnBtn24_C_SetText");
static_assert(offsetof(CmnBtn24_C_SetText, Param_InTextTable) == 0x000000, "Member 'CmnBtn24_C_SetText::Param_InTextTable' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_SetText, Param_InTextID) == 0x000008, "Member 'CmnBtn24_C_SetText::Param_InTextID' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_SetText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'CmnBtn24_C_SetText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn24_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CmnBtn24_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

