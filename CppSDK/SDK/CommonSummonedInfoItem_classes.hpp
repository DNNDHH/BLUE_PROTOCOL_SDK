#pragma once

 

// Package: CommonSummonedInfoItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonSummonedInfoItem.CommonSummonedInfoItem_C
// 0x0048 (0x02C0 - 0x0278)
class UCommonSummonedInfoItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ColumnTxt;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      InfoIcon;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_383;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxForInfoIcon;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SummonedNameTxt;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SummonedTypeNameTxt;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Heading;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonSummonedInfoItem(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);
	void SetSummonedTypeName(const class FText& InTypeName);
	void SetSummonedName(const class FText& InName);
	void SetSummonedInfo(const struct FSBMasterImagine& InImagineMasterData, const class FString& UniqueId);
	void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId);
	void ResetSummonedInfo();
	void SetInfoIconActive(bool InIsActive);
	void SetInfoMark(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonSummonedInfoItem_C">();
	}
	static class UCommonSummonedInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonSummonedInfoItem_C>();
	}
};
static_assert(alignof(UCommonSummonedInfoItem_C) == 0x000008, "Wrong alignment on UCommonSummonedInfoItem_C");
static_assert(sizeof(UCommonSummonedInfoItem_C) == 0x0002C0, "Wrong size on UCommonSummonedInfoItem_C");
static_assert(offsetof(UCommonSummonedInfoItem_C, UberGraphFrame) == 0x000278, "Member 'UCommonSummonedInfoItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, AttributeIcon) == 0x000280, "Member 'UCommonSummonedInfoItem_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, ColumnTxt) == 0x000288, "Member 'UCommonSummonedInfoItem_C::ColumnTxt' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, InfoIcon) == 0x000290, "Member 'UCommonSummonedInfoItem_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, ScaleBox_383) == 0x000298, "Member 'UCommonSummonedInfoItem_C::ScaleBox_383' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, SizeBoxForInfoIcon) == 0x0002A0, "Member 'UCommonSummonedInfoItem_C::SizeBoxForInfoIcon' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, SummonedNameTxt) == 0x0002A8, "Member 'UCommonSummonedInfoItem_C::SummonedNameTxt' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, SummonedTypeNameTxt) == 0x0002B0, "Member 'UCommonSummonedInfoItem_C::SummonedTypeNameTxt' has a wrong offset!");
static_assert(offsetof(UCommonSummonedInfoItem_C, Txt_Heading) == 0x0002B8, "Member 'UCommonSummonedInfoItem_C::Txt_Heading' has a wrong offset!");

}

