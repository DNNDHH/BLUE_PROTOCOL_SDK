#pragma once

 

// Package: P019HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ECartridgeType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function P019HUD.P019HUD_C.ExecuteUbergraph_P019HUD
// 0x00D0 (0x00D0 - 0x0000)
struct P019HUD_C_ExecuteUbergraph_P019HUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72BA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBPCSmasherComponent*            CallFunc_GetClassComponentAsSmasher_ReturnValue;   // 0x0018(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHealBulletActive_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPowerReloadActive_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72BB[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72BC[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72BD[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0054(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72BE[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentBoostCartridge_ReturnValue;     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72BF[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72C0[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72C1[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C2[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerArtsComponent*                 CallFunc_GetPlayerArtsComponent_ReturnValue_1;     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72C3[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72C4[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P019HUD_C_ExecuteUbergraph_P019HUD) == 0x000008, "Wrong alignment on P019HUD_C_ExecuteUbergraph_P019HUD");
static_assert(sizeof(P019HUD_C_ExecuteUbergraph_P019HUD) == 0x0000D0, "Wrong size on P019HUD_C_ExecuteUbergraph_P019HUD");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, EntryPoint) == 0x000000, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000010, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetClassComponentAsSmasher_ReturnValue) == 0x000018, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetClassComponentAsSmasher_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsHealBulletActive_ReturnValue) == 0x000020, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsHealBulletActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsPowerReloadActive_ReturnValue) == 0x000021, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsPowerReloadActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x000022, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000034, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, Temp_bool_Variable) == 0x000048, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_Array_LastIndex_ReturnValue) == 0x000050, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_CustomEvent_RetCode) == 0x000054, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetCurrentBoostCartridge_ReturnValue) == 0x00005C, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetCurrentBoostCartridge_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_FTrunc_ReturnValue) == 0x000060, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetSBPlayerController_ReturnValue) == 0x000068, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetPlayerArtsComponent_ReturnValue) == 0x000078, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetPlayerArtsComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000088, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_CustomEvent_InUIType) == 0x000090, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_CustomEvent_bInVisibility) == 0x000091, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_CustomEvent_bInInstantly) == 0x000092, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue_3) == 0x000093, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, K2Node_Select_Default) == 0x000094, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetPlayerArtsComponent_ReturnValue_1) == 0x000098, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetPlayerArtsComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue_4) == 0x0000A0, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, Temp_int_Variable) == 0x0000A4, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000A8, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue_5) == 0x0000B8, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B9, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000BA, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_Add_IntInt_ReturnValue) == 0x0000BC, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0000C0, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_ExecuteUbergraph_P019HUD, CallFunc_IsValid_ReturnValue_6) == 0x0000C8, "Member 'P019HUD_C_ExecuteUbergraph_P019HUD::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct P019HUD_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P019HUD_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on P019HUD_C_OnChangeUIVisibleSetting");
static_assert(sizeof(P019HUD_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on P019HUD_C_OnChangeUIVisibleSetting");
static_assert(offsetof(P019HUD_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'P019HUD_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'P019HUD_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'P019HUD_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnSaveEquippedPassiveArtsDelegate
// 0x0004 (0x0004 - 0x0000)
struct P019HUD_C_OnSaveEquippedPassiveArtsDelegate final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_OnSaveEquippedPassiveArtsDelegate) == 0x000004, "Wrong alignment on P019HUD_C_OnSaveEquippedPassiveArtsDelegate");
static_assert(sizeof(P019HUD_C_OnSaveEquippedPassiveArtsDelegate) == 0x000004, "Wrong size on P019HUD_C_OnSaveEquippedPassiveArtsDelegate");
static_assert(offsetof(P019HUD_C_OnSaveEquippedPassiveArtsDelegate, RetCode) == 0x000000, "Member 'P019HUD_C_OnSaveEquippedPassiveArtsDelegate::RetCode' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnInitCartridgeList
// 0x0038 (0x0038 - 0x0000)
struct P019HUD_C_OnInitCartridgeList final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C5[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72C6[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_OnInitCartridgeList) == 0x000008, "Wrong alignment on P019HUD_C_OnInitCartridgeList");
static_assert(sizeof(P019HUD_C_OnInitCartridgeList) == 0x000038, "Wrong size on P019HUD_C_OnInitCartridgeList");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, K2Node_MakeStruct_Margin) == 0x000000, "Member 'P019HUD_C_OnInitCartridgeList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, Temp_int_Variable) == 0x000010, "Member 'P019HUD_C_OnInitCartridgeList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, CallFunc_Create_ReturnValue) == 0x000018, "Member 'P019HUD_C_OnInitCartridgeList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'P019HUD_C_OnInitCartridgeList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'P019HUD_C_OnInitCartridgeList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'P019HUD_C_OnInitCartridgeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitCartridgeList, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'P019HUD_C_OnInitCartridgeList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnInitAdditionalCartridgeList
// 0x0038 (0x0038 - 0x0000)
struct P019HUD_C_OnInitAdditionalCartridgeList final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C9[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72CA[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_OnInitAdditionalCartridgeList) == 0x000008, "Wrong alignment on P019HUD_C_OnInitAdditionalCartridgeList");
static_assert(sizeof(P019HUD_C_OnInitAdditionalCartridgeList) == 0x000038, "Wrong size on P019HUD_C_OnInitAdditionalCartridgeList");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, K2Node_MakeStruct_Margin) == 0x000000, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, Temp_int_Variable) == 0x000010, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, CallFunc_Create_ReturnValue) == 0x000018, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitAdditionalCartridgeList, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'P019HUD_C_OnInitAdditionalCartridgeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnUpdateAdditionalCartridge
// 0x0030 (0x0030 - 0x0000)
struct P019HUD_C_OnUpdateAdditionalCartridge final
{
public:
	ECartridgeType                                BulletType;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72CB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VisibleCount;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHealBulletActive_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPowerReloadActive_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72CC[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72CD[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P019HUD_C_OnUpdateAdditionalCartridge) == 0x000008, "Wrong alignment on P019HUD_C_OnUpdateAdditionalCartridge");
static_assert(sizeof(P019HUD_C_OnUpdateAdditionalCartridge) == 0x000030, "Wrong size on P019HUD_C_OnUpdateAdditionalCartridge");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, BulletType) == 0x000000, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::BulletType' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, VisibleCount) == 0x000004, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::VisibleCount' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_IsHealBulletActive_ReturnValue) == 0x000009, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_IsHealBulletActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_IsPowerReloadActive_ReturnValue) == 0x00000A, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_IsPowerReloadActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, Temp_int_Variable) == 0x000010, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_Array_Get_Item) == 0x000018, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_Array_LastIndex_ReturnValue) == 0x000024, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnUpdateAdditionalCartridge, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'P019HUD_C_OnUpdateAdditionalCartridge::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnSetMaxCartridge
// 0x0070 (0x0070 - 0x0000)
struct P019HUD_C_OnSetMaxCartridge final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72CE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72CF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBPCSmasherComponent*            CallFunc_GetClassComponentAsSmasher_ReturnValue;   // 0x0028(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHealBulletActive_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPowerReloadActive_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D0[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D2[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentBoostCartridge_ReturnValue;     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxBoostCartridge_ReturnValue;         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D3[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_OnSetMaxCartridge) == 0x000008, "Wrong alignment on P019HUD_C_OnSetMaxCartridge");
static_assert(sizeof(P019HUD_C_OnSetMaxCartridge) == 0x000070, "Wrong size on P019HUD_C_OnSetMaxCartridge");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, Temp_int_Variable) == 0x000000, "Member 'P019HUD_C_OnSetMaxCartridge::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000004, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Array_LastIndex_ReturnValue) == 0x00000C, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000018, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000020, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_GetClassComponentAsSmasher_ReturnValue) == 0x000028, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_GetClassComponentAsSmasher_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_IsHealBulletActive_ReturnValue) == 0x000030, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_IsHealBulletActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_IsPowerReloadActive_ReturnValue) == 0x000031, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_IsPowerReloadActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, Temp_int_Variable_1) == 0x000034, "Member 'P019HUD_C_OnSetMaxCartridge::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Array_Get_Item) == 0x000040, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000049, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_GetCurrentBoostCartridge_ReturnValue) == 0x000050, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_GetCurrentBoostCartridge_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_GetMaxBoostCartridge_ReturnValue) == 0x000054, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_GetMaxBoostCartridge_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_FTrunc_ReturnValue) == 0x000058, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_FTrunc_ReturnValue_1) == 0x00005C, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Less_IntInt_ReturnValue_1) == 0x000061, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_FTrunc_ReturnValue_2) == 0x000064, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetMaxCartridge, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'P019HUD_C_OnSetMaxCartridge::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function P019HUD.P019HUD_C.DebugPrintFunc
// 0x0190 (0x0190 - 0x0000)
struct P019HUD_C_DebugPrintFunc final
{
public:
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBPCSmasherComponent*            CallFunc_GetClassComponentAsSmasher_ReturnValue;   // 0x0010(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPowerReloadActive_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D4[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxBoostCartridge_ReturnValue;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0040)(HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentBoostCartridge_ReturnValue;     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHealBulletActive_ReturnValue;           // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D5[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0118(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0158(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0168(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_DebugPrintFunc) == 0x000008, "Wrong alignment on P019HUD_C_DebugPrintFunc");
static_assert(sizeof(P019HUD_C_DebugPrintFunc) == 0x000190, "Wrong size on P019HUD_C_DebugPrintFunc");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000000, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000008, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_GetClassComponentAsSmasher_ReturnValue) == 0x000010, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_GetClassComponentAsSmasher_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_IsPowerReloadActive_ReturnValue) == 0x000018, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_IsPowerReloadActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_GetMaxBoostCartridge_ReturnValue) == 0x00001C, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_GetMaxBoostCartridge_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_Conv_BoolToText_ReturnValue) == 0x000020, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'P019HUD_C_DebugPrintFunc::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'P019HUD_C_DebugPrintFunc::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_GetCurrentBoostCartridge_ReturnValue) == 0x0000B8, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_GetCurrentBoostCartridge_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_IsHealBulletActive_ReturnValue) == 0x0000BC, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_IsHealBulletActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000C0, "Member 'P019HUD_C_DebugPrintFunc::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_Conv_BoolToText_ReturnValue_1) == 0x000100, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_Conv_BoolToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, K2Node_MakeStruct_FormatArgumentData_3) == 0x000118, "Member 'P019HUD_C_DebugPrintFunc::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, K2Node_MakeArray_Array) == 0x000158, "Member 'P019HUD_C_DebugPrintFunc::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_Format_ReturnValue) == 0x000168, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_DebugPrintFunc, CallFunc_Conv_TextToString_ReturnValue) == 0x000180, "Member 'P019HUD_C_DebugPrintFunc::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function P019HUD.P019HUD_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P019HUD_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P019HUD_C_PlayAnimForwardInOut");
static_assert(sizeof(P019HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P019HUD_C_PlayAnimForwardInOut");
static_assert(offsetof(P019HUD_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P019HUD_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P019HUD.P019HUD_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P019HUD_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P019HUD_C_PlayAnimReverseInOut");
static_assert(sizeof(P019HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P019HUD_C_PlayAnimReverseInOut");
static_assert(offsetof(P019HUD_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P019HUD_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnInitialize
// 0x0028 (0x0028 - 0x0000)
struct P019HUD_C_OnInitialize final
{
public:
	class USBPCSmasherComponent*                  K2Node_DynamicCast_AsSBPCSmasher_Component;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P019HUD_C_OnInitialize) == 0x000008, "Wrong alignment on P019HUD_C_OnInitialize");
static_assert(sizeof(P019HUD_C_OnInitialize) == 0x000028, "Wrong size on P019HUD_C_OnInitialize");
static_assert(offsetof(P019HUD_C_OnInitialize, K2Node_DynamicCast_AsSBPCSmasher_Component) == 0x000000, "Member 'P019HUD_C_OnInitialize::K2Node_DynamicCast_AsSBPCSmasher_Component' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitialize, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'P019HUD_C_OnInitialize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitialize, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'P019HUD_C_OnInitialize::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitialize, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'P019HUD_C_OnInitialize::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnInitialize, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'P019HUD_C_OnInitialize::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function P019HUD.P019HUD_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P019HUD_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D7[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P019HUD_C_OnSetEditMode) == 0x000004, "Wrong alignment on P019HUD_C_OnSetEditMode");
static_assert(sizeof(P019HUD_C_OnSetEditMode) == 0x000010, "Wrong size on P019HUD_C_OnSetEditMode");
static_assert(offsetof(P019HUD_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P019HUD_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P019HUD_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P019HUD_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P019HUD_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P019HUD_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P019HUD.P019HUD_C.VisibleCartridge
// 0x0090 (0x0090 - 0x0000)
struct P019HUD_C_VisibleCartridge final
{
public:
	int32                                         Param_CartridgeNum;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PowerBulletActive;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HealBulletActive;                                  // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72D8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72D9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72DA[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72DB[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72DC[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item_2;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USmasherBoostCartridgeIcon_C*           CallFunc_Array_Get_Item_3;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72DD[0x1];                                     // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P019HUD_C_VisibleCartridge) == 0x000008, "Wrong alignment on P019HUD_C_VisibleCartridge");
static_assert(sizeof(P019HUD_C_VisibleCartridge) == 0x000090, "Wrong size on P019HUD_C_VisibleCartridge");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Param_CartridgeNum) == 0x000000, "Member 'P019HUD_C_VisibleCartridge::Param_CartridgeNum' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, PowerBulletActive) == 0x000004, "Member 'P019HUD_C_VisibleCartridge::PowerBulletActive' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, HealBulletActive) == 0x000005, "Member 'P019HUD_C_VisibleCartridge::HealBulletActive' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Loop_Counter_Variable_2) == 0x000014, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Add_IntInt_ReturnValue_2) == 0x00001C, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Array_Index_Variable) == 0x000020, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Loop_Counter_Variable_3) == 0x000028, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Add_IntInt_ReturnValue_3) == 0x00002C, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Array_Index_Variable_2) == 0x000030, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, Temp_int_Array_Index_Variable_3) == 0x000034, "Member 'P019HUD_C_VisibleCartridge::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Get_Item) == 0x000040, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Length_ReturnValue_1) == 0x00004C, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Length_ReturnValue_2) == 0x000060, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Less_IntInt_ReturnValue_1) == 0x000064, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Get_Item_2) == 0x000068, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Get_Item_3) == 0x000070, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Length_ReturnValue_3) == 0x000078, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Length_ReturnValue_4) == 0x00007C, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Less_IntInt_ReturnValue_2) == 0x000080, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Less_IntInt_ReturnValue_3) == 0x000081, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000082, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Array_Length_ReturnValue_5) == 0x000084, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Subtract_IntInt_ReturnValue) == 0x000088, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P019HUD_C_VisibleCartridge, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00008C, "Member 'P019HUD_C_VisibleCartridge::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

}

