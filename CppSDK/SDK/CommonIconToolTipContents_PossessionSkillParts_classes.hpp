#pragma once

 

// Package: CommonIconToolTipContents_PossessionSkillParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C
// 0x0028 (0x02A0 - 0x0278)
class UCommonIconToolTipContents_PossessionSkillParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Heading;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PossessionMarkIcon;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PossessionName;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TypeName;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void SetPossessionTypeName(const class FText& InTypeName);
	void SetPossessionName(const class FText& InName);
	void SetPossessionInfo(const struct FSBMasterImagine& InMasterImagineData);
	void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine);
	void ResetPossessionInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContents_PossessionSkillParts_C">();
	}
	static class UCommonIconToolTipContents_PossessionSkillParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContents_PossessionSkillParts_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContents_PossessionSkillParts_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContents_PossessionSkillParts_C");
static_assert(sizeof(UCommonIconToolTipContents_PossessionSkillParts_C) == 0x0002A0, "Wrong size on UCommonIconToolTipContents_PossessionSkillParts_C");
static_assert(offsetof(UCommonIconToolTipContents_PossessionSkillParts_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContents_PossessionSkillParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_PossessionSkillParts_C, Heading) == 0x000280, "Member 'UCommonIconToolTipContents_PossessionSkillParts_C::Heading' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_PossessionSkillParts_C, PossessionMarkIcon) == 0x000288, "Member 'UCommonIconToolTipContents_PossessionSkillParts_C::PossessionMarkIcon' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_PossessionSkillParts_C, PossessionName) == 0x000290, "Member 'UCommonIconToolTipContents_PossessionSkillParts_C::PossessionName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_PossessionSkillParts_C, TypeName) == 0x000298, "Member 'UCommonIconToolTipContents_PossessionSkillParts_C::TypeName' has a wrong offset!");

}

