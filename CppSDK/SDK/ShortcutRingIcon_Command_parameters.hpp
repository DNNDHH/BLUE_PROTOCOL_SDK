#pragma once

 

// Package: ShortcutRingIcon_Command

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "KeyConfigItemName_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.ExecuteUbergraph_ShortcutRingIcon_Command
// 0x0128 (0x0128 - 0x0000)
struct ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_7229[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue_1;          // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command");
static_assert(sizeof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command) == 0x000128, "Wrong size on ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command");
static_assert(offsetof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command, EntryPoint) == 0x000000, "Member 'ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command, K2Node_Event_MyGeometry) == 0x000004, "Member 'ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command, K2Node_Event_MouseEvent) == 0x0000B0, "Member 'ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command, CallFunc_IsEnableHoverFlag_ReturnValue) == 0x000120, "Member 'ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command::CallFunc_IsEnableHoverFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command, CallFunc_IsEnableHoverFlag_ReturnValue_1) == 0x000121, "Member 'ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command::CallFunc_IsEnableHoverFlag_ReturnValue_1' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct ShortcutRingIcon_Command_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Command_C_OnMouseLeave) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_OnMouseLeave");
static_assert(sizeof(ShortcutRingIcon_Command_C_OnMouseLeave) == 0x000070, "Wrong size on ShortcutRingIcon_Command_C_OnMouseLeave");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ShortcutRingIcon_Command_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ShortcutRingIcon_Command_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Command_C_OnMouseEnter) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_OnMouseEnter");
static_assert(sizeof(ShortcutRingIcon_Command_C_OnMouseEnter) == 0x0000A8, "Wrong size on ShortcutRingIcon_Command_C_OnMouseEnter");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ShortcutRingIcon_Command_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ShortcutRingIcon_Command_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.PlayAnimPressed
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRingIcon_Command_C_PlayAnimPressed final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Command_C_PlayAnimPressed) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_PlayAnimPressed");
static_assert(sizeof(ShortcutRingIcon_Command_C_PlayAnimPressed) == 0x000008, "Wrong size on ShortcutRingIcon_Command_C_PlayAnimPressed");
static_assert(offsetof(ShortcutRingIcon_Command_C_PlayAnimPressed, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Command_C_PlayAnimPressed::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetToolTip
// 0x0030 (0x0030 - 0x0000)
struct ShortcutRingIcon_Command_C_GetToolTip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetViewToolTipText_ReturnValue;           // 0x0008(0x0018)(ConstParm)
	class UCommandIcon_Tooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Command_C_GetToolTip) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_GetToolTip");
static_assert(sizeof(ShortcutRingIcon_Command_C_GetToolTip) == 0x000030, "Wrong size on ShortcutRingIcon_Command_C_GetToolTip");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetToolTip, ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Command_C_GetToolTip::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetToolTip, CallFunc_GetViewToolTipText_ReturnValue) == 0x000008, "Member 'ShortcutRingIcon_Command_C_GetToolTip::CallFunc_GetViewToolTipText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetToolTip, CallFunc_Create_ReturnValue) == 0x000020, "Member 'ShortcutRingIcon_Command_C_GetToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetToolTip, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ShortcutRingIcon_Command_C_GetToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnSetEnableToolTip
// 0x0020 (0x0020 - 0x0000)
struct ShortcutRingIcon_Command_C_OnSetEnableToolTip final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_722A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetToolTip_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandIcon_Tooltip_C*                 K2Node_DynamicCast_AsCommand_Icon_Tooltip;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Command_C_OnSetEnableToolTip) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_OnSetEnableToolTip");
static_assert(sizeof(ShortcutRingIcon_Command_C_OnSetEnableToolTip) == 0x000020, "Wrong size on ShortcutRingIcon_Command_C_OnSetEnableToolTip");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, InEnable) == 0x000000, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::InEnable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, Temp_bool_Variable) == 0x000001, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, Temp_byte_Variable) == 0x000002, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, Temp_byte_Variable_1) == 0x000003, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, CallFunc_GetToolTip_ReturnValue) == 0x000008, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::CallFunc_GetToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, K2Node_DynamicCast_AsCommand_Icon_Tooltip) == 0x000010, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::K2Node_DynamicCast_AsCommand_Icon_Tooltip' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnSetEnableToolTip, K2Node_Select_Default) == 0x000019, "Member 'ShortcutRingIcon_Command_C_OnSetEnableToolTip::K2Node_Select_Default' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnExecuteError
// 0x0028 (0x0028 - 0x0000)
struct ShortcutRingIcon_Command_C_OnExecuteError final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ShortcutRingIcon_Command_C_OnExecuteError) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_OnExecuteError");
static_assert(sizeof(ShortcutRingIcon_Command_C_OnExecuteError) == 0x000028, "Wrong size on ShortcutRingIcon_Command_C_OnExecuteError");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnExecuteError, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Command_C_OnExecuteError::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_OnExecuteError, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Command_C_OnExecuteError::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.CommandIDToKeyconfigItems
// 0x0041 (0x0041 - 0x0000)
struct ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems final
{
public:
	EShortcutIconCommandID                        InId;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        KeyConfigItems;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShortcutIconCommandID                        Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_7;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_8;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_9;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_10;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_11;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_12;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_13;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_14;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_15;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_16;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_17;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_18;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_19;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_20;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_21;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_22;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_23;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_24;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_25;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_26;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_27;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_28;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_29;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_30;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_31;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_32;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_33;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_34;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_35;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_36;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_37;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_38;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_39;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_40;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_41;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_42;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_43;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_44;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_45;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_46;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_47;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_48;                             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_49;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_50;                             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_51;                             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_52;                             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_53;                             // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_54;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_55;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_56;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_57;                             // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_58;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_59;                             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_60;                             // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Temp_byte_Variable_61;                             // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems) == 0x000001, "Wrong alignment on ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems");
static_assert(sizeof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems) == 0x000041, "Wrong size on ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, InId) == 0x000000, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::InId' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, KeyConfigItems) == 0x000001, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::KeyConfigItems' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable) == 0x000002, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_1) == 0x000003, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_2) == 0x000004, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_3) == 0x000005, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_4) == 0x000006, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_5) == 0x000007, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_6) == 0x000008, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_7) == 0x000009, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_8) == 0x00000A, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_9) == 0x00000B, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_10) == 0x00000C, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_11) == 0x00000D, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_12) == 0x00000E, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_13) == 0x00000F, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_14) == 0x000010, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_15) == 0x000011, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_16) == 0x000012, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_17) == 0x000013, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_18) == 0x000014, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_19) == 0x000015, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_20) == 0x000016, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_21) == 0x000017, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_22) == 0x000018, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_23) == 0x000019, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_24) == 0x00001A, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_25) == 0x00001B, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_26) == 0x00001C, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_27) == 0x00001D, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_28) == 0x00001E, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_29) == 0x00001F, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_30) == 0x000020, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_31) == 0x000021, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_32) == 0x000022, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_32' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_33) == 0x000023, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_33' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_34) == 0x000024, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_34' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_35) == 0x000025, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_35' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_36) == 0x000026, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_36' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_37) == 0x000027, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_37' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_38) == 0x000028, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_38' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_39) == 0x000029, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_39' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_40) == 0x00002A, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_40' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_41) == 0x00002B, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_41' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_42) == 0x00002C, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_42' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_43) == 0x00002D, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_43' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_44) == 0x00002E, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_44' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_45) == 0x00002F, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_45' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_46) == 0x000030, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_46' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_47) == 0x000031, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_47' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_48) == 0x000032, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_48' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_49) == 0x000033, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_49' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_50) == 0x000034, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_50' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_51) == 0x000035, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_51' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_52) == 0x000036, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_52' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_53) == 0x000037, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_53' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_54) == 0x000038, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_54' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_55) == 0x000039, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_55' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_56) == 0x00003A, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_56' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_57) == 0x00003B, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_57' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_58) == 0x00003C, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_58' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_59) == 0x00003D, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_59' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_60) == 0x00003E, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_60' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, Temp_byte_Variable_61) == 0x00003F, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::Temp_byte_Variable_61' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems, K2Node_Select_Default) == 0x000040, "Member 'ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems::K2Node_Select_Default' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsTextID
// 0x0048 (0x0048 - 0x0000)
struct ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID final
{
public:
	EConfig_KeyconfigItems                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_722B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_722C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_722D[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyConfigItemName                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID");
static_assert(sizeof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID) == 0x000048, "Wrong size on ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, Type) == 0x000000, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::Type' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, TextId) == 0x000004, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::TextId' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_Array_Get_Item) == 0x00002C, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsStr
// 0x0038 (0x0038 - 0x0000)
struct ShortcutRingIcon_Command_C_GetKeyconfigItemsStr final
{
public:
	EShortcutIconCommandID                        CommandID;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_722E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutString;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	EConfig_KeyconfigItems                        CallFunc_CommandIDToKeyconfigItems_KeyConfigItems; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_722F[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetKeyconfigItemsTextID_TextID;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7230[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_GetKeyconfigItemsStr");
static_assert(sizeof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr) == 0x000038, "Wrong size on ShortcutRingIcon_Command_C_GetKeyconfigItemsStr");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, CommandID) == 0x000000, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::CommandID' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, OutString) == 0x000008, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::OutString' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, ReturnValue) == 0x000018, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, CallFunc_CommandIDToKeyconfigItems_KeyConfigItems) == 0x000019, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::CallFunc_CommandIDToKeyconfigItems_KeyConfigItems' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, CallFunc_GetKeyconfigItemsTextID_TextID) == 0x00001C, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::CallFunc_GetKeyconfigItemsTextID_TextID' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetKeyconfigItemsStr, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'ShortcutRingIcon_Command_C_GetKeyconfigItemsStr::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldStr
// 0x0050 (0x0050 - 0x0000)
struct ShortcutRingIcon_Command_C_GetBookmarkFieldStr final
{
public:
	EShortcutIconCommandID                        CommandID;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7231[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutString;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             CallFunc_CommandIDToBookMarkerSlot_OutBookMarkSlot; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CommandIDToBookMarkerSlot_ReturnValue;    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7232[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7233[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7234[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_GetBookmarkFieldStr");
static_assert(sizeof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr) == 0x000050, "Wrong size on ShortcutRingIcon_Command_C_GetBookmarkFieldStr");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CommandID) == 0x000000, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CommandID' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, OutString) == 0x000008, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::OutString' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, ReturnValue) == 0x000018, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_CommandIDToBookMarkerSlot_OutBookMarkSlot) == 0x000019, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_CommandIDToBookMarkerSlot_OutBookMarkSlot' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_CommandIDToBookMarkerSlot_ReturnValue) == 0x00001A, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_CommandIDToBookMarkerSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_GetBookMark_ReturnValue) == 0x000020, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_Conv_StringToName_ReturnValue) == 0x000034, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldStr, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldStr::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldAbbrStr
// 0x0050 (0x0050 - 0x0000)
struct ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr final
{
public:
	EShortcutIconCommandID                        CommandID;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7235[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutString;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             CallFunc_CommandIDToBookMarkerSlot_OutBookMarkSlot; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CommandIDToBookMarkerSlot_ReturnValue;    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7236[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7237[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7238[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr) == 0x000008, "Wrong alignment on ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr");
static_assert(sizeof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr) == 0x000050, "Wrong size on ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CommandID) == 0x000000, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CommandID' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, OutString) == 0x000008, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::OutString' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, ReturnValue) == 0x000018, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_CommandIDToBookMarkerSlot_OutBookMarkSlot) == 0x000019, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_CommandIDToBookMarkerSlot_OutBookMarkSlot' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_CommandIDToBookMarkerSlot_ReturnValue) == 0x00001A, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_CommandIDToBookMarkerSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_GetBookMark_ReturnValue) == 0x000020, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_Conv_StringToName_ReturnValue) == 0x000034, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

}

