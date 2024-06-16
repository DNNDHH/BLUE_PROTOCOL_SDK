#pragma once

 

// Package: TextWindowDemo

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TextWindowDemo.TextWindowDemo_C.ExecuteUbergraph_TextWindowDemo
// 0x0038 (0x0038 - 0x0000)
struct TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E3A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText;                               // 0x0008(0x0018)(ConstParm)
	class FName                                   K2Node_Event_InProfileId;                          // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInVisibility;                        // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E3B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo) == 0x000008, "Wrong alignment on TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo");
static_assert(sizeof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo) == 0x000038, "Wrong size on TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo");
static_assert(offsetof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo, EntryPoint) == 0x000000, "Member 'TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo, K2Node_Event_InText) == 0x000008, "Member 'TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo, K2Node_Event_InProfileId) == 0x000020, "Member 'TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo::K2Node_Event_InProfileId' has a wrong offset!");
static_assert(offsetof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo, K2Node_Event_bInVisibility) == 0x000028, "Member 'TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo::K2Node_Event_bInVisibility' has a wrong offset!");
static_assert(offsetof(TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TextWindowDemo.TextWindowDemo_C.SetNextMarkVisibility
// 0x0001 (0x0001 - 0x0000)
struct TextWindowDemo_C_SetNextMarkVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowDemo_C_SetNextMarkVisibility) == 0x000001, "Wrong alignment on TextWindowDemo_C_SetNextMarkVisibility");
static_assert(sizeof(TextWindowDemo_C_SetNextMarkVisibility) == 0x000001, "Wrong size on TextWindowDemo_C_SetNextMarkVisibility");
static_assert(offsetof(TextWindowDemo_C_SetNextMarkVisibility, bInVisibility) == 0x000000, "Member 'TextWindowDemo_C_SetNextMarkVisibility::bInVisibility' has a wrong offset!");

// Function TextWindowDemo.TextWindowDemo_C.SetSpeaker
// 0x0008 (0x0008 - 0x0000)
struct TextWindowDemo_C_SetSpeaker final
{
public:
	class FName                                   InProfileId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindowDemo_C_SetSpeaker) == 0x000004, "Wrong alignment on TextWindowDemo_C_SetSpeaker");
static_assert(sizeof(TextWindowDemo_C_SetSpeaker) == 0x000008, "Wrong size on TextWindowDemo_C_SetSpeaker");
static_assert(offsetof(TextWindowDemo_C_SetSpeaker, InProfileId) == 0x000000, "Member 'TextWindowDemo_C_SetSpeaker::InProfileId' has a wrong offset!");

// Function TextWindowDemo.TextWindowDemo_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TextWindowDemo_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TextWindowDemo_C_SetText) == 0x000008, "Wrong alignment on TextWindowDemo_C_SetText");
static_assert(sizeof(TextWindowDemo_C_SetText) == 0x000018, "Wrong size on TextWindowDemo_C_SetText");
static_assert(offsetof(TextWindowDemo_C_SetText, InText) == 0x000000, "Member 'TextWindowDemo_C_SetText::InText' has a wrong offset!");

// Function TextWindowDemo.TextWindowDemo_C.IsShow
// 0x0003 (0x0003 - 0x0000)
struct TextWindowDemo_C_IsShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowDemo_C_IsShow) == 0x000001, "Wrong alignment on TextWindowDemo_C_IsShow");
static_assert(sizeof(TextWindowDemo_C_IsShow) == 0x000003, "Wrong size on TextWindowDemo_C_IsShow");
static_assert(offsetof(TextWindowDemo_C_IsShow, ReturnValue) == 0x000000, "Member 'TextWindowDemo_C_IsShow::ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowDemo_C_IsShow, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'TextWindowDemo_C_IsShow::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowDemo_C_IsShow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'TextWindowDemo_C_IsShow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function TextWindowDemo.TextWindowDemo_C.SetDisp
// 0x0001 (0x0001 - 0x0000)
struct TextWindowDemo_C_SetDisp final
{
public:
	bool                                          IsDisp;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowDemo_C_SetDisp) == 0x000001, "Wrong alignment on TextWindowDemo_C_SetDisp");
static_assert(sizeof(TextWindowDemo_C_SetDisp) == 0x000001, "Wrong size on TextWindowDemo_C_SetDisp");
static_assert(offsetof(TextWindowDemo_C_SetDisp, IsDisp) == 0x000000, "Member 'TextWindowDemo_C_SetDisp::IsDisp' has a wrong offset!");

}

