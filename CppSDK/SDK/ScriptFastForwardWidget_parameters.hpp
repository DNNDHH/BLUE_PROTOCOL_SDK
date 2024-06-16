#pragma once

 

// Package: ScriptFastForwardWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.ExecuteUbergraph_ScriptFastForwardWidget
// 0x00F0 (0x00F0 - 0x0000)
struct ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFastForwardFlag_ReturnValue;           // 0x0041(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInfoEnable_RetFlag;                     // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_792D[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_792E[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyShortText_ReturnValue;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0080(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_792F[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget) == 0x000008, "Wrong alignment on ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget");
static_assert(sizeof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget) == 0x0000F0, "Wrong size on ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, EntryPoint) == 0x000000, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, K2Node_Event_MyGeometry) == 0x000004, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_GetFastForwardFlag_ReturnValue) == 0x000041, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_GetFastForwardFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000042, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_IsInfoEnable_RetFlag) == 0x000043, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_IsInfoEnable_RetFlag' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, Temp_byte_Variable) == 0x000044, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_GetConfigSaveManager_IsValid) == 0x000045, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000048, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, Temp_byte_Variable_1) == 0x000050, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_GetOperateMode_ReturnValue) == 0x000051, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000052, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_GetKeyShortText_ReturnValue) == 0x000058, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_GetKeyShortText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000080, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000098, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A8, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, Temp_bool_Variable) == 0x0000B8, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget, K2Node_Select_Default) == 0x0000E8, "Member 'ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget::K2Node_Select_Default' has a wrong offset!");

// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct ScriptFastForwardWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScriptFastForwardWidget_C_Tick) == 0x000004, "Wrong alignment on ScriptFastForwardWidget_C_Tick");
static_assert(sizeof(ScriptFastForwardWidget_C_Tick) == 0x00003C, "Wrong size on ScriptFastForwardWidget_C_Tick");
static_assert(offsetof(ScriptFastForwardWidget_C_Tick, MyGeometry) == 0x000000, "Member 'ScriptFastForwardWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'ScriptFastForwardWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.SetFastForwardStatus
// 0x00A0 (0x00A0 - 0x0000)
struct ScriptFastForwardWidget_C_SetFastForwardStatus final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7930[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFastForwardFlag_ReturnValue;           // 0x0099(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScriptFastForwardWidget_C_SetFastForwardStatus) == 0x000008, "Wrong alignment on ScriptFastForwardWidget_C_SetFastForwardStatus");
static_assert(sizeof(ScriptFastForwardWidget_C_SetFastForwardStatus) == 0x0000A0, "Wrong size on ScriptFastForwardWidget_C_SetFastForwardStatus");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, Temp_bool_Variable) == 0x000000, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, Temp_bool_Variable_1) == 0x000001, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, Temp_object_Variable) == 0x000008, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, Temp_object_Variable_1) == 0x000010, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, K2Node_Select_Default) == 0x000068, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, K2Node_Select_Default_1) == 0x000090, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_SetFastForwardStatus, CallFunc_GetFastForwardFlag_ReturnValue) == 0x000099, "Member 'ScriptFastForwardWidget_C_SetFastForwardStatus::CallFunc_GetFastForwardFlag_ReturnValue' has a wrong offset!");

// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.IsInfoEnable
// 0x0007 (0x0007 - 0x0000)
struct ScriptFastForwardWidget_C_IsInfoEnable final
{
public:
	bool                                          RetFlag;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpEnable;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFastForwardInfoDisplayFlag_ReturnValue; // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScriptFastForwardWidget_C_IsInfoEnable) == 0x000001, "Wrong alignment on ScriptFastForwardWidget_C_IsInfoEnable");
static_assert(sizeof(ScriptFastForwardWidget_C_IsInfoEnable) == 0x000007, "Wrong size on ScriptFastForwardWidget_C_IsInfoEnable");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, RetFlag) == 0x000000, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::RetFlag' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, TmpEnable) == 0x000001, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::TmpEnable' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, CallFunc_IsDemoPlaying_ReturnValue) == 0x000002, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, CallFunc_IsValid_ReturnValue) == 0x000003, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFastForwardWidget_C_IsInfoEnable, CallFunc_GetFastForwardInfoDisplayFlag_ReturnValue) == 0x000006, "Member 'ScriptFastForwardWidget_C_IsInfoEnable::CallFunc_GetFastForwardInfoDisplayFlag_ReturnValue' has a wrong offset!");

}

