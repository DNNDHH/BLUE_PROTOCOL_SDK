#pragma once

 

// Package: KeyGuideHUD

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"
#include "EKeyGuideType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function KeyGuideHUD.KeyGuideHUD_C.ExecuteUbergraph_KeyGuideHUD
// 0x00F0 (0x00F0 - 0x0000)
struct KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EDA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EDB[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetKeyGuideSize_ReturnValue;              // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetKeyGuide2Size_ReturnValue;             // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EDC[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEdit;                         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsMount;                // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EDD[0x1];                                     // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bOpen;                                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EDE[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsCheerfulItem;         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EDF[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE0[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_TimerExistsHandle_ReturnValue;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_TimerExistsHandle_ReturnValue_1;       // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EE1[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD) == 0x000008, "Wrong alignment on KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD");
static_assert(sizeof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD) == 0x0000F0, "Wrong size on KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, EntryPoint) == 0x000000, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, Temp_byte_Variable) == 0x000004, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000040, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, Temp_bool_Variable) == 0x000058, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, Temp_byte_Variable_1) == 0x000059, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, Temp_byte_Variable_2) == 0x00005A, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_GetKeyGuideSize_ReturnValue) == 0x00005C, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_GetKeyGuideSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_GetKeyGuide2Size_ReturnValue) == 0x000064, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_GetKeyGuide2Size_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BreakVector2D_X) == 0x00006C, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BreakVector2D_Y) == 0x000070, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BreakVector2D_X_1) == 0x000074, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BreakVector2D_Y_1) == 0x000078, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_Add_FloatFloat_ReturnValue) == 0x00007C, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_Event_IsDesignTime) == 0x000080, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BreakVector2D_X_2) == 0x000084, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BreakVector2D_Y_2) == 0x000088, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_MakeVector2D_ReturnValue) == 0x00008C, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CustomEvent_IsEdit) == 0x000094, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CustomEvent_IsEdit' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_ComponentBoundEvent_IsMount) == 0x000095, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_ComponentBoundEvent_IsMount' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000096, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_GetSBPlayerController_ReturnValue) == 0x000098, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CustomEvent_Result) == 0x0000A0, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_Event_bOpen) == 0x0000A1, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_Event_bOpen' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_PlaySE_ReturnValue) == 0x0000A4, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B0, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_ComponentBoundEvent_IsCheerfulItem) == 0x0000B8, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_ComponentBoundEvent_IsCheerfulItem' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x0000B9, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_Event_Animation) == 0x0000C0, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x0000C8, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, Temp_byte_Variable_3) == 0x0000C9, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, Temp_bool_Variable_1) == 0x0000CA, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_Select_Default) == 0x0000CB, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000D0, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_K2_TimerExistsHandle_ReturnValue) == 0x0000D8, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_K2_TimerExistsHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_Not_PreBool_ReturnValue) == 0x0000D9, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_K2_TimerExistsHandle_ReturnValue_1) == 0x0000DA, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_K2_TimerExistsHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000DB, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000E0, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CustomEvent_InUIType) == 0x0000E8, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CustomEvent_bInVisibility) == 0x0000E9, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_CustomEvent_bInInstantly) == 0x0000EA, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, K2Node_Select_Default_1) == 0x0000EB, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000EC, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000ED, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD, CallFunc_BooleanOR_ReturnValue) == 0x0000EE, "Member 'KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.UIVisibleSettingChangeEnvet
// 0x0003 (0x0003 - 0x0000)
struct KeyGuideHUD_C_UIVisibleSettingChangeEnvet final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_UIVisibleSettingChangeEnvet) == 0x000001, "Wrong alignment on KeyGuideHUD_C_UIVisibleSettingChangeEnvet");
static_assert(sizeof(KeyGuideHUD_C_UIVisibleSettingChangeEnvet) == 0x000003, "Wrong size on KeyGuideHUD_C_UIVisibleSettingChangeEnvet");
static_assert(offsetof(KeyGuideHUD_C_UIVisibleSettingChangeEnvet, InUIType) == 0x000000, "Member 'KeyGuideHUD_C_UIVisibleSettingChangeEnvet::InUIType' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UIVisibleSettingChangeEnvet, bInVisibility) == 0x000001, "Member 'KeyGuideHUD_C_UIVisibleSettingChangeEnvet::bInVisibility' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UIVisibleSettingChangeEnvet, bInInstantly) == 0x000002, "Member 'KeyGuideHUD_C_UIVisibleSettingChangeEnvet::bInInstantly' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct KeyGuideHUD_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideHUD_C_OnAnimationFinished) == 0x000008, "Wrong alignment on KeyGuideHUD_C_OnAnimationFinished");
static_assert(sizeof(KeyGuideHUD_C_OnAnimationFinished) == 0x000008, "Wrong size on KeyGuideHUD_C_OnAnimationFinished");
static_assert(offsetof(KeyGuideHUD_C_OnAnimationFinished, Animation) == 0x000000, "Member 'KeyGuideHUD_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature final
{
public:
	bool                                          IsCheerfulItem;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature) == 0x000001, "Wrong alignment on KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature");
static_assert(sizeof(KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature) == 0x000001, "Wrong size on KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature");
static_assert(offsetof(KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature, IsCheerfulItem) == 0x000000, "Member 'KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature::IsCheerfulItem' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.OnPlayAnim
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_OnPlayAnim final
{
public:
	bool                                          bOpen;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_OnPlayAnim) == 0x000001, "Wrong alignment on KeyGuideHUD_C_OnPlayAnim");
static_assert(sizeof(KeyGuideHUD_C_OnPlayAnim) == 0x000001, "Wrong size on KeyGuideHUD_C_OnPlayAnim");
static_assert(offsetof(KeyGuideHUD_C_OnPlayAnim, bOpen) == 0x000000, "Member 'KeyGuideHUD_C_OnPlayAnim::bOpen' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_CustomEvent_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_CustomEvent_0) == 0x000001, "Wrong alignment on KeyGuideHUD_C_CustomEvent_0");
static_assert(sizeof(KeyGuideHUD_C_CustomEvent_0) == 0x000001, "Wrong size on KeyGuideHUD_C_CustomEvent_0");
static_assert(offsetof(KeyGuideHUD_C_CustomEvent_0, Result) == 0x000000, "Member 'KeyGuideHUD_C_CustomEvent_0::Result' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature final
{
public:
	bool                                          IsMount;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature) == 0x000001, "Wrong alignment on KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature");
static_assert(sizeof(KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature) == 0x000001, "Wrong size on KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature");
static_assert(offsetof(KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature, IsMount) == 0x000000, "Member 'KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature::IsMount' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_SetEditMode final
{
public:
	bool                                          IsEdit;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_SetEditMode) == 0x000001, "Wrong alignment on KeyGuideHUD_C_SetEditMode");
static_assert(sizeof(KeyGuideHUD_C_SetEditMode) == 0x000001, "Wrong size on KeyGuideHUD_C_SetEditMode");
static_assert(offsetof(KeyGuideHUD_C_SetEditMode, IsEdit) == 0x000000, "Member 'KeyGuideHUD_C_SetEditMode::IsEdit' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_PreConstruct final
{
public:
	bool                                          Param_IsDesignTime;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_PreConstruct) == 0x000001, "Wrong alignment on KeyGuideHUD_C_PreConstruct");
static_assert(sizeof(KeyGuideHUD_C_PreConstruct) == 0x000001, "Wrong size on KeyGuideHUD_C_PreConstruct");
static_assert(offsetof(KeyGuideHUD_C_PreConstruct, Param_IsDesignTime) == 0x000000, "Member 'KeyGuideHUD_C_PreConstruct::Param_IsDesignTime' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuideSize
// 0x0038 (0x0038 - 0x0000)
struct KeyGuideHUD_C_GetKeyGuideSize final
{
public:
	struct FVector2D                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE2[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideHUD_C_GetKeyGuideSize) == 0x000008, "Wrong alignment on KeyGuideHUD_C_GetKeyGuideSize");
static_assert(sizeof(KeyGuideHUD_C_GetKeyGuideSize) == 0x000038, "Wrong size on KeyGuideHUD_C_GetKeyGuideSize");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, ReturnValue) == 0x000000, "Member 'KeyGuideHUD_C_GetKeyGuideSize::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, Temp_byte_Variable) == 0x000008, "Member 'KeyGuideHUD_C_GetKeyGuideSize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, Temp_struct_Variable) == 0x00000C, "Member 'KeyGuideHUD_C_GetKeyGuideSize::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, Temp_struct_Variable_1) == 0x000014, "Member 'KeyGuideHUD_C_GetKeyGuideSize::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, CallFunc_GetVisibility_ReturnValue) == 0x00001C, "Member 'KeyGuideHUD_C_GetKeyGuideSize::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, CallFunc_GetActiveWidget_ReturnValue) == 0x000020, "Member 'KeyGuideHUD_C_GetKeyGuideSize::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, CallFunc_GetDesiredSize_ReturnValue) == 0x000028, "Member 'KeyGuideHUD_C_GetKeyGuideSize::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuideSize, K2Node_Select_Default) == 0x000030, "Member 'KeyGuideHUD_C_GetKeyGuideSize::K2Node_Select_Default' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuide2Size
// 0x0038 (0x0038 - 0x0000)
struct KeyGuideHUD_C_GetKeyGuide2Size final
{
public:
	struct FVector2D                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE5[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideHUD_C_GetKeyGuide2Size) == 0x000008, "Wrong alignment on KeyGuideHUD_C_GetKeyGuide2Size");
static_assert(sizeof(KeyGuideHUD_C_GetKeyGuide2Size) == 0x000038, "Wrong size on KeyGuideHUD_C_GetKeyGuide2Size");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, ReturnValue) == 0x000000, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, Temp_byte_Variable) == 0x000008, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, Temp_struct_Variable) == 0x00000C, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, Temp_struct_Variable_1) == 0x000014, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, CallFunc_GetVisibility_ReturnValue) == 0x00001C, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, CallFunc_GetActiveWidget_ReturnValue) == 0x000020, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, CallFunc_GetDesiredSize_ReturnValue) == 0x000028, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKeyGuide2Size, K2Node_Select_Default) == 0x000030, "Member 'KeyGuideHUD_C_GetKeyGuide2Size::K2Node_Select_Default' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_ChangeKeyGuide final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideHUD_C_ChangeKeyGuide) == 0x000001, "Wrong alignment on KeyGuideHUD_C_ChangeKeyGuide");
static_assert(sizeof(KeyGuideHUD_C_ChangeKeyGuide) == 0x000001, "Wrong size on KeyGuideHUD_C_ChangeKeyGuide");
static_assert(offsetof(KeyGuideHUD_C_ChangeKeyGuide, InKeyGuideType) == 0x000000, "Member 'KeyGuideHUD_C_ChangeKeyGuide::InKeyGuideType' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_ChangeKeyGuide2 final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideHUD_C_ChangeKeyGuide2) == 0x000001, "Wrong alignment on KeyGuideHUD_C_ChangeKeyGuide2");
static_assert(sizeof(KeyGuideHUD_C_ChangeKeyGuide2) == 0x000001, "Wrong size on KeyGuideHUD_C_ChangeKeyGuide2");
static_assert(offsetof(KeyGuideHUD_C_ChangeKeyGuide2, InKeyGuideType) == 0x000000, "Member 'KeyGuideHUD_C_ChangeKeyGuide2::InKeyGuideType' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.Is Key Guide Animation
// 0x0020 (0x0020 - 0x0000)
struct KeyGuideHUD_C_Is_Key_Guide_Animation final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Key_Input_BP_Result;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EE6[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEngramCannonAction_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_Is_Key_Guide_Animation) == 0x000008, "Wrong alignment on KeyGuideHUD_C_Is_Key_Guide_Animation");
static_assert(sizeof(KeyGuideHUD_C_Is_Key_Guide_Animation) == 0x000020, "Wrong size on KeyGuideHUD_C_Is_Key_Guide_Animation");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, Result) == 0x000000, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, CallFunc_Is_Key_Input_BP_Result) == 0x000001, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::CallFunc_Is_Key_Input_BP_Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, CallFunc_IsEngramCannonAction_ReturnValue) == 0x000019, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::CallFunc_IsEngramCannonAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00001B, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Guide_Animation, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001C, "Member 'KeyGuideHUD_C_Is_Key_Guide_Animation::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.Reset
// 0x0003 (0x0003 - 0x0000)
struct KeyGuideHUD_C_Reset final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_Reset) == 0x000001, "Wrong alignment on KeyGuideHUD_C_Reset");
static_assert(sizeof(KeyGuideHUD_C_Reset) == 0x000003, "Wrong size on KeyGuideHUD_C_Reset");
static_assert(offsetof(KeyGuideHUD_C_Reset, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'KeyGuideHUD_C_Reset::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Reset, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'KeyGuideHUD_C_Reset::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Reset, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'KeyGuideHUD_C_Reset::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideTextVisible
// 0x0002 (0x0002 - 0x0000)
struct KeyGuideHUD_C_SetKeyGuideTextVisible final
{
public:
	ESkillActionPosition                          SkillActionPosition;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsVisible;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_SetKeyGuideTextVisible) == 0x000001, "Wrong alignment on KeyGuideHUD_C_SetKeyGuideTextVisible");
static_assert(sizeof(KeyGuideHUD_C_SetKeyGuideTextVisible) == 0x000002, "Wrong size on KeyGuideHUD_C_SetKeyGuideTextVisible");
static_assert(offsetof(KeyGuideHUD_C_SetKeyGuideTextVisible, SkillActionPosition) == 0x000000, "Member 'KeyGuideHUD_C_SetKeyGuideTextVisible::SkillActionPosition' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_SetKeyGuideTextVisible, Param_IsVisible) == 0x000001, "Member 'KeyGuideHUD_C_SetKeyGuideTextVisible::Param_IsVisible' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.Is Key Input BP
// 0x0018 (0x0018 - 0x0000)
struct KeyGuideHUD_C_Is_Key_Input_BP final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetPlayerCharacter_Result;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EE7[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_AsSBPlayer_Character;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGamepadPressed_Result;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetKBPressed_Result;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_Is_Key_Input_BP) == 0x000008, "Wrong alignment on KeyGuideHUD_C_Is_Key_Input_BP");
static_assert(sizeof(KeyGuideHUD_C_Is_Key_Input_BP) == 0x000018, "Wrong size on KeyGuideHUD_C_Is_Key_Input_BP");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Input_BP, Result) == 0x000000, "Member 'KeyGuideHUD_C_Is_Key_Input_BP::Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Input_BP, CallFunc_GetPlayerCharacter_Result) == 0x000001, "Member 'KeyGuideHUD_C_Is_Key_Input_BP::CallFunc_GetPlayerCharacter_Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Input_BP, CallFunc_GetPlayerCharacter_AsSBPlayer_Character) == 0x000008, "Member 'KeyGuideHUD_C_Is_Key_Input_BP::CallFunc_GetPlayerCharacter_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Input_BP, CallFunc_GetGamepadPressed_Result) == 0x000010, "Member 'KeyGuideHUD_C_Is_Key_Input_BP::CallFunc_GetGamepadPressed_Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Input_BP, CallFunc_GetKBPressed_Result) == 0x000011, "Member 'KeyGuideHUD_C_Is_Key_Input_BP::CallFunc_GetKBPressed_Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_Is_Key_Input_BP, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'KeyGuideHUD_C_Is_Key_Input_BP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.GetPlayerCharacter
// 0x0028 (0x0028 - 0x0000)
struct KeyGuideHUD_C_GetPlayerCharacter final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EE8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     AsSBPlayer_Character;                              // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_GetPlayerCharacter) == 0x000008, "Wrong alignment on KeyGuideHUD_C_GetPlayerCharacter");
static_assert(sizeof(KeyGuideHUD_C_GetPlayerCharacter) == 0x000028, "Wrong size on KeyGuideHUD_C_GetPlayerCharacter");
static_assert(offsetof(KeyGuideHUD_C_GetPlayerCharacter, Result) == 0x000000, "Member 'KeyGuideHUD_C_GetPlayerCharacter::Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetPlayerCharacter, AsSBPlayer_Character) == 0x000008, "Member 'KeyGuideHUD_C_GetPlayerCharacter::AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetPlayerCharacter, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'KeyGuideHUD_C_GetPlayerCharacter::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetPlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'KeyGuideHUD_C_GetPlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetPlayerCharacter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'KeyGuideHUD_C_GetPlayerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetPlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'KeyGuideHUD_C_GetPlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.GetKBPressed
// 0x0208 (0x0208 - 0x0000)
struct KeyGuideHUD_C_GetKBPressed final
{
public:
	class ASBPlayerCharacter*                     _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EE9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x0010(0x01C8)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EEA[0x5];                                     // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x01E8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue;       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_GetKBPressed) == 0x000008, "Wrong alignment on KeyGuideHUD_C_GetKBPressed");
static_assert(sizeof(KeyGuideHUD_C_GetKBPressed) == 0x000208, "Wrong size on KeyGuideHUD_C_GetKBPressed");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, _____) == 0x000000, "Member 'KeyGuideHUD_C_GetKBPressed::_____' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, Result) == 0x000008, "Member 'KeyGuideHUD_C_GetKBPressed::Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_GetClassKeyConfig_ReturnValue) == 0x000010, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_GetPlayerController_ReturnValue) == 0x0001D8, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_GetActionKeyMouse_MouseKey) == 0x0001E0, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0001E1, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_IsValid_ReturnValue) == 0x0001E2, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x0001E8, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetKBPressed, CallFunc_WasInputKeyJustPressed_ReturnValue) == 0x000200, "Member 'KeyGuideHUD_C_GetKBPressed::CallFunc_WasInputKeyJustPressed_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.GetGamepadPressed
// 0x0208 (0x0208 - 0x0000)
struct KeyGuideHUD_C_GetGamepadPressed final
{
public:
	class ASBPlayerCharacter*                     _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EEB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x0010(0x01C8)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EEC[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x01E8(0x0018)(HasGetValueTypeHash)
	float                                         CallFunc_GetInputKeyTimeDown_ReturnValue;          // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0206(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_GetGamepadPressed) == 0x000008, "Wrong alignment on KeyGuideHUD_C_GetGamepadPressed");
static_assert(sizeof(KeyGuideHUD_C_GetGamepadPressed) == 0x000208, "Wrong size on KeyGuideHUD_C_GetGamepadPressed");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, _____) == 0x000000, "Member 'KeyGuideHUD_C_GetGamepadPressed::_____' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, Result) == 0x000008, "Member 'KeyGuideHUD_C_GetGamepadPressed::Result' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_GetClassKeyConfig_ReturnValue) == 0x000010, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_GetPlayerController_ReturnValue) == 0x0001D8, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_GetActionKeyPad_ReturnValue) == 0x0001E0, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_IsValid_ReturnValue) == 0x0001E1, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_GamepadKeyToKey_ReturnValue) == 0x0001E8, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_GetInputKeyTimeDown_ReturnValue) == 0x000200, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_GetInputKeyTimeDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000204, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_Less_FloatFloat_ReturnValue) == 0x000205, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetGamepadPressed, CallFunc_BooleanAND_ReturnValue) == 0x000206, "Member 'KeyGuideHUD_C_GetGamepadPressed::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.GetClassKeyConfig
// 0x03A0 (0x03A0 - 0x0000)
struct KeyGuideHUD_C_GetClassKeyConfig final
{
public:
	class ASBPlayerCharacter*                     _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            ReturnValue;                                       // 0x0008(0x01C8)(Parm, OutParm, ReturnParm)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x01D8(0x01C8)()
};
static_assert(alignof(KeyGuideHUD_C_GetClassKeyConfig) == 0x000008, "Wrong alignment on KeyGuideHUD_C_GetClassKeyConfig");
static_assert(sizeof(KeyGuideHUD_C_GetClassKeyConfig) == 0x0003A0, "Wrong size on KeyGuideHUD_C_GetClassKeyConfig");
static_assert(offsetof(KeyGuideHUD_C_GetClassKeyConfig, _____) == 0x000000, "Member 'KeyGuideHUD_C_GetClassKeyConfig::_____' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetClassKeyConfig, ReturnValue) == 0x000008, "Member 'KeyGuideHUD_C_GetClassKeyConfig::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetClassKeyConfig, CallFunc_GetPlayerManager_ReturnValue) == 0x0001D0, "Member 'KeyGuideHUD_C_GetClassKeyConfig::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_GetClassKeyConfig, CallFunc_GetClassKeyConfig_ReturnValue) == 0x0001D8, "Member 'KeyGuideHUD_C_GetClassKeyConfig::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.UpdateKeyGuide
// 0x0020 (0x0020 - 0x0000)
struct KeyGuideHUD_C_UpdateKeyGuide final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EED[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        CallFunc_IsOperateModeGuideVisibility_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EEE[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_UpdateKeyGuide) == 0x000008, "Wrong alignment on KeyGuideHUD_C_UpdateKeyGuide");
static_assert(sizeof(KeyGuideHUD_C_UpdateKeyGuide) == 0x000020, "Wrong size on KeyGuideHUD_C_UpdateKeyGuide");
static_assert(offsetof(KeyGuideHUD_C_UpdateKeyGuide, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'KeyGuideHUD_C_UpdateKeyGuide::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UpdateKeyGuide, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'KeyGuideHUD_C_UpdateKeyGuide::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UpdateKeyGuide, CallFunc_IsOperateModeGuideVisibility_ReturnValue) == 0x000010, "Member 'KeyGuideHUD_C_UpdateKeyGuide::CallFunc_IsOperateModeGuideVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UpdateKeyGuide, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'KeyGuideHUD_C_UpdateKeyGuide::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UpdateKeyGuide, CallFunc_GetAdventurerRank_ReturnValue) == 0x000014, "Member 'KeyGuideHUD_C_UpdateKeyGuide::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_UpdateKeyGuide, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'KeyGuideHUD_C_UpdateKeyGuide::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideNaviVisibility
// 0x0001 (0x0001 - 0x0000)
struct KeyGuideHUD_C_SetKeyGuideNaviVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideHUD_C_SetKeyGuideNaviVisibility) == 0x000001, "Wrong alignment on KeyGuideHUD_C_SetKeyGuideNaviVisibility");
static_assert(sizeof(KeyGuideHUD_C_SetKeyGuideNaviVisibility) == 0x000001, "Wrong size on KeyGuideHUD_C_SetKeyGuideNaviVisibility");
static_assert(offsetof(KeyGuideHUD_C_SetKeyGuideNaviVisibility, InVisibility) == 0x000000, "Member 'KeyGuideHUD_C_SetKeyGuideNaviVisibility::InVisibility' has a wrong offset!");

// Function KeyGuideHUD.KeyGuideHUD_C.IsPlayAnimation
// 0x0002 (0x0002 - 0x0000)
struct KeyGuideHUD_C_IsPlayAnimation final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuideHUD_C_IsPlayAnimation) == 0x000001, "Wrong alignment on KeyGuideHUD_C_IsPlayAnimation");
static_assert(sizeof(KeyGuideHUD_C_IsPlayAnimation) == 0x000002, "Wrong size on KeyGuideHUD_C_IsPlayAnimation");
static_assert(offsetof(KeyGuideHUD_C_IsPlayAnimation, ReturnValue) == 0x000000, "Member 'KeyGuideHUD_C_IsPlayAnimation::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideHUD_C_IsPlayAnimation, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'KeyGuideHUD_C_IsPlayAnimation::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

