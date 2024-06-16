#pragma once

 

// Package: CountdownUI

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CountdownUI.CountdownUI_C.ExecuteUbergraph_CountdownUI
// 0x01D8 (0x01D8 - 0x0000)
struct CountdownUI_C_ExecuteUbergraph_CountdownUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	ECountdownType                                Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECountdownType                                Temp_byte_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C3[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C4[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bPress)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0068(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C5[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C6[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChatModeActive_IsActive;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChatModeActive_IsActive_1;              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C7[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InMessage_1;                          // 0x00C8(0x0018)(ConstParm)
	int32                                         K2Node_Event_InCountdownTime_1;                    // 0x00E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECountdownResult                              K2Node_CustomEvent_Result;                         // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECountdownType                                K2Node_Event_InCountdownType_1;                    // 0x00E5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C8[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InCountdownTime;                      // 0x00E8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C9[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InMessage;                            // 0x00F8(0x0018)(ConstParm)
	ECountdownType                                K2Node_Event_InCountdownType;                      // 0x0110(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56CA[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56CB[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bPress;                         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56CC[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56CD[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0170(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56CE[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56CF[0x5];                                     // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_3;         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_3;         // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56D0[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCountCancel_NotCancel;               // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D1[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x01C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56D2[0x1];                                     // 0x01C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_1;                      // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_ExecuteUbergraph_CountdownUI) == 0x000008, "Wrong alignment on CountdownUI_C_ExecuteUbergraph_CountdownUI");
static_assert(sizeof(CountdownUI_C_ExecuteUbergraph_CountdownUI) == 0x0001D8, "Wrong size on CountdownUI_C_ExecuteUbergraph_CountdownUI");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, EntryPoint) == 0x000000, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_byte_Variable) == 0x000014, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_int_Variable) == 0x000018, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_int_Variable_1) == 0x00001C, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_int_Variable_2) == 0x000020, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_byte_Variable_1) == 0x000024, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_int_Variable_3) == 0x000028, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_int_Variable_4) == 0x00002C, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_int_Variable_5) == 0x000030, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_MakeLiteralByte_ReturnValue) == 0x000034, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_bool_Variable) == 0x000035, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CreateDelegate_OutputDelegate_3) == 0x000058, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_MyGeometry) == 0x000068, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InDeltaTime) == 0x0000A0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_FCeil_ReturnValue) == 0x0000A4, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000A8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AC, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000AD, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000B0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_FClamp_ReturnValue) == 0x0000B4, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000B9, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_PlaySE_ReturnValue) == 0x0000BC, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_IsChatModeActive_IsActive) == 0x0000C0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_IsChatModeActive_IsActive' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_IsChatModeActive_IsActive_1) == 0x0000C1, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_IsChatModeActive_IsActive_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000C2, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000C3, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x0000C4, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_BooleanAND_ReturnValue) == 0x0000C5, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InMessage_1) == 0x0000C8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InMessage_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InCountdownTime_1) == 0x0000E0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InCountdownTime_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CustomEvent_Result) == 0x0000E4, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InCountdownType_1) == 0x0000E5, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InCountdownType_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InCountdownTime) == 0x0000E8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InCountdownTime' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Select_Default) == 0x0000EC, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, Temp_bool_Variable_1) == 0x0000F0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InMessage) == 0x0000F8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InMessage' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_InCountdownType) == 0x000110, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_InCountdownType' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Select_Default_1) == 0x000114, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000118, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000120, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000130, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CustomEvent_bPress) == 0x000138, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CustomEvent_bPress' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000140, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_bSuccess_1) == 0x000148, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000150, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000158, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_PlayAnimation_ReturnValue) == 0x000160, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000168, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Event_Animation) == 0x000170, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000178, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000180, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x000188, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_bSuccess_2) == 0x000190, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_Not_PreBool_ReturnValue) == 0x000191, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_IsVisible_ReturnValue) == 0x000192, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetPlayerCharacter_ReturnValue_3) == 0x000198, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_AsSBPlayer_Character_3) == 0x0001A0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_AsSBPlayer_Character_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_DynamicCast_bSuccess_3) == 0x0001A8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001A9, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_PlaySE_ReturnValue_1) == 0x0001AC, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_PlaySE_ReturnValue_2) == 0x0001B0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_CheckCountCancel_NotCancel) == 0x0001B4, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_CheckCountCancel_NotCancel' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0001B8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetVisibleSetting_ReturnValue) == 0x0001C0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CustomEvent_InUIType) == 0x0001C1, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CustomEvent_bInVisibility) == 0x0001C2, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_CustomEvent_bInInstantly) == 0x0001C3, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Select_Default_2) == 0x0001C4, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001C5, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, K2Node_Select_Default_3) == 0x0001C6, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_PlaySE_ReturnValue_3) == 0x0001C8, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_FCeil_ReturnValue_1) == 0x0001CC, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_FCeil_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_ExecuteUbergraph_CountdownUI, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0001D0, "Member 'CountdownUI_C_ExecuteUbergraph_CountdownUI::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.UIVisibleSettingChangeDelegate_Event
// 0x0003 (0x0003 - 0x0000)
struct CountdownUI_C_UIVisibleSettingChangeDelegate_Event final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CountdownUI_C_UIVisibleSettingChangeDelegate_Event) == 0x000001, "Wrong alignment on CountdownUI_C_UIVisibleSettingChangeDelegate_Event");
static_assert(sizeof(CountdownUI_C_UIVisibleSettingChangeDelegate_Event) == 0x000003, "Wrong size on CountdownUI_C_UIVisibleSettingChangeDelegate_Event");
static_assert(offsetof(CountdownUI_C_UIVisibleSettingChangeDelegate_Event, InUIType) == 0x000000, "Member 'CountdownUI_C_UIVisibleSettingChangeDelegate_Event::InUIType' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_UIVisibleSettingChangeDelegate_Event, bInVisibility) == 0x000001, "Member 'CountdownUI_C_UIVisibleSettingChangeDelegate_Event::bInVisibility' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_UIVisibleSettingChangeDelegate_Event, bInInstantly) == 0x000002, "Member 'CountdownUI_C_UIVisibleSettingChangeDelegate_Event::bInInstantly' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct CountdownUI_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_OnAnimationFinished) == 0x000008, "Wrong alignment on CountdownUI_C_OnAnimationFinished");
static_assert(sizeof(CountdownUI_C_OnAnimationFinished) == 0x000008, "Wrong size on CountdownUI_C_OnAnimationFinished");
static_assert(offsetof(CountdownUI_C_OnAnimationFinished, Animation) == 0x000000, "Member 'CountdownUI_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.OnCountdownInteractionDelegate_����
// 0x0001 (0x0001 - 0x0000)
struct CountdownUI_C_OnCountdownInteractionDelegate_____ final
{
public:
	bool                                          bPress;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CountdownUI_C_OnCountdownInteractionDelegate_____) == 0x000001, "Wrong alignment on CountdownUI_C_OnCountdownInteractionDelegate_____");
static_assert(sizeof(CountdownUI_C_OnCountdownInteractionDelegate_____) == 0x000001, "Wrong size on CountdownUI_C_OnCountdownInteractionDelegate_____");
static_assert(offsetof(CountdownUI_C_OnCountdownInteractionDelegate_____, bPress) == 0x000000, "Member 'CountdownUI_C_OnCountdownInteractionDelegate_____::bPress' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.StartNoCountdown_ECountdownType
// 0x0001 (0x0001 - 0x0000)
struct CountdownUI_C_StartNoCountdown_ECountdownType final
{
public:
	ECountdownType                                InCountdownType;                                   // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_StartNoCountdown_ECountdownType) == 0x000001, "Wrong alignment on CountdownUI_C_StartNoCountdown_ECountdownType");
static_assert(sizeof(CountdownUI_C_StartNoCountdown_ECountdownType) == 0x000001, "Wrong size on CountdownUI_C_StartNoCountdown_ECountdownType");
static_assert(offsetof(CountdownUI_C_StartNoCountdown_ECountdownType, InCountdownType) == 0x000000, "Member 'CountdownUI_C_StartNoCountdown_ECountdownType::InCountdownType' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.StartNoCountdown
// 0x0018 (0x0018 - 0x0000)
struct CountdownUI_C_StartNoCountdown final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CountdownUI_C_StartNoCountdown) == 0x000008, "Wrong alignment on CountdownUI_C_StartNoCountdown");
static_assert(sizeof(CountdownUI_C_StartNoCountdown) == 0x000018, "Wrong size on CountdownUI_C_StartNoCountdown");
static_assert(offsetof(CountdownUI_C_StartNoCountdown, InMessage) == 0x000000, "Member 'CountdownUI_C_StartNoCountdown::InMessage' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.StartCountdown_ECountdownType
// 0x0008 (0x0008 - 0x0000)
struct CountdownUI_C_StartCountdown_ECountdownType final
{
public:
	ECountdownType                                InCountdownType;                                   // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56D3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InCountdownTime;                                   // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_StartCountdown_ECountdownType) == 0x000004, "Wrong alignment on CountdownUI_C_StartCountdown_ECountdownType");
static_assert(sizeof(CountdownUI_C_StartCountdown_ECountdownType) == 0x000008, "Wrong size on CountdownUI_C_StartCountdown_ECountdownType");
static_assert(offsetof(CountdownUI_C_StartCountdown_ECountdownType, InCountdownType) == 0x000000, "Member 'CountdownUI_C_StartCountdown_ECountdownType::InCountdownType' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_StartCountdown_ECountdownType, InCountdownTime) == 0x000004, "Member 'CountdownUI_C_StartCountdown_ECountdownType::InCountdownTime' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.Hide
// 0x0001 (0x0001 - 0x0000)
struct CountdownUI_C_Hide final
{
public:
	ECountdownResult                              Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_Hide) == 0x000001, "Wrong alignment on CountdownUI_C_Hide");
static_assert(sizeof(CountdownUI_C_Hide) == 0x000001, "Wrong size on CountdownUI_C_Hide");
static_assert(offsetof(CountdownUI_C_Hide, Result) == 0x000000, "Member 'CountdownUI_C_Hide::Result' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.StartCountdown
// 0x0020 (0x0020 - 0x0000)
struct CountdownUI_C_StartCountdown final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InCountdownTime;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_StartCountdown) == 0x000008, "Wrong alignment on CountdownUI_C_StartCountdown");
static_assert(sizeof(CountdownUI_C_StartCountdown) == 0x000020, "Wrong size on CountdownUI_C_StartCountdown");
static_assert(offsetof(CountdownUI_C_StartCountdown, InMessage) == 0x000000, "Member 'CountdownUI_C_StartCountdown::InMessage' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_StartCountdown, InCountdownTime) == 0x000018, "Member 'CountdownUI_C_StartCountdown::InCountdownTime' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.Tick
// 0x003C (0x003C - 0x0000)
struct CountdownUI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_Tick) == 0x000004, "Wrong alignment on CountdownUI_C_Tick");
static_assert(sizeof(CountdownUI_C_Tick) == 0x00003C, "Wrong size on CountdownUI_C_Tick");
static_assert(offsetof(CountdownUI_C_Tick, MyGeometry) == 0x000000, "Member 'CountdownUI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_Tick, InDeltaTime) == 0x000038, "Member 'CountdownUI_C_Tick::InDeltaTime' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.SetMessageText
// 0x0020 (0x0020 - 0x0000)
struct CountdownUI_C_SetMessageText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsCountdown;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CountdownUI_C_SetMessageText) == 0x000008, "Wrong alignment on CountdownUI_C_SetMessageText");
static_assert(sizeof(CountdownUI_C_SetMessageText) == 0x000020, "Wrong size on CountdownUI_C_SetMessageText");
static_assert(offsetof(CountdownUI_C_SetMessageText, InText) == 0x000000, "Member 'CountdownUI_C_SetMessageText::InText' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageText, IsCountdown) == 0x000018, "Member 'CountdownUI_C_SetMessageText::IsCountdown' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.SetCountdownTimeValueText
// 0x0004 (0x0004 - 0x0000)
struct CountdownUI_C_SetCountdownTimeValueText final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_SetCountdownTimeValueText) == 0x000004, "Wrong alignment on CountdownUI_C_SetCountdownTimeValueText");
static_assert(sizeof(CountdownUI_C_SetCountdownTimeValueText) == 0x000004, "Wrong size on CountdownUI_C_SetCountdownTimeValueText");
static_assert(offsetof(CountdownUI_C_SetCountdownTimeValueText, InValue) == 0x000000, "Member 'CountdownUI_C_SetCountdownTimeValueText::InValue' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.SetCountdownTime
// 0x000C (0x000C - 0x0000)
struct CountdownUI_C_SetCountdownTime final
{
public:
	int32                                         InTime;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_SetCountdownTime) == 0x000004, "Wrong alignment on CountdownUI_C_SetCountdownTime");
static_assert(sizeof(CountdownUI_C_SetCountdownTime) == 0x00000C, "Wrong size on CountdownUI_C_SetCountdownTime");
static_assert(offsetof(CountdownUI_C_SetCountdownTime, InTime) == 0x000000, "Member 'CountdownUI_C_SetCountdownTime::InTime' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetCountdownTime, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'CountdownUI_C_SetCountdownTime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetCountdownTime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'CountdownUI_C_SetCountdownTime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.SetMessageTextId
// 0x0168 (0x0168 - 0x0000)
struct CountdownUI_C_SetMessageTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCountdown;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TmpMessageText;                                    // 0x0008(0x0018)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D7[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D8[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00C0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00D8(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D9[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DA[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
};
static_assert(alignof(CountdownUI_C_SetMessageTextId) == 0x000008, "Wrong alignment on CountdownUI_C_SetMessageTextId");
static_assert(sizeof(CountdownUI_C_SetMessageTextId) == 0x000168, "Wrong size on CountdownUI_C_SetMessageTextId");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, InTextID) == 0x000000, "Member 'CountdownUI_C_SetMessageTextId::InTextID' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, IsCountdown) == 0x000004, "Member 'CountdownUI_C_SetMessageTextId::IsCountdown' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, TmpMessageText) == 0x000008, "Member 'CountdownUI_C_SetMessageTextId::TmpMessageText' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000020, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_FindSubstring_ReturnValue) == 0x000078, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00007C, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GetConfigSaveManager_IsValid) == 0x00007D, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000080, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GetOperateMode_ReturnValue) == 0x000088, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_SelectInt_ReturnValue) == 0x00008C, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000090, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, K2Node_MakeArray_Array) == 0x0000A0, "Member 'CountdownUI_C_SetMessageTextId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_JoinStringArray_ReturnValue) == 0x0000B0, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000C0, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_MakeLiteralText_ReturnValue) == 0x0000D8, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_TextIsEmpty_ReturnValue) == 0x0000F0, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, K2Node_MakeStruct_FormatArgumentData) == 0x0000F8, "Member 'CountdownUI_C_SetMessageTextId::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_Not_PreBool_ReturnValue) == 0x000138, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, K2Node_MakeArray_Array_1) == 0x000140, "Member 'CountdownUI_C_SetMessageTextId::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetMessageTextId, CallFunc_Format_ReturnValue) == 0x000150, "Member 'CountdownUI_C_SetMessageTextId::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.IsChatModeActive
// 0x0040 (0x0040 - 0x0000)
struct CountdownUI_C_IsChatModeActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpActiveFlag;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DB[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChatWindowActive_Active;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CountdownUI_C_IsChatModeActive) == 0x000008, "Wrong alignment on CountdownUI_C_IsChatModeActive");
static_assert(sizeof(CountdownUI_C_IsChatModeActive) == 0x000040, "Wrong size on CountdownUI_C_IsChatModeActive");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, IsActive) == 0x000000, "Member 'CountdownUI_C_IsChatModeActive::IsActive' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, TmpActiveFlag) == 0x000001, "Member 'CountdownUI_C_IsChatModeActive::TmpActiveFlag' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'CountdownUI_C_IsChatModeActive::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'CountdownUI_C_IsChatModeActive::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CountdownUI_C_IsChatModeActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, CallFunc_GetHUD_ReturnValue) == 0x000020, "Member 'CountdownUI_C_IsChatModeActive::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000028, "Member 'CountdownUI_C_IsChatModeActive::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CountdownUI_C_IsChatModeActive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_IsChatModeActive, CallFunc_IsChatWindowActive_Active) == 0x000039, "Member 'CountdownUI_C_IsChatModeActive::CallFunc_IsChatWindowActive_Active' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.UpdateInteractionGauge
// 0x0010 (0x0010 - 0x0000)
struct CountdownUI_C_UpdateInteractionGauge final
{
public:
	float                                         TmpGaugeValue;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DD[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_UpdateInteractionGauge) == 0x000004, "Wrong alignment on CountdownUI_C_UpdateInteractionGauge");
static_assert(sizeof(CountdownUI_C_UpdateInteractionGauge) == 0x000010, "Wrong size on CountdownUI_C_UpdateInteractionGauge");
static_assert(offsetof(CountdownUI_C_UpdateInteractionGauge, TmpGaugeValue) == 0x000000, "Member 'CountdownUI_C_UpdateInteractionGauge::TmpGaugeValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_UpdateInteractionGauge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CountdownUI_C_UpdateInteractionGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_UpdateInteractionGauge, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'CountdownUI_C_UpdateInteractionGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_UpdateInteractionGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'CountdownUI_C_UpdateInteractionGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_UpdateInteractionGauge, CallFunc_FClamp_ReturnValue) == 0x00000C, "Member 'CountdownUI_C_UpdateInteractionGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.SetBlockInputForCountdownUI
// 0x0002 (0x0002 - 0x0000)
struct CountdownUI_C_SetBlockInputForCountdownUI final
{
public:
	bool                                          InBlockInput;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpShortcutInputActiveFlag;                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CountdownUI_C_SetBlockInputForCountdownUI) == 0x000001, "Wrong alignment on CountdownUI_C_SetBlockInputForCountdownUI");
static_assert(sizeof(CountdownUI_C_SetBlockInputForCountdownUI) == 0x000002, "Wrong size on CountdownUI_C_SetBlockInputForCountdownUI");
static_assert(offsetof(CountdownUI_C_SetBlockInputForCountdownUI, InBlockInput) == 0x000000, "Member 'CountdownUI_C_SetBlockInputForCountdownUI::InBlockInput' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetBlockInputForCountdownUI, TmpShortcutInputActiveFlag) == 0x000001, "Member 'CountdownUI_C_SetBlockInputForCountdownUI::TmpShortcutInputActiveFlag' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.CheckCountCancel
// 0x0030 (0x0030 - 0x0000)
struct CountdownUI_C_CheckCountCancel final
{
public:
	bool                                          NotCancel;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DF[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDungeonClearConditionWatcher*        CallFunc_GetClearConditionWatcher_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCompleted_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CountdownUI_C_CheckCountCancel) == 0x000008, "Wrong alignment on CountdownUI_C_CheckCountCancel");
static_assert(sizeof(CountdownUI_C_CheckCountCancel) == 0x000030, "Wrong size on CountdownUI_C_CheckCountCancel");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, NotCancel) == 0x000000, "Member 'CountdownUI_C_CheckCountCancel::NotCancel' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'CountdownUI_C_CheckCountCancel::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000010, "Member 'CountdownUI_C_CheckCountCancel::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CountdownUI_C_CheckCountCancel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, CallFunc_IsDemoPlaying_ReturnValue) == 0x000019, "Member 'CountdownUI_C_CheckCountCancel::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, CallFunc_GetClearConditionWatcher_ReturnValue) == 0x000020, "Member 'CountdownUI_C_CheckCountCancel::CallFunc_GetClearConditionWatcher_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, CallFunc_IsCompleted_ReturnValue) == 0x000028, "Member 'CountdownUI_C_CheckCountCancel::CallFunc_IsCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_CheckCountCancel, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'CountdownUI_C_CheckCountCancel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CountdownUI.CountdownUI_C.SetYPosition
// 0x0018 (0x0018 - 0x0000)
struct CountdownUI_C_SetYPosition final
{
public:
	float                                         Y;                                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56E0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CountdownUI_C_SetYPosition) == 0x000008, "Wrong alignment on CountdownUI_C_SetYPosition");
static_assert(sizeof(CountdownUI_C_SetYPosition) == 0x000018, "Wrong size on CountdownUI_C_SetYPosition");
static_assert(offsetof(CountdownUI_C_SetYPosition, Y) == 0x000000, "Member 'CountdownUI_C_SetYPosition::Y' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetYPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'CountdownUI_C_SetYPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CountdownUI_C_SetYPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'CountdownUI_C_SetYPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

