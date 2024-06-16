#pragma once

 

// Package: CommonPossessionInfoItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonPossessionInfoItem.CommonPossessionInfoItem_C
// 0x0048 (0x02C0 - 0x0278)
class UCommonPossessionInfoItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ColumnTxt;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      InfoIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PossessionMarkIcon;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PossessionNameTxt;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PossessionTypeNameTxt;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_383;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxForInfoIcon;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Heading;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonPossessionInfoItem(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);
	void SetPossessionTypeName(const class FText& InTypeName);
	void SetPossessionName(const class FText& InName);
	void SetPossessionInfo(const struct FSBMasterImagine& InMasterImagineData, const class FString& UniqueId);
	void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId);
	void ResetPossessionInfo();
	void SetInfoIconActive(bool InIsActive);
	void SetInfoMark(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonPossessionInfoItem_C">();
	}
	static class UCommonPossessionInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPossessionInfoItem_C>();
	}
};
static_assert(alignof(UCommonPossessionInfoItem_C) == 0x000008, "Wrong alignment on UCommonPossessionInfoItem_C");
static_assert(sizeof(UCommonPossessionInfoItem_C) == 0x0002C0, "Wrong size on UCommonPossessionInfoItem_C");
static_assert(offsetof(UCommonPossessionInfoItem_C, UberGraphFrame) == 0x000278, "Member 'UCommonPossessionInfoItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, ColumnTxt) == 0x000280, "Member 'UCommonPossessionInfoItem_C::ColumnTxt' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, InfoIcon) == 0x000288, "Member 'UCommonPossessionInfoItem_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, PossessionMarkIcon) == 0x000290, "Member 'UCommonPossessionInfoItem_C::PossessionMarkIcon' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, PossessionNameTxt) == 0x000298, "Member 'UCommonPossessionInfoItem_C::PossessionNameTxt' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, PossessionTypeNameTxt) == 0x0002A0, "Member 'UCommonPossessionInfoItem_C::PossessionTypeNameTxt' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, ScaleBox_383) == 0x0002A8, "Member 'UCommonPossessionInfoItem_C::ScaleBox_383' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, SizeBoxForInfoIcon) == 0x0002B0, "Member 'UCommonPossessionInfoItem_C::SizeBoxForInfoIcon' has a wrong offset!");
static_assert(offsetof(UCommonPossessionInfoItem_C, Txt_Heading) == 0x0002B8, "Member 'UCommonPossessionInfoItem_C::Txt_Heading' has a wrong offset!");

}

