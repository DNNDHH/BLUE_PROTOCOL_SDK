#pragma once

 

// Package: CommonSkillStatusDescBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonSkillStatusDescBase.CommonSkillStatusDescBase_C
// 0x0068 (0x02E0 - 0x0278)
class UCommonSkillStatusDescBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BeltBg;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForSkillName;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Level;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_CommonSkillStatusDescBase_C;                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForBaseBg;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Type;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BaseWidth;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BaseHeight;                                        // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTacticalSkill;                                  // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_841E[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillLevel;                                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AdditionalTypeId;                                  // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  SkillClassType;                                    // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonSkillStatusDescBase(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBaseSize(float InWidth, float InHeight);
	void SwitchBaseBgType(bool InIsNormalType);
	void SetBlank(bool InIsBlank);
	void SetSKill(int32 InSkillId, int32 InSkillLevel);
	void SetSkillName(const class FString& InName);
	void SetSkillLevel(int32 InLevel);
	void SetSkillClassType(ESBClassType InClassType);
	void SetSkillAbilityTypeVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonSkillStatusDescBase_C">();
	}
	static class UCommonSkillStatusDescBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonSkillStatusDescBase_C>();
	}
};
static_assert(alignof(UCommonSkillStatusDescBase_C) == 0x000008, "Wrong alignment on UCommonSkillStatusDescBase_C");
static_assert(sizeof(UCommonSkillStatusDescBase_C) == 0x0002E0, "Wrong size on UCommonSkillStatusDescBase_C");
static_assert(offsetof(UCommonSkillStatusDescBase_C, UberGraphFrame) == 0x000278, "Member 'UCommonSkillStatusDescBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, BeltBg) == 0x000280, "Member 'UCommonSkillStatusDescBase_C::BeltBg' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, ClassIcon) == 0x000288, "Member 'UCommonSkillStatusDescBase_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, HBoxForSkillName) == 0x000290, "Member 'UCommonSkillStatusDescBase_C::HBoxForSkillName' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, Level) == 0x000298, "Member 'UCommonSkillStatusDescBase_C::Level' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, Line) == 0x0002A0, "Member 'UCommonSkillStatusDescBase_C::Line' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, Name_CommonSkillStatusDescBase_C) == 0x0002A8, "Member 'UCommonSkillStatusDescBase_C::Name_CommonSkillStatusDescBase_C' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, SwitcherForBaseBg) == 0x0002B0, "Member 'UCommonSkillStatusDescBase_C::SwitcherForBaseBg' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, Type) == 0x0002B8, "Member 'UCommonSkillStatusDescBase_C::Type' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, BaseWidth) == 0x0002C0, "Member 'UCommonSkillStatusDescBase_C::BaseWidth' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, BaseHeight) == 0x0002C4, "Member 'UCommonSkillStatusDescBase_C::BaseHeight' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, SkillId) == 0x0002C8, "Member 'UCommonSkillStatusDescBase_C::SkillId' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, bIsTacticalSkill) == 0x0002CC, "Member 'UCommonSkillStatusDescBase_C::bIsTacticalSkill' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, SkillLevel) == 0x0002D0, "Member 'UCommonSkillStatusDescBase_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, AdditionalTypeId) == 0x0002D4, "Member 'UCommonSkillStatusDescBase_C::AdditionalTypeId' has a wrong offset!");
static_assert(offsetof(UCommonSkillStatusDescBase_C, SkillClassType) == 0x0002D8, "Member 'UCommonSkillStatusDescBase_C::SkillClassType' has a wrong offset!");

}

