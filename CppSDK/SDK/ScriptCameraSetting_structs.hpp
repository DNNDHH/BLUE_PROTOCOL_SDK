#pragma once

 

// Package: ScriptCameraSetting

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ScriptCameraSetting.ScriptCameraSetting
// 0x0030 (0x0030 - 0x0000)
struct FScriptCameraSetting final
{
public:
	struct FVector                                Location_3_68D589584BA18BE2CE463CB143799796;       // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation_6_96A9E49144C4C1DF13B920AD47DC8226;       // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bRelative_8_639F247F4F4B59DA4EBD7CB1470E0872;      // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_709D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Description_11_1A4F114C43DD353FE8D5ADBDFBB115CA;   // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FScriptCameraSetting) == 0x000008, "Wrong alignment on FScriptCameraSetting");
static_assert(sizeof(FScriptCameraSetting) == 0x000030, "Wrong size on FScriptCameraSetting");
static_assert(offsetof(FScriptCameraSetting, Location_3_68D589584BA18BE2CE463CB143799796) == 0x000000, "Member 'FScriptCameraSetting::Location_3_68D589584BA18BE2CE463CB143799796' has a wrong offset!");
static_assert(offsetof(FScriptCameraSetting, Rotation_6_96A9E49144C4C1DF13B920AD47DC8226) == 0x00000C, "Member 'FScriptCameraSetting::Rotation_6_96A9E49144C4C1DF13B920AD47DC8226' has a wrong offset!");
static_assert(offsetof(FScriptCameraSetting, bRelative_8_639F247F4F4B59DA4EBD7CB1470E0872) == 0x000018, "Member 'FScriptCameraSetting::bRelative_8_639F247F4F4B59DA4EBD7CB1470E0872' has a wrong offset!");
static_assert(offsetof(FScriptCameraSetting, Description_11_1A4F114C43DD353FE8D5ADBDFBB115CA) == 0x000020, "Member 'FScriptCameraSetting::Description_11_1A4F114C43DD353FE8D5ADBDFBB115CA' has a wrong offset!");

}

