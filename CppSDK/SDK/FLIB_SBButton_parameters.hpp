#pragma once

 

// Package: FLIB_SBButton

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function FLIB_SBButton.FLIB_SBButton_C.SetSBButtonParam
// 0x0028 (0x0028 - 0x0000)
struct FLIB_SBButton_C_SetSBButtonParam final
{
public:
	class USBButton_C*                            Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          PressedSound;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BDB[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_SBButton_C_SetSBButtonParam) == 0x000008, "Wrong alignment on FLIB_SBButton_C_SetSBButtonParam");
static_assert(sizeof(FLIB_SBButton_C_SetSBButtonParam) == 0x000028, "Wrong size on FLIB_SBButton_C_SetSBButtonParam");
static_assert(offsetof(FLIB_SBButton_C_SetSBButtonParam, Target) == 0x000000, "Member 'FLIB_SBButton_C_SetSBButtonParam::Target' has a wrong offset!");
static_assert(offsetof(FLIB_SBButton_C_SetSBButtonParam, PressedSound) == 0x000008, "Member 'FLIB_SBButton_C_SetSBButtonParam::PressedSound' has a wrong offset!");
static_assert(offsetof(FLIB_SBButton_C_SetSBButtonParam, HoveredSound) == 0x000010, "Member 'FLIB_SBButton_C_SetSBButtonParam::HoveredSound' has a wrong offset!");
static_assert(offsetof(FLIB_SBButton_C_SetSBButtonParam, PressedSoundId) == 0x000018, "Member 'FLIB_SBButton_C_SetSBButtonParam::PressedSoundId' has a wrong offset!");
static_assert(offsetof(FLIB_SBButton_C_SetSBButtonParam, HoveredSoundId) == 0x000019, "Member 'FLIB_SBButton_C_SetSBButtonParam::HoveredSoundId' has a wrong offset!");
static_assert(offsetof(FLIB_SBButton_C_SetSBButtonParam, __WorldContext) == 0x000020, "Member 'FLIB_SBButton_C_SetSBButtonParam::__WorldContext' has a wrong offset!");

}

