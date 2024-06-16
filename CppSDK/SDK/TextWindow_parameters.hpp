#pragma once

 

// Package: TextWindow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TextWindow.TextWindow_C.ExecuteUbergraph_TextWindow
// 0x01C8 (0x01C8 - 0x0000)
struct TextWindow_C_ExecuteUbergraph_TextWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetScriptActorFastForwardFlag_ReturnValue; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E3C[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E3D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E3E[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E3F[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText;                               // 0x0060(0x0018)(ConstParm)
	class FName                                   K2Node_Event_InProfileId;                          // 0x0078(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSpeakerName_ReturnValue;               // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E40[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInVisibility;                        // 0x00C0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E41[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E42[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_2;                           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E43[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bVisible;                             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E44[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0110(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_3;                           // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E45[0x5];                                     // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E46[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E47[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0150(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E48[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0170(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E49[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x018C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindow_C_ExecuteUbergraph_TextWindow) == 0x000008, "Wrong alignment on TextWindow_C_ExecuteUbergraph_TextWindow");
static_assert(sizeof(TextWindow_C_ExecuteUbergraph_TextWindow) == 0x0001C8, "Wrong size on TextWindow_C_ExecuteUbergraph_TextWindow");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, EntryPoint) == 0x000000, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_GetScriptActorFastForwardFlag_ReturnValue) == 0x000004, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_GetScriptActorFastForwardFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_bool_Variable) == 0x000005, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_byte_Variable) == 0x000006, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_byte_Variable_1) == 0x000007, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_bool_Variable_1) == 0x000008, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_bool_Variable_2) == 0x000009, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_bool_Variable_3) == 0x00000A, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_float_Variable) == 0x00000C, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, Temp_float_Variable_1) == 0x000010, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlaySE_ReturnValue) == 0x000014, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlaySE_ReturnValue_1) == 0x000018, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_Animation) == 0x000030, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000049, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_GetVisibility_ReturnValue) == 0x000058, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x00005A, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_InText) == 0x000060, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_InProfileId) == 0x000078, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_InProfileId' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000080, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_GetSpeakerName_ReturnValue) == 0x000088, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_GetSpeakerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Select_Default) == 0x0000B0, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000B8, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_bInVisibility) == 0x0000C0, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_bInVisibility' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000C1, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000C2, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_BooleanAND_ReturnValue) == 0x0000C3, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Select_Default_1) == 0x0000C8, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x0000D0, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000D8, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Select_Default_2) == 0x0000E0, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue_4) == 0x0000E8, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlayAnimation_ReturnValue_4) == 0x0000F0, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F8, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_bVisible) == 0x000108, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000110, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_PlaySE_ReturnValue_2) == 0x000118, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Select_Default_3) == 0x00011C, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_GetSBPlayerController_ReturnValue) == 0x000120, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_BooleanAND_ReturnValue_1) == 0x000128, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_IsValid_ReturnValue) == 0x000129, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_BooleanAND_ReturnValue_2) == 0x00012A, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000130, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_IsValid_ReturnValue_1) == 0x000138, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x00013C, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_MakeLiteralText_ReturnValue) == 0x000150, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_NotEqual_TextText_ReturnValue) == 0x000168, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000170, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x000188, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, CallFunc_BooleanAND_ReturnValue_3) == 0x000189, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_MyGeometry) == 0x00018C, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(TextWindow_C_ExecuteUbergraph_TextWindow, K2Node_Event_InDeltaTime) == 0x0001C4, "Member 'TextWindow_C_ExecuteUbergraph_TextWindow::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function TextWindow.TextWindow_C.Tick
// 0x003C (0x003C - 0x0000)
struct TextWindow_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindow_C_Tick) == 0x000004, "Wrong alignment on TextWindow_C_Tick");
static_assert(sizeof(TextWindow_C_Tick) == 0x00003C, "Wrong size on TextWindow_C_Tick");
static_assert(offsetof(TextWindow_C_Tick, MyGeometry) == 0x000000, "Member 'TextWindow_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(TextWindow_C_Tick, InDeltaTime) == 0x000038, "Member 'TextWindow_C_Tick::InDeltaTime' has a wrong offset!");

// Function TextWindow.TextWindow_C.SetBGVisible
// 0x0001 (0x0001 - 0x0000)
struct TextWindow_C_SetBGVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindow_C_SetBGVisible) == 0x000001, "Wrong alignment on TextWindow_C_SetBGVisible");
static_assert(sizeof(TextWindow_C_SetBGVisible) == 0x000001, "Wrong size on TextWindow_C_SetBGVisible");
static_assert(offsetof(TextWindow_C_SetBGVisible, bVisible) == 0x000000, "Member 'TextWindow_C_SetBGVisible::bVisible' has a wrong offset!");

// Function TextWindow.TextWindow_C.SetNextMarkVisibility
// 0x0001 (0x0001 - 0x0000)
struct TextWindow_C_SetNextMarkVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindow_C_SetNextMarkVisibility) == 0x000001, "Wrong alignment on TextWindow_C_SetNextMarkVisibility");
static_assert(sizeof(TextWindow_C_SetNextMarkVisibility) == 0x000001, "Wrong size on TextWindow_C_SetNextMarkVisibility");
static_assert(offsetof(TextWindow_C_SetNextMarkVisibility, bInVisibility) == 0x000000, "Member 'TextWindow_C_SetNextMarkVisibility::bInVisibility' has a wrong offset!");

// Function TextWindow.TextWindow_C.SetSpeaker
// 0x0008 (0x0008 - 0x0000)
struct TextWindow_C_SetSpeaker final
{
public:
	class FName                                   InProfileId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindow_C_SetSpeaker) == 0x000004, "Wrong alignment on TextWindow_C_SetSpeaker");
static_assert(sizeof(TextWindow_C_SetSpeaker) == 0x000008, "Wrong size on TextWindow_C_SetSpeaker");
static_assert(offsetof(TextWindow_C_SetSpeaker, InProfileId) == 0x000000, "Member 'TextWindow_C_SetSpeaker::InProfileId' has a wrong offset!");

// Function TextWindow.TextWindow_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TextWindow_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TextWindow_C_SetText) == 0x000008, "Wrong alignment on TextWindow_C_SetText");
static_assert(sizeof(TextWindow_C_SetText) == 0x000018, "Wrong size on TextWindow_C_SetText");
static_assert(offsetof(TextWindow_C_SetText, InText) == 0x000000, "Member 'TextWindow_C_SetText::InText' has a wrong offset!");

// Function TextWindow.TextWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TextWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TextWindow_C_OnAnimationFinished");
static_assert(sizeof(TextWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on TextWindow_C_OnAnimationFinished");
static_assert(offsetof(TextWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TextWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TextWindow.TextWindow_C.IsShow
// 0x0001 (0x0001 - 0x0000)
struct TextWindow_C_IsShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindow_C_IsShow) == 0x000001, "Wrong alignment on TextWindow_C_IsShow");
static_assert(sizeof(TextWindow_C_IsShow) == 0x000001, "Wrong size on TextWindow_C_IsShow");
static_assert(offsetof(TextWindow_C_IsShow, ReturnValue) == 0x000000, "Member 'TextWindow_C_IsShow::ReturnValue' has a wrong offset!");

// Function TextWindow.TextWindow_C.SetBGOpacity
// 0x0004 (0x0004 - 0x0000)
struct TextWindow_C_SetBGOpacity final
{
public:
	float                                         Opacity;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWindow_C_SetBGOpacity) == 0x000004, "Wrong alignment on TextWindow_C_SetBGOpacity");
static_assert(sizeof(TextWindow_C_SetBGOpacity) == 0x000004, "Wrong size on TextWindow_C_SetBGOpacity");
static_assert(offsetof(TextWindow_C_SetBGOpacity, Opacity) == 0x000000, "Member 'TextWindow_C_SetBGOpacity::Opacity' has a wrong offset!");

// Function TextWindow.TextWindow_C.GetBGVisible
// 0x0003 (0x0003 - 0x0000)
struct TextWindow_C_GetBGVisible final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBGVisible_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindow_C_GetBGVisible) == 0x000001, "Wrong alignment on TextWindow_C_GetBGVisible");
static_assert(sizeof(TextWindow_C_GetBGVisible) == 0x000003, "Wrong size on TextWindow_C_GetBGVisible");
static_assert(offsetof(TextWindow_C_GetBGVisible, ReturnValue) == 0x000000, "Member 'TextWindow_C_GetBGVisible::ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_GetBGVisible, CallFunc_GetBGVisible_ReturnValue) == 0x000001, "Member 'TextWindow_C_GetBGVisible::CallFunc_GetBGVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_GetBGVisible, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000002, "Member 'TextWindow_C_GetBGVisible::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function TextWindow.TextWindow_C.CloseOther
// 0x0038 (0x0038 - 0x0000)
struct TextWindow_C_CloseOther final
{
public:
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextWindow_C_CloseOther) == 0x000008, "Wrong alignment on TextWindow_C_CloseOther");
static_assert(sizeof(TextWindow_C_CloseOther) == 0x000038, "Wrong size on TextWindow_C_CloseOther");
static_assert(offsetof(TextWindow_C_CloseOther, CallFunc_GetSBPlayerController_ReturnValue) == 0x000000, "Member 'TextWindow_C_CloseOther::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_CloseOther, CallFunc_GetHUD_ReturnValue) == 0x000008, "Member 'TextWindow_C_CloseOther::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWindow_C_CloseOther, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000010, "Member 'TextWindow_C_CloseOther::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(TextWindow_C_CloseOther, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TextWindow_C_CloseOther::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TextWindow_C_CloseOther, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000020, "Member 'TextWindow_C_CloseOther::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(TextWindow_C_CloseOther, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'TextWindow_C_CloseOther::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

