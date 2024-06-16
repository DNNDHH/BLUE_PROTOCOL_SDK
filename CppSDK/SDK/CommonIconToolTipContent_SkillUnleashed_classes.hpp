#pragma once

 

// Package: CommonIconToolTipContent_SkillUnleashed

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_SkillUnleashed.CommonIconToolTipContent_SkillUnleashed_C
// 0x0028 (0x02A0 - 0x0278)
class UCommonIconToolTipContent_SkillUnleashed_C final : public UUserWidget
{
public:
	class UImage*                                 Image_234;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ClassConditions;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LearningConditions01;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LearningConditions02;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ToolTipLabel;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(const class FText& ClassLevel, const class FText& Conditions01, const class FText& Conditions02);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_SkillUnleashed_C">();
	}
	static class UCommonIconToolTipContent_SkillUnleashed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_SkillUnleashed_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_SkillUnleashed_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_SkillUnleashed_C");
static_assert(sizeof(UCommonIconToolTipContent_SkillUnleashed_C) == 0x0002A0, "Wrong size on UCommonIconToolTipContent_SkillUnleashed_C");
static_assert(offsetof(UCommonIconToolTipContent_SkillUnleashed_C, Image_234) == 0x000278, "Member 'UCommonIconToolTipContent_SkillUnleashed_C::Image_234' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_SkillUnleashed_C, Txt_ClassConditions) == 0x000280, "Member 'UCommonIconToolTipContent_SkillUnleashed_C::Txt_ClassConditions' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_SkillUnleashed_C, Txt_LearningConditions01) == 0x000288, "Member 'UCommonIconToolTipContent_SkillUnleashed_C::Txt_LearningConditions01' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_SkillUnleashed_C, Txt_LearningConditions02) == 0x000290, "Member 'UCommonIconToolTipContent_SkillUnleashed_C::Txt_LearningConditions02' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_SkillUnleashed_C, Txt_ToolTipLabel) == 0x000298, "Member 'UCommonIconToolTipContent_SkillUnleashed_C::Txt_ToolTipLabel' has a wrong offset!");

}

