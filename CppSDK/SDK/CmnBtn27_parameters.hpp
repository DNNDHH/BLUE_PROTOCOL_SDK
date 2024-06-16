#pragma once

 

// Package: CmnBtn27

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn27.CmnBtn27_C.ExecuteUbergraph_CmnBtn27
// 0x0180 (0x0180 - 0x0000)
struct CmnBtn27_C_ExecuteUbergraph_CmnBtn27 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9573[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9574[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0018)()
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x00C8(0x0088)(HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InTextName;                     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0168(0x0018)()
};
static_assert(alignof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27) == 0x000008, "Wrong alignment on CmnBtn27_C_ExecuteUbergraph_CmnBtn27");
static_assert(sizeof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27) == 0x000180, "Wrong size on CmnBtn27_C_ExecuteUbergraph_CmnBtn27");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, EntryPoint) == 0x000000, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000058, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000060, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_GetTextFromAsset_ReturnValue) == 0x000088, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, K2Node_Select_Default) == 0x0000B0, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, K2Node_MakeStruct_SlateFontInfo) == 0x0000C8, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, K2Node_CustomEvent_InTextName) == 0x000150, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::K2Node_CustomEvent_InTextName' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000158, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn27_C_ExecuteUbergraph_CmnBtn27, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000168, "Member 'CmnBtn27_C_ExecuteUbergraph_CmnBtn27::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function CmnBtn27.CmnBtn27_C.SetTextId(Name)
// 0x0008 (0x0008 - 0x0000)
struct CmnBtn27_C_SetTextId_Name_ final
{
public:
	class FName                                   Param_InTextName;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn27_C_SetTextId_Name_) == 0x000004, "Wrong alignment on CmnBtn27_C_SetTextId_Name_");
static_assert(sizeof(CmnBtn27_C_SetTextId_Name_) == 0x000008, "Wrong size on CmnBtn27_C_SetTextId_Name_");
static_assert(offsetof(CmnBtn27_C_SetTextId_Name_, Param_InTextName) == 0x000000, "Member 'CmnBtn27_C_SetTextId_Name_::Param_InTextName' has a wrong offset!");

// Function CmnBtn27.CmnBtn27_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn27_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn27_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn27_C_PreConstruct");
static_assert(sizeof(CmnBtn27_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn27_C_PreConstruct");
static_assert(offsetof(CmnBtn27_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn27_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

