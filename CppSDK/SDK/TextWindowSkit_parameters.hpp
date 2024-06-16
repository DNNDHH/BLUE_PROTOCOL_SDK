#pragma once

 

// Package: TextWindowSkit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TextWindowSkit.TextWindowSkit_C.ExecuteUbergraph_TextWindowSkit
// 0x0178 (0x0178 - 0x0000)
struct TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E0C[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E0D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E0E[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText;                               // 0x0040(0x0018)(ConstParm)
	class FName                                   K2Node_Event_InProfileId;                          // 0x0058(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSpeakerName_ReturnValue;               // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInVisibility;                        // 0x0091(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E0F[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E10[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E11[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_2;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E12[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bVisible;                             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E13[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E14[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E15[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E16[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0138(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E17[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0158(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit) == 0x000008, "Wrong alignment on TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit");
static_assert(sizeof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit) == 0x000178, "Wrong size on TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, EntryPoint) == 0x000000, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_bool_Variable) == 0x000014, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_byte_Variable) == 0x000020, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_byte_Variable_1) == 0x000021, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_bool_Variable_1) == 0x000022, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_bool_Variable_2) == 0x000023, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_bool_Variable_3) == 0x000024, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_float_Variable) == 0x000028, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, Temp_float_Variable_1) == 0x00002C, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Event_Animation) == 0x000030, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000038, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000039, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x00003A, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Event_InText) == 0x000040, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Event_InProfileId) == 0x000058, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Event_InProfileId' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_GetSpeakerName_ReturnValue) == 0x000068, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_GetSpeakerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Select_Default) == 0x000090, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Event_bInVisibility) == 0x000091, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Event_bInVisibility' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000092, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlayAnimation_ReturnValue_1) == 0x000098, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlaySE_ReturnValue) == 0x0000A0, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A4, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_BooleanAND_ReturnValue) == 0x0000B4, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Select_Default_1) == 0x0000B8, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x0000C0, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000C8, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Select_Default_2) == 0x0000D0, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_EqualEqual_ObjectObject_ReturnValue_4) == 0x0000D8, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_EqualEqual_ObjectObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000E0, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E8, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Event_bVisible) == 0x0000F8, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_Select_Default_3) == 0x0000FC, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_GetSBPlayerController_ReturnValue) == 0x000100, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlaySE_ReturnValue_1) == 0x000108, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_IsValid_ReturnValue) == 0x00010C, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000110, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, K2Node_CreateDelegate_OutputDelegate_3) == 0x00011C, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_PlayAnimation_ReturnValue_4) == 0x000130, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_MakeLiteralText_ReturnValue) == 0x000138, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_NotEqual_TextText_ReturnValue) == 0x000150, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000158, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x000170, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit, CallFunc_BooleanAND_ReturnValue_1) == 0x000171, "Member 'TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.SetBGVisible
// 0x0001 (0x0001 - 0x0000)
struct TextWindowSkit_C_SetBGVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowSkit_C_SetBGVisible) == 0x000001, "Wrong alignment on TextWindowSkit_C_SetBGVisible");
static_assert(sizeof(TextWindowSkit_C_SetBGVisible) == 0x000001, "Wrong size on TextWindowSkit_C_SetBGVisible");
static_assert(offsetof(TextWindowSkit_C_SetBGVisible, bVisible) == 0x000000, "Member 'TextWindowSkit_C_SetBGVisible::bVisible' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.SetNextMarkVisibility
// 0x0001 (0x0001 - 0x0000)
struct TextWindowSkit_C_SetNextMarkVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowSkit_C_SetNextMarkVisibility) == 0x000001, "Wrong alignment on TextWindowSkit_C_SetNextMarkVisibility");
static_assert(sizeof(TextWindowSkit_C_SetNextMarkVisibility) == 0x000001, "Wrong size on TextWindowSkit_C_SetNextMarkVisibility");
static_assert(offsetof(TextWindowSkit_C_SetNextMarkVisibility, bInVisibility) == 0x000000, "Member 'TextWindowSkit_C_SetNextMarkVisibility::bInVisibility' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.SetSpeaker
// 0x0008 (0x0008 - 0x0000)
struct TextWindowSkit_C_SetSpeaker final
{
public:
	class FName                                   InProfileId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindowSkit_C_SetSpeaker) == 0x000004, "Wrong alignment on TextWindowSkit_C_SetSpeaker");
static_assert(sizeof(TextWindowSkit_C_SetSpeaker) == 0x000008, "Wrong size on TextWindowSkit_C_SetSpeaker");
static_assert(offsetof(TextWindowSkit_C_SetSpeaker, InProfileId) == 0x000000, "Member 'TextWindowSkit_C_SetSpeaker::InProfileId' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TextWindowSkit_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TextWindowSkit_C_SetText) == 0x000008, "Wrong alignment on TextWindowSkit_C_SetText");
static_assert(sizeof(TextWindowSkit_C_SetText) == 0x000018, "Wrong size on TextWindowSkit_C_SetText");
static_assert(offsetof(TextWindowSkit_C_SetText, InText) == 0x000000, "Member 'TextWindowSkit_C_SetText::InText' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TextWindowSkit_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindowSkit_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TextWindowSkit_C_OnAnimationFinished");
static_assert(sizeof(TextWindowSkit_C_OnAnimationFinished) == 0x000008, "Wrong size on TextWindowSkit_C_OnAnimationFinished");
static_assert(offsetof(TextWindowSkit_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TextWindowSkit_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.IsShow
// 0x0001 (0x0001 - 0x0000)
struct TextWindowSkit_C_IsShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowSkit_C_IsShow) == 0x000001, "Wrong alignment on TextWindowSkit_C_IsShow");
static_assert(sizeof(TextWindowSkit_C_IsShow) == 0x000001, "Wrong size on TextWindowSkit_C_IsShow");
static_assert(offsetof(TextWindowSkit_C_IsShow, ReturnValue) == 0x000000, "Member 'TextWindowSkit_C_IsShow::ReturnValue' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.SetBGOpacity
// 0x0004 (0x0004 - 0x0000)
struct TextWindowSkit_C_SetBGOpacity final
{
public:
	float                                         Opacity;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindowSkit_C_SetBGOpacity) == 0x000004, "Wrong alignment on TextWindowSkit_C_SetBGOpacity");
static_assert(sizeof(TextWindowSkit_C_SetBGOpacity) == 0x000004, "Wrong size on TextWindowSkit_C_SetBGOpacity");
static_assert(offsetof(TextWindowSkit_C_SetBGOpacity, Opacity) == 0x000000, "Member 'TextWindowSkit_C_SetBGOpacity::Opacity' has a wrong offset!");

// Function TextWindowSkit.TextWindowSkit_C.GetBGVisible
// 0x0003 (0x0003 - 0x0000)
struct TextWindowSkit_C_GetBGVisible final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBGVisible_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindowSkit_C_GetBGVisible) == 0x000001, "Wrong alignment on TextWindowSkit_C_GetBGVisible");
static_assert(sizeof(TextWindowSkit_C_GetBGVisible) == 0x000003, "Wrong size on TextWindowSkit_C_GetBGVisible");
static_assert(offsetof(TextWindowSkit_C_GetBGVisible, ReturnValue) == 0x000000, "Member 'TextWindowSkit_C_GetBGVisible::ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_GetBGVisible, CallFunc_GetBGVisible_ReturnValue) == 0x000001, "Member 'TextWindowSkit_C_GetBGVisible::CallFunc_GetBGVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindowSkit_C_GetBGVisible, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000002, "Member 'TextWindowSkit_C_GetBGVisible::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

