#pragma once

 

// Package: CommandMenu_MenuItem3

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.ExecuteUbergraph_CommandMenu_MenuItem3
// 0x0108 (0x0108 - 0x0000)
struct CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B3E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0080(0x0088)(HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3) == 0x000008, "Wrong alignment on CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3");
static_assert(sizeof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3) == 0x000108, "Wrong size on CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, EntryPoint) == 0x000000, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3, K2Node_MakeStruct_SlateFontInfo) == 0x000080, "Member 'CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem3_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem3_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenu_MenuItem3_C_PreConstruct");
static_assert(sizeof(CommandMenu_MenuItem3_C_PreConstruct) == 0x000001, "Wrong size on CommandMenu_MenuItem3_C_PreConstruct");
static_assert(offsetof(CommandMenu_MenuItem3_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenu_MenuItem3_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetTextId
// 0x0030 (0x0030 - 0x0000)
struct CommandMenu_MenuItem3_C_SetTextId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B3F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CommandMenu_MenuItem3_C_SetTextId) == 0x000008, "Wrong alignment on CommandMenu_MenuItem3_C_SetTextId");
static_assert(sizeof(CommandMenu_MenuItem3_C_SetTextId) == 0x000030, "Wrong size on CommandMenu_MenuItem3_C_SetTextId");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetTextId, TextId) == 0x000000, "Member 'CommandMenu_MenuItem3_C_SetTextId::TextId' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CommandMenu_MenuItem3_C_SetTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CommandMenu_MenuItem3_C_SetTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetSoundID
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem3_C_SetSoundID final
{
public:
	ESystemSE                                     SoundId;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem3_C_SetSoundID) == 0x000001, "Wrong alignment on CommandMenu_MenuItem3_C_SetSoundID");
static_assert(sizeof(CommandMenu_MenuItem3_C_SetSoundID) == 0x000001, "Wrong size on CommandMenu_MenuItem3_C_SetSoundID");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetSoundID, SoundId) == 0x000000, "Member 'CommandMenu_MenuItem3_C_SetSoundID::SoundId' has a wrong offset!");

// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetBtnSelected
// 0x0768 (0x0768 - 0x0000)
struct CommandMenu_MenuItem3_C_SetBtnSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B40[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0058(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00E0(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0168(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01F0(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0468(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x04F0(0x0278)()
};
static_assert(alignof(CommandMenu_MenuItem3_C_SetBtnSelected) == 0x000008, "Wrong alignment on CommandMenu_MenuItem3_C_SetBtnSelected");
static_assert(sizeof(CommandMenu_MenuItem3_C_SetBtnSelected) == 0x000768, "Wrong size on CommandMenu_MenuItem3_C_SetBtnSelected");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, Param_bSelected) == 0x000000, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::Param_bSelected' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000058, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000E0, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000168, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x0001F0, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000468, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem3_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x0004F0, "Member 'CommandMenu_MenuItem3_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

}

