#pragma once

 

// Package: WBP_CommonToolTipDetail_Fixed

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_CommonToolTipDetail_Fixed_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_169;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line_1;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Type1gp;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc_1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtType;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtType_1;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          WBP_ToolTipDetailsDateTime;                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetAbilityNameText(const class FText& InText);
	void SetAbilityDescText(const class FText& InText);
	void SetAbilityPerkID(int32 PerkId);
	void SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData);
	void SetAsWeaponSkinUnattached();
	void SetNameAndDescText(const class FText& InName, const class FText& InDesc);
	void SetNameAndTypeText(const class FText& InName, const class FText& Type);
	void SetNameAndTypeAndDescText(const class FText& InName, const class FText& Type, const class FText& InDesc);
	void Set_Visible_Stack(bool Visible);
	void Set_Stack_Imagine_Mode(const class FText& InName, const class FText& Type1, const class FText& Desc1, const class FText& Type2, const class FText& Desc2, const struct FOwnItemInfo& Info, bool StackBEffectiveDisplay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonToolTipDetail_Fixed_C">();
	}
	static class UWBP_CommonToolTipDetail_Fixed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonToolTipDetail_Fixed_C>();
	}
};
static_assert(alignof(UWBP_CommonToolTipDetail_Fixed_C) == 0x000008, "Wrong alignment on UWBP_CommonToolTipDetail_Fixed_C");
static_assert(sizeof(UWBP_CommonToolTipDetail_Fixed_C) == 0x0002D8, "Wrong size on UWBP_CommonToolTipDetail_Fixed_C");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, CanvasPanel) == 0x000278, "Member 'UWBP_CommonToolTipDetail_Fixed_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, CanvasPanel_169) == 0x000280, "Member 'UWBP_CommonToolTipDetail_Fixed_C::CanvasPanel_169' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, Image_line) == 0x000288, "Member 'UWBP_CommonToolTipDetail_Fixed_C::Image_line' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, Image_line_1) == 0x000290, "Member 'UWBP_CommonToolTipDetail_Fixed_C::Image_line_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, SizeBox_Type1gp) == 0x000298, "Member 'UWBP_CommonToolTipDetail_Fixed_C::SizeBox_Type1gp' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, TxtDesc) == 0x0002A0, "Member 'UWBP_CommonToolTipDetail_Fixed_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, TxtDesc_1) == 0x0002A8, "Member 'UWBP_CommonToolTipDetail_Fixed_C::TxtDesc_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, TxtName) == 0x0002B0, "Member 'UWBP_CommonToolTipDetail_Fixed_C::TxtName' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, TxtType) == 0x0002B8, "Member 'UWBP_CommonToolTipDetail_Fixed_C::TxtType' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, TxtType_1) == 0x0002C0, "Member 'UWBP_CommonToolTipDetail_Fixed_C::TxtType_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, WBP_StackB_S) == 0x0002C8, "Member 'UWBP_CommonToolTipDetail_Fixed_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Fixed_C, WBP_ToolTipDetailsDateTime) == 0x0002D0, "Member 'UWBP_CommonToolTipDetail_Fixed_C::WBP_ToolTipDetailsDateTime' has a wrong offset!");

}

