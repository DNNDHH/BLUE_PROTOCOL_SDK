#pragma once

 

// Package: OnMoveableBuffIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.ExecuteUbergraph_OnMoveableBuffIcon
// 0x0058 (0x0058 - 0x0000)
struct OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APawn* InPawn)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetActiveCountList_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D01[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_CustomEvent_InPawn;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D02[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon) == 0x000008, "Wrong alignment on OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon");
static_assert(sizeof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon) == 0x000058, "Wrong size on OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, EntryPoint) == 0x000000, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, CallFunc_GetActiveCountList_ReturnValue) == 0x000014, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::CallFunc_GetActiveCountList_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, K2Node_CustomEvent_InPawn) == 0x000020, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::K2Node_CustomEvent_InPawn' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000038, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000048, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.OnChangePlayerCharacterDelegate
// 0x0008 (0x0008 - 0x0000)
struct OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate final
{
public:
	class APawn*                                  InPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate) == 0x000008, "Wrong alignment on OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate");
static_assert(sizeof(OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate) == 0x000008, "Wrong size on OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate");
static_assert(offsetof(OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate, InPawn) == 0x000000, "Member 'OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate::InPawn' has a wrong offset!");

// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.SetupBuffIcon
// 0x0038 (0x0038 - 0x0000)
struct OnMoveableBuffIcon_C_SetupBuffIcon final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D03[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D04[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleStatusInterface> CallFunc_GetBattleStatusComponent_self_CastInput;  // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnMoveableBuffIcon_C_SetupBuffIcon) == 0x000008, "Wrong alignment on OnMoveableBuffIcon_C_SetupBuffIcon");
static_assert(sizeof(OnMoveableBuffIcon_C_SetupBuffIcon) == 0x000038, "Wrong size on OnMoveableBuffIcon_C_SetupBuffIcon");
static_assert(offsetof(OnMoveableBuffIcon_C_SetupBuffIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'OnMoveableBuffIcon_C_SetupBuffIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetupBuffIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'OnMoveableBuffIcon_C_SetupBuffIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetupBuffIcon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'OnMoveableBuffIcon_C_SetupBuffIcon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetupBuffIcon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'OnMoveableBuffIcon_C_SetupBuffIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetupBuffIcon, CallFunc_GetBattleStatusComponent_self_CastInput) == 0x000020, "Member 'OnMoveableBuffIcon_C_SetupBuffIcon::CallFunc_GetBattleStatusComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetupBuffIcon, CallFunc_GetBattleStatusComponent_ReturnValue) == 0x000030, "Member 'OnMoveableBuffIcon_C_SetupBuffIcon::CallFunc_GetBattleStatusComponent_ReturnValue' has a wrong offset!");

// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.SetEditMode
// 0x0005 (0x0005 - 0x0000)
struct OnMoveableBuffIcon_C_SetEditMode final
{
public:
	bool                                          EditMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnMoveableBuffIcon_C_SetEditMode) == 0x000001, "Wrong alignment on OnMoveableBuffIcon_C_SetEditMode");
static_assert(sizeof(OnMoveableBuffIcon_C_SetEditMode) == 0x000005, "Wrong size on OnMoveableBuffIcon_C_SetEditMode");
static_assert(offsetof(OnMoveableBuffIcon_C_SetEditMode, EditMode) == 0x000000, "Member 'OnMoveableBuffIcon_C_SetEditMode::EditMode' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetEditMode, Temp_bool_Variable) == 0x000001, "Member 'OnMoveableBuffIcon_C_SetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetEditMode, Temp_byte_Variable) == 0x000002, "Member 'OnMoveableBuffIcon_C_SetEditMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetEditMode, Temp_byte_Variable_1) == 0x000003, "Member 'OnMoveableBuffIcon_C_SetEditMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetEditMode, K2Node_Select_Default) == 0x000004, "Member 'OnMoveableBuffIcon_C_SetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.SetVisibleLine
// 0x0005 (0x0005 - 0x0000)
struct OnMoveableBuffIcon_C_SetVisibleLine final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnMoveableBuffIcon_C_SetVisibleLine) == 0x000001, "Wrong alignment on OnMoveableBuffIcon_C_SetVisibleLine");
static_assert(sizeof(OnMoveableBuffIcon_C_SetVisibleLine) == 0x000005, "Wrong size on OnMoveableBuffIcon_C_SetVisibleLine");
static_assert(offsetof(OnMoveableBuffIcon_C_SetVisibleLine, Param_IsVisible) == 0x000000, "Member 'OnMoveableBuffIcon_C_SetVisibleLine::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetVisibleLine, Temp_bool_Variable) == 0x000001, "Member 'OnMoveableBuffIcon_C_SetVisibleLine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetVisibleLine, Temp_byte_Variable) == 0x000002, "Member 'OnMoveableBuffIcon_C_SetVisibleLine::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetVisibleLine, Temp_byte_Variable_1) == 0x000003, "Member 'OnMoveableBuffIcon_C_SetVisibleLine::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnMoveableBuffIcon_C_SetVisibleLine, K2Node_Select_Default) == 0x000004, "Member 'OnMoveableBuffIcon_C_SetVisibleLine::K2Node_Select_Default' has a wrong offset!");

}

