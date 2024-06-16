#pragma once

 

// Package: TokenCategoryButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TokenCategoryButton.TokenCategoryButton_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct TokenCategoryButton_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ListIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenCategoryButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on TokenCategoryButton_C_OnClick__DelegateSignature");
static_assert(sizeof(TokenCategoryButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on TokenCategoryButton_C_OnClick__DelegateSignature");
static_assert(offsetof(TokenCategoryButton_C_OnClick__DelegateSignature, Param_ListIndex) == 0x000000, "Member 'TokenCategoryButton_C_OnClick__DelegateSignature::Param_ListIndex' has a wrong offset!");

// Function TokenCategoryButton.TokenCategoryButton_C.ExecuteUbergraph_TokenCategoryButton
// 0x0068 (0x0068 - 0x0000)
struct TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56E6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56E7[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton) == 0x000008, "Wrong alignment on TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton");
static_assert(sizeof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton) == 0x000068, "Wrong size on TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, EntryPoint) == 0x000000, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000058, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00005C, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, CallFunc_GetActiveWidgetIndex_ReturnValue_1) == 0x000060, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::CallFunc_GetActiveWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000064, "Member 'TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function TokenCategoryButton.TokenCategoryButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TokenCategoryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenCategoryButton_C_PreConstruct) == 0x000001, "Wrong alignment on TokenCategoryButton_C_PreConstruct");
static_assert(sizeof(TokenCategoryButton_C_PreConstruct) == 0x000001, "Wrong size on TokenCategoryButton_C_PreConstruct");
static_assert(offsetof(TokenCategoryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TokenCategoryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TokenCategoryButton.TokenCategoryButton_C.Setup
// 0x0020 (0x0020 - 0x0000)
struct TokenCategoryButton_C_Setup final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56E8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_Text;                                        // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TokenCategoryButton_C_Setup) == 0x000008, "Wrong alignment on TokenCategoryButton_C_Setup");
static_assert(sizeof(TokenCategoryButton_C_Setup) == 0x000020, "Wrong size on TokenCategoryButton_C_Setup");
static_assert(offsetof(TokenCategoryButton_C_Setup, Param_Index) == 0x000000, "Member 'TokenCategoryButton_C_Setup::Param_Index' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_Setup, Param_Text) == 0x000008, "Member 'TokenCategoryButton_C_Setup::Param_Text' has a wrong offset!");

// Function TokenCategoryButton.TokenCategoryButton_C.SetButtonSelected
// 0x0058 (0x0058 - 0x0000)
struct TokenCategoryButton_C_SetButtonSelected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56E9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(TokenCategoryButton_C_SetButtonSelected) == 0x000008, "Wrong alignment on TokenCategoryButton_C_SetButtonSelected");
static_assert(sizeof(TokenCategoryButton_C_SetButtonSelected) == 0x000058, "Wrong size on TokenCategoryButton_C_SetButtonSelected");
static_assert(offsetof(TokenCategoryButton_C_SetButtonSelected, Selected) == 0x000000, "Member 'TokenCategoryButton_C_SetButtonSelected::Selected' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_SetButtonSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'TokenCategoryButton_C_SetButtonSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TokenCategoryButton_C_SetButtonSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'TokenCategoryButton_C_SetButtonSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

