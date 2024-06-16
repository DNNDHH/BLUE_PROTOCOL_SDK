#pragma once

 

// Package: CmnColorBadge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EColorBadgeType_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnColorBadge.CmnColorBadge_C
// 0x0060 (0x02D8 - 0x0278)
class UCmnColorBadge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        ColorBadgeTypeSwitcher;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExtraColorBadgeParts01;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExtraColorBadgeParts02;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NormalColorBadge;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EColorBadgeType                               ColorBadgeType;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_928F[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ColorBadgeColor;                                   // 0x02A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorBadgeExtraColor1;                             // 0x02B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorBadgeExtraColor2;                             // 0x02C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnColorBadge(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetColorBadgeType(EColorBadgeType InColorBadgeType);
	void SetColorBadgeColor(const struct FLinearColor& InColor);
	void SetColorBadgeExtraColor(const struct FLinearColor& InColor1, const struct FLinearColor& InColor2);
	void GetColorBadgeColor(struct FLinearColor* OutColor);
	void GetColorBadgeExtraColor(struct FLinearColor* OutColor1, struct FLinearColor* OutColor2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnColorBadge_C">();
	}
	static class UCmnColorBadge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnColorBadge_C>();
	}
};
static_assert(alignof(UCmnColorBadge_C) == 0x000008, "Wrong alignment on UCmnColorBadge_C");
static_assert(sizeof(UCmnColorBadge_C) == 0x0002D8, "Wrong size on UCmnColorBadge_C");
static_assert(offsetof(UCmnColorBadge_C, UberGraphFrame) == 0x000278, "Member 'UCmnColorBadge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ColorBadgeTypeSwitcher) == 0x000280, "Member 'UCmnColorBadge_C::ColorBadgeTypeSwitcher' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ExtraColorBadgeParts01) == 0x000288, "Member 'UCmnColorBadge_C::ExtraColorBadgeParts01' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ExtraColorBadgeParts02) == 0x000290, "Member 'UCmnColorBadge_C::ExtraColorBadgeParts02' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, NormalColorBadge) == 0x000298, "Member 'UCmnColorBadge_C::NormalColorBadge' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ColorBadgeType) == 0x0002A0, "Member 'UCmnColorBadge_C::ColorBadgeType' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ColorBadgeColor) == 0x0002A4, "Member 'UCmnColorBadge_C::ColorBadgeColor' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ColorBadgeExtraColor1) == 0x0002B4, "Member 'UCmnColorBadge_C::ColorBadgeExtraColor1' has a wrong offset!");
static_assert(offsetof(UCmnColorBadge_C, ColorBadgeExtraColor2) == 0x0002C4, "Member 'UCmnColorBadge_C::ColorBadgeExtraColor2' has a wrong offset!");

}

