#pragma once

 

// Package: P020HUD

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function P020HUD.P020HUD_C.GetAttackUpRank
// 0x0050 (0x0050 - 0x0000)
struct P020HUD_C_GetAttackUpRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72AD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          PlayerSkillActionComponent;                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AttackUpRank;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72AE[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          CallFunc_Array_Get_Item;                           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72AF[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAttackUpRank_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P020HUD_C_GetAttackUpRank) == 0x000008, "Wrong alignment on P020HUD_C_GetAttackUpRank");
static_assert(sizeof(P020HUD_C_GetAttackUpRank) == 0x000050, "Wrong size on P020HUD_C_GetAttackUpRank");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, Rank) == 0x000000, "Member 'P020HUD_C_GetAttackUpRank::Rank' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, PlayerSkillActionComponent) == 0x000008, "Member 'P020HUD_C_GetAttackUpRank::PlayerSkillActionComponent' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, AttackUpRank) == 0x000010, "Member 'P020HUD_C_GetAttackUpRank::AttackUpRank' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, Temp_int_Array_Index_Variable) == 0x000014, "Member 'P020HUD_C_GetAttackUpRank::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'P020HUD_C_GetAttackUpRank::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'P020HUD_C_GetAttackUpRank::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'P020HUD_C_GetAttackUpRank::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000038, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_Array_Get_Item) == 0x000044, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_Less_IntInt_ReturnValue) == 0x000045, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_GetAttackUpRank_ReturnValue) == 0x000048, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_GetAttackUpRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_GetAttackUpRank, CallFunc_Less_IntInt_ReturnValue_1) == 0x00004C, "Member 'P020HUD_C_GetAttackUpRank::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function P020HUD.P020HUD_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P020HUD_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P020HUD_C_PlayAnimForwardInOut");
static_assert(sizeof(P020HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P020HUD_C_PlayAnimForwardInOut");
static_assert(offsetof(P020HUD_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P020HUD_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P020HUD.P020HUD_C.PlayAnimReverseInOut
// 0x0020 (0x0020 - 0x0000)
struct P020HUD_C_PlayAnimReverseInOut final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBP020_CountIcon_PartsWidget*          CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAttackUpRank_Rank;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P020HUD_C_PlayAnimReverseInOut");
static_assert(sizeof(P020HUD_C_PlayAnimReverseInOut) == 0x000020, "Wrong size on P020HUD_C_PlayAnimReverseInOut");
static_assert(offsetof(P020HUD_C_PlayAnimReverseInOut, Temp_int_Variable) == 0x000000, "Member 'P020HUD_C_PlayAnimReverseInOut::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P020HUD_C_PlayAnimReverseInOut, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'P020HUD_C_PlayAnimReverseInOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_PlayAnimReverseInOut, CallFunc_Array_Get_Item) == 0x000008, "Member 'P020HUD_C_PlayAnimReverseInOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(P020HUD_C_PlayAnimReverseInOut, CallFunc_GetAttackUpRank_Rank) == 0x000010, "Member 'P020HUD_C_PlayAnimReverseInOut::CallFunc_GetAttackUpRank_Rank' has a wrong offset!");
static_assert(offsetof(P020HUD_C_PlayAnimReverseInOut, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'P020HUD_C_PlayAnimReverseInOut::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'P020HUD_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P020HUD.P020HUD_C.OnInitialize
// 0x0010 (0x0010 - 0x0000)
struct P020HUD_C_OnInitialize final
{
public:
	TArray<class USBP020_CountIcon_PartsWidget*>  K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(P020HUD_C_OnInitialize) == 0x000008, "Wrong alignment on P020HUD_C_OnInitialize");
static_assert(sizeof(P020HUD_C_OnInitialize) == 0x000010, "Wrong size on P020HUD_C_OnInitialize");
static_assert(offsetof(P020HUD_C_OnInitialize, K2Node_MakeArray_Array) == 0x000000, "Member 'P020HUD_C_OnInitialize::K2Node_MakeArray_Array' has a wrong offset!");

// Function P020HUD.P020HUD_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P020HUD_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B1[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020HUD_C_OnSetEditMode) == 0x000004, "Wrong alignment on P020HUD_C_OnSetEditMode");
static_assert(sizeof(P020HUD_C_OnSetEditMode) == 0x000010, "Wrong size on P020HUD_C_OnSetEditMode");
static_assert(offsetof(P020HUD_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P020HUD_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P020HUD_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P020HUD_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P020HUD_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P020HUD_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P020HUD.P020HUD_C.OnChangeVisibleSetting
// 0x0005 (0x0005 - 0x0000)
struct P020HUD_C_OnChangeVisibleSetting final
{
public:
	bool                                          InIsVisibleSetting;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020HUD_C_OnChangeVisibleSetting) == 0x000001, "Wrong alignment on P020HUD_C_OnChangeVisibleSetting");
static_assert(sizeof(P020HUD_C_OnChangeVisibleSetting) == 0x000005, "Wrong size on P020HUD_C_OnChangeVisibleSetting");
static_assert(offsetof(P020HUD_C_OnChangeVisibleSetting, InIsVisibleSetting) == 0x000000, "Member 'P020HUD_C_OnChangeVisibleSetting::InIsVisibleSetting' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnChangeVisibleSetting, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'P020HUD_C_OnChangeVisibleSetting::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnChangeVisibleSetting, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'P020HUD_C_OnChangeVisibleSetting::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnChangeVisibleSetting, Temp_bool_Variable) == 0x000003, "Member 'P020HUD_C_OnChangeVisibleSetting::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P020HUD_C_OnChangeVisibleSetting, K2Node_Select_Default) == 0x000004, "Member 'P020HUD_C_OnChangeVisibleSetting::K2Node_Select_Default' has a wrong offset!");

}

