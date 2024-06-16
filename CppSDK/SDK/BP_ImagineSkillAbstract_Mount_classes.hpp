#pragma once

 

// Package: BP_ImagineSkillAbstract_Mount

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ImagineSkillAbstract_Mount.BP_ImagineSkillAbstract_Mount_C
// 0x0030 (0x06E8 - 0x06B8)
class UBP_ImagineSkillAbstract_Mount_C final : public USBImagineMountSkillInfo
{
public:
	TSoftObjectPtr<class UAkAudioEvent>           VoiceEvent;                                        // 0x06B8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ESBAkEventLOD                                 VoiceLOD;                                          // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ImagineSkillAbstract_Mount_C">();
	}
	static class UBP_ImagineSkillAbstract_Mount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImagineSkillAbstract_Mount_C>();
	}
};
static_assert(alignof(UBP_ImagineSkillAbstract_Mount_C) == 0x000008, "Wrong alignment on UBP_ImagineSkillAbstract_Mount_C");
static_assert(sizeof(UBP_ImagineSkillAbstract_Mount_C) == 0x0006E8, "Wrong size on UBP_ImagineSkillAbstract_Mount_C");
static_assert(offsetof(UBP_ImagineSkillAbstract_Mount_C, VoiceEvent) == 0x0006B8, "Member 'UBP_ImagineSkillAbstract_Mount_C::VoiceEvent' has a wrong offset!");
static_assert(offsetof(UBP_ImagineSkillAbstract_Mount_C, VoiceLOD) == 0x0006E0, "Member 'UBP_ImagineSkillAbstract_Mount_C::VoiceLOD' has a wrong offset!");

}

