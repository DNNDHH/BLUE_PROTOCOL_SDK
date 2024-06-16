#pragma once

 

// Package: TokenDisplay

#include "Basic.hpp"


namespace SDK::Params
{

// Function TokenDisplay.TokenDisplay_C.ExecuteUbergraph_TokenDisplay
// 0x00B0 (0x00B0 - 0x0000)
struct TokenDisplay_C_ExecuteUbergraph_TokenDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5835[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	int32                                         K2Node_CustomEvent_Index;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5836[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay) == 0x000008, "Wrong alignment on TokenDisplay_C_ExecuteUbergraph_TokenDisplay");
static_assert(sizeof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay) == 0x0000B0, "Wrong size on TokenDisplay_C_ExecuteUbergraph_TokenDisplay");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, EntryPoint) == 0x000000, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_CustomEvent_Index_1) == 0x000004, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000038, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_CustomEvent_Index) == 0x000060, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_SwitchInteger_CmpSuccess_1) == 0x000064, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_CreateDelegate_OutputDelegate_2) == 0x000088, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, K2Node_CreateDelegate_OutputDelegate_3) == 0x000098, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TokenDisplay_C_ExecuteUbergraph_TokenDisplay, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'TokenDisplay_C_ExecuteUbergraph_TokenDisplay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TokenDisplay.TokenDisplay_C.SwitchInfoText
// 0x0004 (0x0004 - 0x0000)
struct TokenDisplay_C_SwitchInfoText final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenDisplay_C_SwitchInfoText) == 0x000004, "Wrong alignment on TokenDisplay_C_SwitchInfoText");
static_assert(sizeof(TokenDisplay_C_SwitchInfoText) == 0x000004, "Wrong size on TokenDisplay_C_SwitchInfoText");
static_assert(offsetof(TokenDisplay_C_SwitchInfoText, Param_Index) == 0x000000, "Member 'TokenDisplay_C_SwitchInfoText::Param_Index' has a wrong offset!");

// Function TokenDisplay.TokenDisplay_C.ChangeForcusCategory
// 0x0004 (0x0004 - 0x0000)
struct TokenDisplay_C_ChangeForcusCategory final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenDisplay_C_ChangeForcusCategory) == 0x000004, "Wrong alignment on TokenDisplay_C_ChangeForcusCategory");
static_assert(sizeof(TokenDisplay_C_ChangeForcusCategory) == 0x000004, "Wrong size on TokenDisplay_C_ChangeForcusCategory");
static_assert(offsetof(TokenDisplay_C_ChangeForcusCategory, Param_Index) == 0x000000, "Member 'TokenDisplay_C_ChangeForcusCategory::Param_Index' has a wrong offset!");

}

