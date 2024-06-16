#pragma once

 

// Package: Fang_expedition_DungeonSlot

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Expedition__DelegateSignature
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             Param_PlayData;                                    // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature) == 0x000128, "Wrong size on Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature, Param_PlayData) == 0x000008, "Member 'Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature::Param_PlayData' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Standby__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.ExecuteUbergraph_Fang_expedition_DungeonSlot
// 0x0038 (0x0038 - 0x0000)
struct Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	int32                                         K2Node_CustomEvent_SlotIndex;                      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot) == 0x000008, "Wrong alignment on Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot) == 0x000038, "Wrong size on Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot, EntryPoint) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot, K2Node_CustomEvent_SlotIndex) == 0x000030, "Member 'Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot::K2Node_CustomEvent_SlotIndex' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.CB_ExpeditionSlotSelect
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect final
{
public:
	int32                                         SlotIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect) == 0x000004, "Wrong alignment on Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect) == 0x000004, "Wrong size on Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect, SlotIndex) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect::SlotIndex' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetAreaData
// 0x00B0 (0x00B0 - 0x0000)
struct Fang_expedition_DungeonSlot_C_SetAreaData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData_;                                         // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         SlotIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_SetAreaData) == 0x000008, "Wrong alignment on Fang_expedition_DungeonSlot_C_SetAreaData");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_SetAreaData) == 0x0000B0, "Wrong size on Fang_expedition_DungeonSlot_C_SetAreaData");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_SetAreaData, AreaData_) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_SetAreaData::AreaData_' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_SetAreaData, SlotIndex) == 0x0000A8, "Member 'Fang_expedition_DungeonSlot_C_SetAreaData::SlotIndex' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Initialize
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DungeonSlot_C_Initialize final
{
public:
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_Initialize) == 0x000004, "Wrong alignment on Fang_expedition_DungeonSlot_C_Initialize");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_Initialize) == 0x000010, "Wrong size on Fang_expedition_DungeonSlot_C_Initialize");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Finish
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DungeonSlot_C_Finish final
{
public:
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_Finish) == 0x000004, "Wrong alignment on Fang_expedition_DungeonSlot_C_Finish");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_Finish) == 0x000010, "Wrong size on Fang_expedition_DungeonSlot_C_Finish");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_Finish, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_Finish::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetSlotType
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonSlot_C_SetSlotType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_SetSlotType) == 0x000004, "Wrong alignment on Fang_expedition_DungeonSlot_C_SetSlotType");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_SetSlotType) == 0x000004, "Wrong size on Fang_expedition_DungeonSlot_C_SetSlotType");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_SetSlotType, Type) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_SetSlotType::Type' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetPlayData
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_DungeonSlot_C_SetPlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData_;                                         // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         SlotIndex;                                         // 0x0120(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_SetPlayData) == 0x000008, "Wrong alignment on Fang_expedition_DungeonSlot_C_SetPlayData");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_SetPlayData) == 0x000128, "Wrong size on Fang_expedition_DungeonSlot_C_SetPlayData");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_SetPlayData, PlayData_) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_SetPlayData::PlayData_' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_SetPlayData, SlotIndex) == 0x000120, "Member 'Fang_expedition_DungeonSlot_C_SetPlayData::SlotIndex' has a wrong offset!");

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetBtn_Selected
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_DungeonSlot_C_SetBtn_Selected final
{
public:
	bool                                          BtnSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonSlot_C_SetBtn_Selected) == 0x000001, "Wrong alignment on Fang_expedition_DungeonSlot_C_SetBtn_Selected");
static_assert(sizeof(Fang_expedition_DungeonSlot_C_SetBtn_Selected) == 0x000001, "Wrong size on Fang_expedition_DungeonSlot_C_SetBtn_Selected");
static_assert(offsetof(Fang_expedition_DungeonSlot_C_SetBtn_Selected, BtnSelected) == 0x000000, "Member 'Fang_expedition_DungeonSlot_C_SetBtn_Selected::BtnSelected' has a wrong offset!");

}

