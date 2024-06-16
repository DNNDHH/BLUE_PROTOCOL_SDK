#pragma once

 

// Package: UMG_InputAuthToken

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_InputAuthToken.UMG_InputAuthToken_C.BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function UMG_InputAuthToken.UMG_InputAuthToken_C.ExecuteUbergraph_UMG_InputAuthToken
// 0x0060 (0x0060 - 0x0000)
struct UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E42[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0030(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E43[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken) == 0x000008, "Wrong alignment on UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken");
static_assert(sizeof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken) == 0x000060, "Wrong size on UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, EntryPoint) == 0x000000, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, K2Node_ComponentBoundEvent_Text) == 0x000030, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, K2Node_ComponentBoundEvent_CommitMethod) == 0x000048, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000049, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000050, "Member 'UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function UMG_InputAuthToken.UMG_InputAuthToken_C.OnInput__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_InputAuthToken_C_OnInput__DelegateSignature final
{
public:
	class FString                                 InAuthToken;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_InputAuthToken_C_OnInput__DelegateSignature) == 0x000008, "Wrong alignment on UMG_InputAuthToken_C_OnInput__DelegateSignature");
static_assert(sizeof(UMG_InputAuthToken_C_OnInput__DelegateSignature) == 0x000010, "Wrong size on UMG_InputAuthToken_C_OnInput__DelegateSignature");
static_assert(offsetof(UMG_InputAuthToken_C_OnInput__DelegateSignature, InAuthToken) == 0x000000, "Member 'UMG_InputAuthToken_C_OnInput__DelegateSignature::InAuthToken' has a wrong offset!");

}

