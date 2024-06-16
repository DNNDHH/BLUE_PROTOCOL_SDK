#pragma once

 

// Package: StackBEnhanceImagineIconTypeName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C
// 0x0030 (0x02A8 - 0x0278)
class UStackBEnhanceImagineIconTypeName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_EnhanceView;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SideBar_E;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBEnhanceImagineTypeIcon_C*        StackBEnhanceImagineTypeIcon;                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EquipPosition;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title_EquipPosition;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StackBEnhanceImagineIconTypeName(int32 EntryPoint);
	void Construct();
	void SetMasterData(const struct FSBMasterImagine& SBMasterImagine);
	void SetFontColorSize(const struct FLinearColor& ImgColor, const struct FSlateColor& TxtColor, const struct FLinearColor& IconColor, float FontSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBEnhanceImagineIconTypeName_C">();
	}
	static class UStackBEnhanceImagineIconTypeName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBEnhanceImagineIconTypeName_C>();
	}
};
static_assert(alignof(UStackBEnhanceImagineIconTypeName_C) == 0x000008, "Wrong alignment on UStackBEnhanceImagineIconTypeName_C");
static_assert(sizeof(UStackBEnhanceImagineIconTypeName_C) == 0x0002A8, "Wrong size on UStackBEnhanceImagineIconTypeName_C");
static_assert(offsetof(UStackBEnhanceImagineIconTypeName_C, UberGraphFrame) == 0x000278, "Member 'UStackBEnhanceImagineIconTypeName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineIconTypeName_C, HB_EnhanceView) == 0x000280, "Member 'UStackBEnhanceImagineIconTypeName_C::HB_EnhanceView' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineIconTypeName_C, Img_SideBar_E) == 0x000288, "Member 'UStackBEnhanceImagineIconTypeName_C::Img_SideBar_E' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineIconTypeName_C, StackBEnhanceImagineTypeIcon) == 0x000290, "Member 'UStackBEnhanceImagineIconTypeName_C::StackBEnhanceImagineTypeIcon' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineIconTypeName_C, Txt_EquipPosition) == 0x000298, "Member 'UStackBEnhanceImagineIconTypeName_C::Txt_EquipPosition' has a wrong offset!");
static_assert(offsetof(UStackBEnhanceImagineIconTypeName_C, Txt_Title_EquipPosition) == 0x0002A0, "Member 'UStackBEnhanceImagineIconTypeName_C::Txt_Title_EquipPosition' has a wrong offset!");

}

