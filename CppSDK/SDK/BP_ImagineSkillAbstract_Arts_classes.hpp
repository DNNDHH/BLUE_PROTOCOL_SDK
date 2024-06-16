#pragma once

 

// Package: BP_ImagineSkillAbstract_Arts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ImagineSkillAbstract_Arts.BP_ImagineSkillAbstract_Arts_C
// 0x0030 (0x0338 - 0x0308)
class UBP_ImagineSkillAbstract_Arts_C final : public USBImagineArtsSkillInfo
{
public:
	TSoftObjectPtr<class UAkAudioEvent>           VoiceEvent;                                        // 0x0308(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ESBAkEventLOD                                 VoiceLOD;                                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ImagineSkillAbstract_Arts_C">();
	}
	static class UBP_ImagineSkillAbstract_Arts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ImagineSkillAbstract_Arts_C>();
	}
};
static_assert(alignof(UBP_ImagineSkillAbstract_Arts_C) == 0x000008, "Wrong alignment on UBP_ImagineSkillAbstract_Arts_C");
static_assert(sizeof(UBP_ImagineSkillAbstract_Arts_C) == 0x000338, "Wrong size on UBP_ImagineSkillAbstract_Arts_C");
static_assert(offsetof(UBP_ImagineSkillAbstract_Arts_C, VoiceEvent) == 0x000308, "Member 'UBP_ImagineSkillAbstract_Arts_C::VoiceEvent' has a wrong offset!");
static_assert(offsetof(UBP_ImagineSkillAbstract_Arts_C, VoiceLOD) == 0x000330, "Member 'UBP_ImagineSkillAbstract_Arts_C::VoiceLOD' has a wrong offset!");

}

