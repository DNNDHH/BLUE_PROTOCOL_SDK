#pragma once

 

// Package: PassiveSkill_PFM_ModifyAddVoltageGauge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_PFM_ModifyAddVoltageGauge.PassiveSkill_PFM_ModifyAddVoltageGauge_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_PFM_ModifyAddVoltageGauge_C final : public USBPerformerModifyAddVoltageGaugePassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_PFM_ModifyAddVoltageGauge_C">();
	}
	static class UPassiveSkill_PFM_ModifyAddVoltageGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_PFM_ModifyAddVoltageGauge_C>();
	}
};
static_assert(alignof(UPassiveSkill_PFM_ModifyAddVoltageGauge_C) == 0x000008, "Wrong alignment on UPassiveSkill_PFM_ModifyAddVoltageGauge_C");
static_assert(sizeof(UPassiveSkill_PFM_ModifyAddVoltageGauge_C) == 0x000050, "Wrong size on UPassiveSkill_PFM_ModifyAddVoltageGauge_C");

}

