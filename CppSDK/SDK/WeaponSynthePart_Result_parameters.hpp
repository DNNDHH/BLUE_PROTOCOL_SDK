#pragma once

 

// Package: WeaponSynthePart_Result

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupSynthe
// 0x0238 (0x0238 - 0x0000)
struct WeaponSynthePart_Result_C_SetupSynthe final
{
public:
	struct FOwnItemInfo                           Param_beforeData;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           Param_AfterData;                                   // 0x0118(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InSlotNo;                                          // 0x0230(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Result_C_SetupSynthe) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_SetupSynthe");
static_assert(sizeof(WeaponSynthePart_Result_C_SetupSynthe) == 0x000238, "Wrong size on WeaponSynthePart_Result_C_SetupSynthe");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupSynthe, Param_beforeData) == 0x000000, "Member 'WeaponSynthePart_Result_C_SetupSynthe::Param_beforeData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupSynthe, Param_AfterData) == 0x000118, "Member 'WeaponSynthePart_Result_C_SetupSynthe::Param_AfterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupSynthe, InSlotNo) == 0x000230, "Member 'WeaponSynthePart_Result_C_SetupSynthe::InSlotNo' has a wrong offset!");

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupAddSlot
// 0x0230 (0x0230 - 0x0000)
struct WeaponSynthePart_Result_C_SetupAddSlot final
{
public:
	struct FOwnItemInfo                           Param_beforeData;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           Param_AfterData;                                   // 0x0118(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_Result_C_SetupAddSlot) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_SetupAddSlot");
static_assert(sizeof(WeaponSynthePart_Result_C_SetupAddSlot) == 0x000230, "Wrong size on WeaponSynthePart_Result_C_SetupAddSlot");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupAddSlot, Param_beforeData) == 0x000000, "Member 'WeaponSynthePart_Result_C_SetupAddSlot::Param_beforeData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupAddSlot, Param_AfterData) == 0x000118, "Member 'WeaponSynthePart_Result_C_SetupAddSlot::Param_AfterData' has a wrong offset!");

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupRemove
// 0x0238 (0x0238 - 0x0000)
struct WeaponSynthePart_Result_C_SetupRemove final
{
public:
	struct FOwnItemInfo                           Param_beforeData;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           Param_AfterData;                                   // 0x0118(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InRemoveSlotNo;                                    // 0x0230(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsRemove;                                        // 0x0234(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_Result_C_SetupRemove) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_SetupRemove");
static_assert(sizeof(WeaponSynthePart_Result_C_SetupRemove) == 0x000238, "Wrong size on WeaponSynthePart_Result_C_SetupRemove");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupRemove, Param_beforeData) == 0x000000, "Member 'WeaponSynthePart_Result_C_SetupRemove::Param_beforeData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupRemove, Param_AfterData) == 0x000118, "Member 'WeaponSynthePart_Result_C_SetupRemove::Param_AfterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupRemove, InRemoveSlotNo) == 0x000230, "Member 'WeaponSynthePart_Result_C_SetupRemove::InRemoveSlotNo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupRemove, InIsRemove) == 0x000234, "Member 'WeaponSynthePart_Result_C_SetupRemove::InIsRemove' has a wrong offset!");

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupTuning
// 0x0240 (0x0240 - 0x0000)
struct WeaponSynthePart_Result_C_SetupTuning final
{
public:
	struct FOwnItemInfo                           Param_beforeData;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           Param_AfterData;                                   // 0x0118(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 LockSlotNo;                                        // 0x0230(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponSynthePart_Result_C_SetupTuning) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_SetupTuning");
static_assert(sizeof(WeaponSynthePart_Result_C_SetupTuning) == 0x000240, "Wrong size on WeaponSynthePart_Result_C_SetupTuning");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupTuning, Param_beforeData) == 0x000000, "Member 'WeaponSynthePart_Result_C_SetupTuning::Param_beforeData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupTuning, Param_AfterData) == 0x000118, "Member 'WeaponSynthePart_Result_C_SetupTuning::Param_AfterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_Result_C_SetupTuning, LockSlotNo) == 0x000230, "Member 'WeaponSynthePart_Result_C_SetupTuning::LockSlotNo' has a wrong offset!");

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_Result_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_Result_C_PlayAnimIn) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_PlayAnimIn");
static_assert(sizeof(WeaponSynthePart_Result_C_PlayAnimIn) == 0x000008, "Wrong size on WeaponSynthePart_Result_C_PlayAnimIn");
static_assert(offsetof(WeaponSynthePart_Result_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_Result_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetBeforeData
// 0x0118 (0x0118 - 0x0000)
struct WeaponSynthePart_Result_C_SetBeforeData final
{
public:
	struct FOwnItemInfo                           Param_beforeData;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_Result_C_SetBeforeData) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_SetBeforeData");
static_assert(sizeof(WeaponSynthePart_Result_C_SetBeforeData) == 0x000118, "Wrong size on WeaponSynthePart_Result_C_SetBeforeData");
static_assert(offsetof(WeaponSynthePart_Result_C_SetBeforeData, Param_beforeData) == 0x000000, "Member 'WeaponSynthePart_Result_C_SetBeforeData::Param_beforeData' has a wrong offset!");

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetAfterData
// 0x0118 (0x0118 - 0x0000)
struct WeaponSynthePart_Result_C_SetAfterData final
{
public:
	struct FOwnItemInfo                           Param_AfterData;                                   // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_Result_C_SetAfterData) == 0x000008, "Wrong alignment on WeaponSynthePart_Result_C_SetAfterData");
static_assert(sizeof(WeaponSynthePart_Result_C_SetAfterData) == 0x000118, "Wrong size on WeaponSynthePart_Result_C_SetAfterData");
static_assert(offsetof(WeaponSynthePart_Result_C_SetAfterData, Param_AfterData) == 0x000000, "Member 'WeaponSynthePart_Result_C_SetAfterData::Param_AfterData' has a wrong offset!");

}

