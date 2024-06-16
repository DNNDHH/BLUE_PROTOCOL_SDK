#pragma once

 

// Package: TargetCursor

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TargetCursor.TargetCursor_C.ExecuteUbergraph_TargetCursor
// 0x0038 (0x0038 - 0x0000)
struct TargetCursor_C_ExecuteUbergraph_TargetCursor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4507[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4508[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TargetCursor_C_ExecuteUbergraph_TargetCursor) == 0x000008, "Wrong alignment on TargetCursor_C_ExecuteUbergraph_TargetCursor");
static_assert(sizeof(TargetCursor_C_ExecuteUbergraph_TargetCursor) == 0x000038, "Wrong size on TargetCursor_C_ExecuteUbergraph_TargetCursor");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, EntryPoint) == 0x000000, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::EntryPoint' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, Temp_bool_Variable) == 0x000004, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, Temp_byte_Variable) == 0x000005, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, Temp_byte_Variable_1) == 0x000006, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, Temp_bool_Variable_1) == 0x000007, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, Temp_byte_Variable_2) == 0x000018, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, Temp_byte_Variable_3) == 0x000019, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x00001A, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, K2Node_CustomEvent_InUIType) == 0x000028, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, K2Node_CustomEvent_bInVisibility) == 0x000029, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, K2Node_CustomEvent_bInInstantly) == 0x00002A, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, K2Node_Select_Default) == 0x00002B, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, K2Node_Select_Default_1) == 0x00002D, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002E, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ExecuteUbergraph_TargetCursor, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000030, "Member 'TargetCursor_C_ExecuteUbergraph_TargetCursor::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");

// Function TargetCursor.TargetCursor_C.VisibleSettingChangeDelegate
// 0x0003 (0x0003 - 0x0000)
struct TargetCursor_C_VisibleSettingChangeDelegate final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TargetCursor_C_VisibleSettingChangeDelegate) == 0x000001, "Wrong alignment on TargetCursor_C_VisibleSettingChangeDelegate");
static_assert(sizeof(TargetCursor_C_VisibleSettingChangeDelegate) == 0x000003, "Wrong size on TargetCursor_C_VisibleSettingChangeDelegate");
static_assert(offsetof(TargetCursor_C_VisibleSettingChangeDelegate, InUIType) == 0x000000, "Member 'TargetCursor_C_VisibleSettingChangeDelegate::InUIType' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_VisibleSettingChangeDelegate, bInVisibility) == 0x000001, "Member 'TargetCursor_C_VisibleSettingChangeDelegate::bInVisibility' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_VisibleSettingChangeDelegate, bInInstantly) == 0x000002, "Member 'TargetCursor_C_VisibleSettingChangeDelegate::bInInstantly' has a wrong offset!");

// Function TargetCursor.TargetCursor_C.UpdatePosition
// 0x0058 (0x0058 - 0x0000)
struct TargetCursor_C_UpdatePosition final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4509[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_450A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_450B[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_450C[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TargetCursor_C_UpdatePosition) == 0x000008, "Wrong alignment on TargetCursor_C_UpdatePosition");
static_assert(sizeof(TargetCursor_C_UpdatePosition) == 0x000058, "Wrong size on TargetCursor_C_UpdatePosition");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'TargetCursor_C_UpdatePosition::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'TargetCursor_C_UpdatePosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_GetViewportScale_ReturnValue) == 0x000018, "Member 'TargetCursor_C_UpdatePosition::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_GetSize_ReturnValue) == 0x00001C, "Member 'TargetCursor_C_UpdatePosition::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'TargetCursor_C_UpdatePosition::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000030, "Member 'TargetCursor_C_UpdatePosition::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'TargetCursor_C_UpdatePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x00003C, "Member 'TargetCursor_C_UpdatePosition::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000044, "Member 'TargetCursor_C_UpdatePosition::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000048, "Member 'TargetCursor_C_UpdatePosition::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_UpdatePosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000050, "Member 'TargetCursor_C_UpdatePosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function TargetCursor.TargetCursor_C.isTargetNear
// 0x0034 (0x0034 - 0x0000)
struct TargetCursor_C_IsTargetNear final
{
public:
	bool                                          OutIsNear;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_450D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNearRange_OutIsRange;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TargetCursor_C_IsTargetNear) == 0x000004, "Wrong alignment on TargetCursor_C_IsTargetNear");
static_assert(sizeof(TargetCursor_C_IsTargetNear) == 0x000034, "Wrong size on TargetCursor_C_IsTargetNear");
static_assert(offsetof(TargetCursor_C_IsTargetNear, OutIsNear) == 0x000000, "Member 'TargetCursor_C_IsTargetNear::OutIsNear' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetNear, CallFunc_GetNearRange_OutIsRange) == 0x000004, "Member 'TargetCursor_C_IsTargetNear::CallFunc_GetNearRange_OutIsRange' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetNear, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'TargetCursor_C_IsTargetNear::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetNear, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000014, "Member 'TargetCursor_C_IsTargetNear::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetNear, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000020, "Member 'TargetCursor_C_IsTargetNear::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetNear, CallFunc_VSize_ReturnValue) == 0x00002C, "Member 'TargetCursor_C_IsTargetNear::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetNear, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'TargetCursor_C_IsTargetNear::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function TargetCursor.TargetCursor_C.ColorChange
// 0x0003 (0x0003 - 0x0000)
struct TargetCursor_C_ColorChange final
{
public:
	bool                                          CallFunc_isTargetInvincible_OutIsInvincible;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isTargetNear_OutIsNear;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TargetCursor_C_ColorChange) == 0x000001, "Wrong alignment on TargetCursor_C_ColorChange");
static_assert(sizeof(TargetCursor_C_ColorChange) == 0x000003, "Wrong size on TargetCursor_C_ColorChange");
static_assert(offsetof(TargetCursor_C_ColorChange, CallFunc_isTargetInvincible_OutIsInvincible) == 0x000000, "Member 'TargetCursor_C_ColorChange::CallFunc_isTargetInvincible_OutIsInvincible' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ColorChange, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'TargetCursor_C_ColorChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_ColorChange, CallFunc_isTargetNear_OutIsNear) == 0x000002, "Member 'TargetCursor_C_ColorChange::CallFunc_isTargetNear_OutIsNear' has a wrong offset!");

// Function TargetCursor.TargetCursor_C.GetNearRange
// 0x0008 (0x0008 - 0x0000)
struct TargetCursor_C_GetNearRange final
{
public:
	float                                         OutIsRange;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_getTargetMarkerNearRange_ReturnValue;     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TargetCursor_C_GetNearRange) == 0x000004, "Wrong alignment on TargetCursor_C_GetNearRange");
static_assert(sizeof(TargetCursor_C_GetNearRange) == 0x000008, "Wrong size on TargetCursor_C_GetNearRange");
static_assert(offsetof(TargetCursor_C_GetNearRange, OutIsRange) == 0x000000, "Member 'TargetCursor_C_GetNearRange::OutIsRange' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_GetNearRange, CallFunc_getTargetMarkerNearRange_ReturnValue) == 0x000004, "Member 'TargetCursor_C_GetNearRange::CallFunc_getTargetMarkerNearRange_ReturnValue' has a wrong offset!");

// Function TargetCursor.TargetCursor_C.isTargetInvincible
// 0x0020 (0x0020 - 0x0000)
struct TargetCursor_C_IsTargetInvincible final
{
public:
	bool                                          OutIsInvincible;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_450E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetTargetableActor_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInvincibleMode_ReturnValue;             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TargetCursor_C_IsTargetInvincible) == 0x000008, "Wrong alignment on TargetCursor_C_IsTargetInvincible");
static_assert(sizeof(TargetCursor_C_IsTargetInvincible) == 0x000020, "Wrong size on TargetCursor_C_IsTargetInvincible");
static_assert(offsetof(TargetCursor_C_IsTargetInvincible, OutIsInvincible) == 0x000000, "Member 'TargetCursor_C_IsTargetInvincible::OutIsInvincible' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetInvincible, CallFunc_GetTargetableActor_ReturnValue) == 0x000008, "Member 'TargetCursor_C_IsTargetInvincible::CallFunc_GetTargetableActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetInvincible, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000010, "Member 'TargetCursor_C_IsTargetInvincible::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetInvincible, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TargetCursor_C_IsTargetInvincible::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetInvincible, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'TargetCursor_C_IsTargetInvincible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TargetCursor_C_IsTargetInvincible, CallFunc_IsInvincibleMode_ReturnValue) == 0x00001A, "Member 'TargetCursor_C_IsTargetInvincible::CallFunc_IsInvincibleMode_ReturnValue' has a wrong offset!");

}

