#pragma once

 

// Package: CmnBtnOnOff01

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.ExecuteUbergraph_CmnBtnOnOff01
// 0x0118 (0x0118 - 0x0000)
struct CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A41[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A42[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00C8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00F0(0x0028)()
};
static_assert(alignof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01) == 0x000008, "Wrong alignment on CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01");
static_assert(sizeof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01) == 0x000118, "Wrong size on CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, EntryPoint) == 0x000000, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, Temp_bool_Variable) == 0x000004, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000080, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000088, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, K2Node_Select_Default) == 0x0000B0, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, K2Node_MakeStruct_SlateColor_2) == 0x0000C8, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01, K2Node_MakeStruct_SlateColor_3) == 0x0000F0, "Member 'CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtnOnOff01_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtnOnOff01_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtnOnOff01_C_PreConstruct");
static_assert(sizeof(CmnBtnOnOff01_C_PreConstruct) == 0x000001, "Wrong size on CmnBtnOnOff01_C_PreConstruct");
static_assert(offsetof(CmnBtnOnOff01_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtnOnOff01_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetTextId
// 0x0030 (0x0030 - 0x0000)
struct CmnBtnOnOff01_C_SetTextId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CmnBtnOnOff01_C_SetTextId) == 0x000008, "Wrong alignment on CmnBtnOnOff01_C_SetTextId");
static_assert(sizeof(CmnBtnOnOff01_C_SetTextId) == 0x000030, "Wrong size on CmnBtnOnOff01_C_SetTextId");
static_assert(offsetof(CmnBtnOnOff01_C_SetTextId, TextId) == 0x000000, "Member 'CmnBtnOnOff01_C_SetTextId::TextId' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtnOnOff01_C_SetTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CmnBtnOnOff01_C_SetTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetTextName
// 0x0030 (0x0030 - 0x0000)
struct CmnBtnOnOff01_C_SetTextName final
{
public:
	class FName                                   Param_InTextName;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CmnBtnOnOff01_C_SetTextName) == 0x000008, "Wrong alignment on CmnBtnOnOff01_C_SetTextName");
static_assert(sizeof(CmnBtnOnOff01_C_SetTextName) == 0x000030, "Wrong size on CmnBtnOnOff01_C_SetTextName");
static_assert(offsetof(CmnBtnOnOff01_C_SetTextName, Param_InTextName) == 0x000000, "Member 'CmnBtnOnOff01_C_SetTextName::Param_InTextName' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetTextName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'CmnBtnOnOff01_C_SetTextName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetTextName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CmnBtnOnOff01_C_SetTextName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetSoundID
// 0x0001 (0x0001 - 0x0000)
struct CmnBtnOnOff01_C_SetSoundID final
{
public:
	ESystemSE                                     SoundId;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtnOnOff01_C_SetSoundID) == 0x000001, "Wrong alignment on CmnBtnOnOff01_C_SetSoundID");
static_assert(sizeof(CmnBtnOnOff01_C_SetSoundID) == 0x000001, "Wrong size on CmnBtnOnOff01_C_SetSoundID");
static_assert(offsetof(CmnBtnOnOff01_C_SetSoundID, SoundId) == 0x000000, "Member 'CmnBtnOnOff01_C_SetSoundID::SoundId' has a wrong offset!");

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetSelected
// 0x0080 (0x0080 - 0x0000)
struct CmnBtnOnOff01_C_SetSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A44[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
};
static_assert(alignof(CmnBtnOnOff01_C_SetSelected) == 0x000008, "Wrong alignment on CmnBtnOnOff01_C_SetSelected");
static_assert(sizeof(CmnBtnOnOff01_C_SetSelected) == 0x000080, "Wrong size on CmnBtnOnOff01_C_SetSelected");
static_assert(offsetof(CmnBtnOnOff01_C_SetSelected, bSelected) == 0x000000, "Member 'CmnBtnOnOff01_C_SetSelected::bSelected' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtnOnOff01_C_SetSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CmnBtnOnOff01_C_SetSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtnOnOff01_C_SetSelected, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'CmnBtnOnOff01_C_SetSelected::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

}

