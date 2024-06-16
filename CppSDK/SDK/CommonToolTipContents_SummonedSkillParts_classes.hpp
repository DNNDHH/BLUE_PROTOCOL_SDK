#pragma once

 

// Package: CommonToolTipContents_SummonedSkillParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C
// 0x0028 (0x02A0 - 0x0278)
class UCommonToolTipContents_SummonedSkillParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Heading;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SummonedName;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TypeName;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void SetSummonedTypeName(const class FText& InTypeName);
	void SetSummonedName(const class FText& InName);
	void SetSummonedInfo(const struct FSBMasterImagine& InImagineMasterData);
	void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine);
	void ResetSummonedInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonToolTipContents_SummonedSkillParts_C">();
	}
	static class UCommonToolTipContents_SummonedSkillParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonToolTipContents_SummonedSkillParts_C>();
	}
};
static_assert(alignof(UCommonToolTipContents_SummonedSkillParts_C) == 0x000008, "Wrong alignment on UCommonToolTipContents_SummonedSkillParts_C");
static_assert(sizeof(UCommonToolTipContents_SummonedSkillParts_C) == 0x0002A0, "Wrong size on UCommonToolTipContents_SummonedSkillParts_C");
static_assert(offsetof(UCommonToolTipContents_SummonedSkillParts_C, UberGraphFrame) == 0x000278, "Member 'UCommonToolTipContents_SummonedSkillParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonToolTipContents_SummonedSkillParts_C, AttributeIcon) == 0x000280, "Member 'UCommonToolTipContents_SummonedSkillParts_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UCommonToolTipContents_SummonedSkillParts_C, Heading) == 0x000288, "Member 'UCommonToolTipContents_SummonedSkillParts_C::Heading' has a wrong offset!");
static_assert(offsetof(UCommonToolTipContents_SummonedSkillParts_C, SummonedName) == 0x000290, "Member 'UCommonToolTipContents_SummonedSkillParts_C::SummonedName' has a wrong offset!");
static_assert(offsetof(UCommonToolTipContents_SummonedSkillParts_C, TypeName) == 0x000298, "Member 'UCommonToolTipContents_SummonedSkillParts_C::TypeName' has a wrong offset!");

}

