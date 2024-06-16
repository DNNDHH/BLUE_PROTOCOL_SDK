#pragma once

 

// Package: PartyMemberInfo_HPGauge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.ExecuteUbergraph_PartyMemberInfo_HPGauge
// 0x0070 (0x0070 - 0x0000)
struct PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71D9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   K2Node_Event_ParameterComponent;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InTeamId;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71DA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_6;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterParameterComponent*   K2Node_Event_ParameterComponent_1;                 // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InTeamId_1;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge) == 0x000070, "Wrong size on PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, EntryPoint) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, K2Node_Event_ParameterComponent) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::K2Node_Event_ParameterComponent' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, K2Node_Event_InTeamId) == 0x000010, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::K2Node_Event_InTeamId' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, K2Node_Event_IsDesignTime) == 0x000014, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000020, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000028, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000030, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000038, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x000040, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000048, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000050, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_6) == 0x000058, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, K2Node_Event_ParameterComponent_1) == 0x000060, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::K2Node_Event_ParameterComponent_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge, K2Node_Event_InTeamId_1) == 0x000068, "Member 'PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge::K2Node_Event_InTeamId_1' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdate
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_HPGauge_C_OnUpdate final
{
public:
	class USBPlayerCharacterParameterComponent*   ParameterComponent;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTeamId;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_OnUpdate) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_OnUpdate");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_OnUpdate) == 0x000010, "Wrong size on PartyMemberInfo_HPGauge_C_OnUpdate");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_OnUpdate, ParameterComponent) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_OnUpdate::ParameterComponent' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_OnUpdate, InTeamId) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_OnUpdate::InTeamId' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdateAnim
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_HPGauge_C_OnUpdateAnim final
{
public:
	class USBPlayerCharacterParameterComponent*   ParameterComponent;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTeamId;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_OnUpdateAnim) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_OnUpdateAnim");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_OnUpdateAnim) == 0x000010, "Wrong size on PartyMemberInfo_HPGauge_C_OnUpdateAnim");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_OnUpdateAnim, ParameterComponent) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_OnUpdateAnim::ParameterComponent' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_OnUpdateAnim, InTeamId) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_OnUpdateAnim::InTeamId' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PartyMemberInfo_HPGauge_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_PreConstruct) == 0x000001, "Wrong alignment on PartyMemberInfo_HPGauge_C_PreConstruct");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_PreConstruct) == 0x000001, "Wrong size on PartyMemberInfo_HPGauge_C_PreConstruct");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Update
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_HPGauge_C_Update final
{
public:
	class USBPlayerCharacterParameterComponent*   CharaParamComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamNumber;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_Update) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_Update");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_Update) == 0x000010, "Wrong size on PartyMemberInfo_HPGauge_C_Update");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_Update, CharaParamComp) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_Update::CharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_Update, TeamNumber) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_Update::TeamNumber' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateHP
// 0x0150 (0x0150 - 0x0000)
struct PartyMemberInfo_HPGauge_C_UpdateHP final
{
public:
	class USBPlayerCharacterParameterComponent*   CharaParamComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71DB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   PlayerCharaParamComp;                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidDsState_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71DC[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxHitPointLoss_ReturnValue;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71DD[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput_1;          // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue_1;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue; // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71DE[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetCurrentHitPoint_self_CastInput;        // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCurrentHitPoint_ReturnValue;           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71DF[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetCurrentHitPoint_self_CastInput_1;      // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCurrentHitPoint_ReturnValue_1;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71E0[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput_2;          // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue_2;             // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71E1[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput_3;          // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue_3;             // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue_1; // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue_2; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput_4;          // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue_4;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71E2[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetCurrentHitPoint_self_CastInput_2;      // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCurrentHitPoint_ReturnValue_2;         // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71E3[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsAliveHitPoint_self_CastInput;           // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAliveHitPoint_ReturnValue;              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71E4[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxHPWithoutResurrectionAdjust_MaxHPWithoutResurrectionAdjust; // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71E5[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxHP_OutMaxHP;                        // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71E6[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrHP_OutCurrHP;                      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_2;        // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_UpdateHP) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_UpdateHP");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_UpdateHP) == 0x000150, "Wrong size on PartyMemberInfo_HPGauge_C_UpdateHP");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CharaParamComp) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, Rate) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::Rate' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, PlayerCharaParamComp) == 0x000010, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::PlayerCharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_ValidDsState_ReturnValue) == 0x000020, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_ValidDsState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_IsVisible_ReturnValue) == 0x000021, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_IsVisible_ReturnValue_1) == 0x000022, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPointLoss_ReturnValue) == 0x000024, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPointLoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000028, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000038, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00003C, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_BreakVector2D_X) == 0x000040, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_BreakVector2D_Y) == 0x000044, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000048, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_self_CastInput_1) == 0x000058, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_ReturnValue_1) == 0x000068, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_MakeVector2D_ReturnValue) == 0x00006C, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000074, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_MakeVector2D_ReturnValue_1) == 0x000078, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue) == 0x000080, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000084, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_Less_FloatFloat_ReturnValue) == 0x000085, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrentHitPoint_self_CastInput) == 0x000088, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrentHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrentHitPoint_ReturnValue) == 0x000098, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrentHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrentHitPoint_self_CastInput_1) == 0x0000A0, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrentHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrentHitPoint_ReturnValue_1) == 0x0000B0, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrentHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_self_CastInput_2) == 0x0000B8, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_ReturnValue_2) == 0x0000C8, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_self_CastInput_3) == 0x0000D0, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_ReturnValue_3) == 0x0000E0, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue_1) == 0x0000E4, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000E8, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue_2) == 0x0000EC, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_self_CastInput_4) == 0x0000F0, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHitPoint_ReturnValue_4) == 0x000100, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHitPoint_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrentHitPoint_self_CastInput_2) == 0x000108, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrentHitPoint_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrentHitPoint_ReturnValue_2) == 0x000118, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrentHitPoint_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_IsAliveHitPoint_self_CastInput) == 0x000120, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_IsAliveHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_IsAliveHitPoint_ReturnValue) == 0x000130, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_IsAliveHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHPWithoutResurrectionAdjust_MaxHPWithoutResurrectionAdjust) == 0x000134, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHPWithoutResurrectionAdjust_MaxHPWithoutResurrectionAdjust' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000138, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetMaxHP_OutMaxHP) == 0x00013C, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetMaxHP_OutMaxHP' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x000140, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_GetCurrHP_OutCurrHP) == 0x000144, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_GetCurrHP_OutCurrHP' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_BooleanOR_ReturnValue) == 0x000148, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateHP, CallFunc_NotEqual_FloatFloat_ReturnValue_2) == 0x000149, "Member 'PartyMemberInfo_HPGauge_C_UpdateHP::CallFunc_NotEqual_FloatFloat_ReturnValue_2' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateIcon
// 0x0050 (0x0050 - 0x0000)
struct PartyMemberInfo_HPGauge_C_UpdateIcon final
{
public:
	class USBPlayerCharacterParameterComponent*   CharaParamComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamNumber;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71E7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   PlayerCharaParamComp;                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayerDiedCountDown_ReturnValue;       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentDiedCountDown_ReturnValue;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71E8[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsAliveHitPoint_self_CastInput;           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAliveHitPoint_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71E9[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVIsibleIcon_ReturnValue;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVIsibleIcon_ReturnValue_1;              // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71EA[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_UpdateIcon) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_UpdateIcon");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_UpdateIcon) == 0x000050, "Wrong size on PartyMemberInfo_HPGauge_C_UpdateIcon");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CharaParamComp) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, TeamNumber) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::TeamNumber' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, PlayerCharaParamComp) == 0x000010, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::PlayerCharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, Temp_int_Variable) == 0x000018, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_GetPlayerDiedCountDown_ReturnValue) == 0x00001C, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_GetPlayerDiedCountDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_GetCurrentDiedCountDown_ReturnValue) == 0x000020, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_GetCurrentDiedCountDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_IsAliveHitPoint_self_CastInput) == 0x000028, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_IsAliveHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_IsAliveHitPoint_ReturnValue) == 0x000038, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_IsAliveHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000039, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, Temp_int_Variable_1) == 0x00003C, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000040, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_IsVIsibleIcon_ReturnValue) == 0x000044, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_IsVIsibleIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_IsVIsibleIcon_ReturnValue_1) == 0x000045, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_IsVIsibleIcon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, Temp_bool_Variable) == 0x000046, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, K2Node_Select_Default) == 0x000048, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateIcon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00004C, "Member 'PartyMemberInfo_HPGauge_C_UpdateIcon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateAnim
// 0x0098 (0x0098 - 0x0000)
struct PartyMemberInfo_HPGauge_C_UpdateAnim final
{
public:
	class USBPlayerCharacterParameterComponent*   CharaParamComp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamNumber;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HPRate;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max;                                               // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71EB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   PlayerCharaParamComp;                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enable_Blink_Anim_EnableBlinkAnim;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71EC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetCurrentHitPoint_self_CastInput;        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCurrentHitPoint_ReturnValue;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71ED[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71EE[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPlayerDiedCountDown_ReturnValue;       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enable_Blink_Anim_EnableBlinkAnim_1;  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71EF[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentDiedCountDown_ReturnValue;      // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71F0[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsAliveHitPoint_self_CastInput;           // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAliveHitPoint_ReturnValue;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_UpdateAnim) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_UpdateAnim");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_UpdateAnim) == 0x000098, "Wrong size on PartyMemberInfo_HPGauge_C_UpdateAnim");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CharaParamComp) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, TeamNumber) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::TeamNumber' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, HPRate) == 0x00000C, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::HPRate' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, Rate) == 0x000010, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::Rate' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, Value) == 0x000014, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::Value' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, Max) == 0x000018, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::Max' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, PlayerCharaParamComp) == 0x000020, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::PlayerCharaParamComp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_Get_Enable_Blink_Anim_EnableBlinkAnim) == 0x000028, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_Get_Enable_Blink_Anim_EnableBlinkAnim' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_GetCurrentHitPoint_self_CastInput) == 0x000030, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_GetCurrentHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_GetCurrentHitPoint_ReturnValue) == 0x000040, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_GetCurrentHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000048, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000058, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_SafeDivide_ReturnValue) == 0x00005C, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000060, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_GetPlayerDiedCountDown_ReturnValue) == 0x000064, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_GetPlayerDiedCountDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_Get_Enable_Blink_Anim_EnableBlinkAnim_1) == 0x000068, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_Get_Enable_Blink_Anim_EnableBlinkAnim_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_GetCurrentDiedCountDown_ReturnValue) == 0x00006C, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_GetCurrentDiedCountDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000074, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_Lerp_ReturnValue) == 0x000078, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_IsAliveHitPoint_self_CastInput) == 0x000080, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_IsAliveHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_UpdateAnim, CallFunc_IsAliveHitPoint_ReturnValue) == 0x000090, "Member 'PartyMemberInfo_HPGauge_C_UpdateAnim::CallFunc_IsAliveHitPoint_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHP
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_HPGauge_C_SetHP final
{
public:
	float                                         InCurrHp;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxHp;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxHPWoAdjust;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_SetHP) == 0x000004, "Wrong alignment on PartyMemberInfo_HPGauge_C_SetHP");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_SetHP) == 0x000010, "Wrong size on PartyMemberInfo_HPGauge_C_SetHP");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHP, InCurrHp) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_SetHP::InCurrHp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHP, InMaxHp) == 0x000004, "Member 'PartyMemberInfo_HPGauge_C_SetHP::InMaxHp' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHP, InMaxHPWoAdjust) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_SetHP::InMaxHPWoAdjust' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHP, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00000C, "Member 'PartyMemberInfo_HPGauge_C_SetHP::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHPGaugeSize
// 0x0028 (0x0028 - 0x0000)
struct PartyMemberInfo_HPGauge_C_SetHPGaugeSize final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_SetHPGaugeSize");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize) == 0x000028, "Wrong size on PartyMemberInfo_HPGauge_C_SetHPGaugeSize");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, Rate) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::Rate' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, CallFunc_BreakVector2D_X) == 0x000010, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, CallFunc_SafeDivide_ReturnValue) == 0x00001C, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHPGaugeSize, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'PartyMemberInfo_HPGauge_C_SetHPGaugeSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHpGaugeWidthRate
// 0x0038 (0x0038 - 0x0000)
struct PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate final
{
public:
	float                                         InWidthRate;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate) == 0x000038, "Wrong size on PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, InWidthRate) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::InWidthRate' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_BreakVector2D_X) == 0x000004, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00000C, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000020, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000028, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000030, "Member 'PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Get Enable Blink Anim
// 0x0001 (0x0001 - 0x0000)
struct PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim final
{
public:
	bool                                          Param_EnableBlinkAnim;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim) == 0x000001, "Wrong alignment on PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim) == 0x000001, "Wrong size on PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim, Param_EnableBlinkAnim) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim::Param_EnableBlinkAnim' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetVisibleBlinkFrame
// 0x0005 (0x0005 - 0x0000)
struct PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame) == 0x000001, "Wrong alignment on PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame) == 0x000005, "Wrong size on PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame, Visible) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame::Visible' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame, Temp_bool_Variable) == 0x000001, "Member 'PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame, Temp_byte_Variable) == 0x000002, "Member 'PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame, Temp_byte_Variable_1) == 0x000003, "Member 'PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame, K2Node_Select_Default) == 0x000004, "Member 'PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame::K2Node_Select_Default' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlink
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_HPGauge_C_PlayAnimBlink final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71F2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_PlayAnimBlink) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_PlayAnimBlink");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_PlayAnimBlink) == 0x000010, "Wrong size on PartyMemberInfo_HPGauge_C_PlayAnimBlink");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_PlayAnimBlink, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_PlayAnimBlink::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_PlayAnimBlink, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_PlayAnimBlink::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlink
// 0x0001 (0x0001 - 0x0000)
struct PartyMemberInfo_HPGauge_C_StopAnimBlink final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_StopAnimBlink) == 0x000001, "Wrong alignment on PartyMemberInfo_HPGauge_C_StopAnimBlink");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_StopAnimBlink) == 0x000001, "Wrong size on PartyMemberInfo_HPGauge_C_StopAnimBlink");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_StopAnimBlink, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_StopAnimBlink::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlinkFast
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71F3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast) == 0x000008, "Wrong alignment on PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast) == 0x000010, "Wrong size on PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_HPGauge_C_PlayAnimBlinkFast::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlinkFast
// 0x0001 (0x0001 - 0x0000)
struct PartyMemberInfo_HPGauge_C_StopAnimBlinkFast final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_StopAnimBlinkFast) == 0x000001, "Wrong alignment on PartyMemberInfo_HPGauge_C_StopAnimBlinkFast");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_StopAnimBlinkFast) == 0x000001, "Wrong size on PartyMemberInfo_HPGauge_C_StopAnimBlinkFast");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_StopAnimBlinkFast, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_StopAnimBlinkFast::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetAnimSpeedBlinkFast
// 0x0008 (0x0008 - 0x0000)
struct PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast final
{
public:
	float                                         PlaybackSpeed;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast) == 0x000004, "Wrong alignment on PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast) == 0x000008, "Wrong size on PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast, PlaybackSpeed) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.IsVIsibleIcon
// 0x0002 (0x0002 - 0x0000)
struct PartyMemberInfo_HPGauge_C_IsVIsibleIcon final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_IsVIsibleIcon) == 0x000001, "Wrong alignment on PartyMemberInfo_HPGauge_C_IsVIsibleIcon");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_IsVIsibleIcon) == 0x000002, "Wrong size on PartyMemberInfo_HPGauge_C_IsVIsibleIcon");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_IsVIsibleIcon, ReturnValue) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_IsVIsibleIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_IsVIsibleIcon, CallFunc_IsVisible_ReturnValue) == 0x000001, "Member 'PartyMemberInfo_HPGauge_C_IsVIsibleIcon::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetCurrHP
// 0x0004 (0x0004 - 0x0000)
struct PartyMemberInfo_HPGauge_C_GetCurrHP final
{
public:
	float                                         OutCurrHP;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_GetCurrHP) == 0x000004, "Wrong alignment on PartyMemberInfo_HPGauge_C_GetCurrHP");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_GetCurrHP) == 0x000004, "Wrong size on PartyMemberInfo_HPGauge_C_GetCurrHP");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_GetCurrHP, OutCurrHP) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_GetCurrHP::OutCurrHP' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHP
// 0x0004 (0x0004 - 0x0000)
struct PartyMemberInfo_HPGauge_C_GetMaxHP final
{
public:
	float                                         OutMaxHP;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_GetMaxHP) == 0x000004, "Wrong alignment on PartyMemberInfo_HPGauge_C_GetMaxHP");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_GetMaxHP) == 0x000004, "Wrong size on PartyMemberInfo_HPGauge_C_GetMaxHP");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_GetMaxHP, OutMaxHP) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_GetMaxHP::OutMaxHP' has a wrong offset!");

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHPWithoutResurrectionAdjust
// 0x0004 (0x0004 - 0x0000)
struct PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust final
{
public:
	float                                         Param_MaxHPWithoutResurrectionAdjust;              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust) == 0x000004, "Wrong alignment on PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust");
static_assert(sizeof(PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust) == 0x000004, "Wrong size on PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust");
static_assert(offsetof(PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust, Param_MaxHPWithoutResurrectionAdjust) == 0x000000, "Member 'PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust::Param_MaxHPWithoutResurrectionAdjust' has a wrong offset!");

}

