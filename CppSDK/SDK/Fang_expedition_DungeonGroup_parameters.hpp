#pragma once

 

// Package: Fang_expedition_DungeonGroup

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnTicketButtonClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressExpedition__DelegateSignature
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature) == 0x000128, "Wrong size on Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature, PlayData) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature::PlayData' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressStandby__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.ExecuteUbergraph_Fang_expedition_DungeonGroup
// 0x0148 (0x0148 - 0x0000)
struct Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Object;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DCE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             K2Node_CustomEvent_PlayData;                       // 0x0020(0x0120)()
	int32                                         K2Node_CustomEvent_Index;                          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup) == 0x000148, "Wrong size on Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, EntryPoint) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, K2Node_CustomEvent_Object) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::K2Node_CustomEvent_Object' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, CallFunc_SelectInt_ReturnValue) == 0x000014, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, K2Node_CustomEvent_Index_1) == 0x000018, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, K2Node_CustomEvent_PlayData) == 0x000020, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::K2Node_CustomEvent_PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup, K2Node_CustomEvent_Index) == 0x000140, "Member 'Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup::K2Node_CustomEvent_Index' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressStandbyButton
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonGroup_C_CB_PressStandbyButton final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_CB_PressStandbyButton) == 0x000004, "Wrong alignment on Fang_expedition_DungeonGroup_C_CB_PressStandbyButton");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_CB_PressStandbyButton) == 0x000004, "Wrong size on Fang_expedition_DungeonGroup_C_CB_PressStandbyButton");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_CB_PressStandbyButton, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_CB_PressStandbyButton::Param_Index' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressExpeditionButton
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton) == 0x000128, "Wrong size on Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton, PlayData) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton::PlayData' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_TicketButtonClick
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DungeonGroup_C_CB_TicketButtonClick final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_CB_TicketButtonClick) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_CB_TicketButtonClick");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_CB_TicketButtonClick) == 0x000008, "Wrong size on Fang_expedition_DungeonGroup_C_CB_TicketButtonClick");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_CB_TicketButtonClick, Object) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_CB_TicketButtonClick::Object' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetPlayData
// 0x0138 (0x0138 - 0x0000)
struct Fang_expedition_DungeonGroup_C_SetPlayData final
{
public:
	int32                                         SlotIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFang_expedition_DungeonSlot_C*         TargetSlot;                                        // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_SetPlayData) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_SetPlayData");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_SetPlayData) == 0x000138, "Wrong size on Fang_expedition_DungeonGroup_C_SetPlayData");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetPlayData, SlotIndex) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_SetPlayData::SlotIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetPlayData, PlayData) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_SetPlayData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetPlayData, TargetSlot) == 0x000128, "Member 'Fang_expedition_DungeonGroup_C_SetPlayData::TargetSlot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetPlayData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000130, "Member 'Fang_expedition_DungeonGroup_C_SetPlayData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetGauge
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DungeonGroup_C_SetGauge final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowPoint;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPoint;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DungeonStatus_C*       TargetGauge;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_SetGauge) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_SetGauge");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_SetGauge) == 0x000020, "Wrong size on Fang_expedition_DungeonGroup_C_SetGauge");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetGauge, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_SetGauge::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetGauge, NowPoint) == 0x000004, "Member 'Fang_expedition_DungeonGroup_C_SetGauge::NowPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetGauge, MaxPoint) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_SetGauge::MaxPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetGauge, TargetGauge) == 0x000010, "Member 'Fang_expedition_DungeonGroup_C_SetGauge::TargetGauge' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetGauge, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DungeonGroup_C_SetGauge::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Initialize
// 0x00A0 (0x00A0 - 0x0000)
struct Fang_expedition_DungeonGroup_C_Initialize final
{
public:
	int32                                         TokenAmount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD4[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* ClickedObject)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* ClickedObject)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_Initialize) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_Initialize");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_Initialize) == 0x0000A0, "Wrong size on Fang_expedition_DungeonGroup_C_Initialize");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, TokenAmount) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_Initialize::TokenAmount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_Initialize::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, CallFunc_GetTokenAmount_ReturnValue) == 0x000010, "Member 'Fang_expedition_DungeonGroup_C_Initialize::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'Fang_expedition_DungeonGroup_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'Fang_expedition_DungeonGroup_C_Initialize::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'Fang_expedition_DungeonGroup_C_Initialize::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'Fang_expedition_DungeonGroup_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'Fang_expedition_DungeonGroup_C_Initialize::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'Fang_expedition_DungeonGroup_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'Fang_expedition_DungeonGroup_C_Initialize::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'Fang_expedition_DungeonGroup_C_Initialize::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Initialize, K2Node_CreateDelegate_OutputDelegate_5) == 0x000090, "Member 'Fang_expedition_DungeonGroup_C_Initialize::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Finish
// 0x0060 (0x0060 - 0x0000)
struct Fang_expedition_DungeonGroup_C_Finish final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* ClickedObject)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* ClickedObject)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_Finish) == 0x000004, "Wrong alignment on Fang_expedition_DungeonGroup_C_Finish");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_Finish) == 0x000060, "Wrong size on Fang_expedition_DungeonGroup_C_Finish");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'Fang_expedition_DungeonGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'Fang_expedition_DungeonGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'Fang_expedition_DungeonGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'Fang_expedition_DungeonGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_Finish, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'Fang_expedition_DungeonGroup_C_Finish::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetSlotType
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_DungeonGroup_C_SetSlotType final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotType;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DungeonSlot_C*         TargetSlot;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_SetSlotType) == 0x000008, "Wrong alignment on Fang_expedition_DungeonGroup_C_SetSlotType");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_SetSlotType) == 0x000018, "Wrong size on Fang_expedition_DungeonGroup_C_SetSlotType");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetSlotType, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_SetSlotType::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetSlotType, SlotType) == 0x000004, "Member 'Fang_expedition_DungeonGroup_C_SetSlotType::SlotType' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetSlotType, TargetSlot) == 0x000008, "Member 'Fang_expedition_DungeonGroup_C_SetSlotType::TargetSlot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetSlotType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_DungeonGroup_C_SetSlotType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetBtn_Selected
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DungeonGroup_C_SetBtn_Selected final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_SetBtn_Selected) == 0x000004, "Wrong alignment on Fang_expedition_DungeonGroup_C_SetBtn_Selected");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_SetBtn_Selected) == 0x000008, "Wrong size on Fang_expedition_DungeonGroup_C_SetBtn_Selected");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetBtn_Selected, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_SetBtn_Selected::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetBtn_Selected, CallFunc_Less_IntInt_ReturnValue) == 0x000004, "Member 'Fang_expedition_DungeonGroup_C_SetBtn_Selected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_SetBtn_Selected, K2Node_SwitchInteger_CmpSuccess) == 0x000005, "Member 'Fang_expedition_DungeonGroup_C_SetBtn_Selected::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.PlaySlotAnimation
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DungeonGroup_C_PlaySlotAnimation final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonGroup_C_PlaySlotAnimation) == 0x000004, "Wrong alignment on Fang_expedition_DungeonGroup_C_PlaySlotAnimation");
static_assert(sizeof(Fang_expedition_DungeonGroup_C_PlaySlotAnimation) == 0x000008, "Wrong size on Fang_expedition_DungeonGroup_C_PlaySlotAnimation");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_PlaySlotAnimation, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonGroup_C_PlaySlotAnimation::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonGroup_C_PlaySlotAnimation, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'Fang_expedition_DungeonGroup_C_PlaySlotAnimation::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

