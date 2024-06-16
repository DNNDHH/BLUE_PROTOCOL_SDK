#pragma once

 

// Package: LicenseTextWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LicenseTextWidget.LicenseTextWidget_C
// 0x0018 (0x0290 - 0x0278)
class ULicenseTextWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SetText(const class FString& Param_Text);
	void SetTextId(int32 InTextID);
	void ExecuteUbergraph_LicenseTextWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LicenseTextWidget_C">();
	}
	static class ULicenseTextWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULicenseTextWidget_C>();
	}
};
static_assert(alignof(ULicenseTextWidget_C) == 0x000008, "Wrong alignment on ULicenseTextWidget_C");
static_assert(sizeof(ULicenseTextWidget_C) == 0x000290, "Wrong size on ULicenseTextWidget_C");
static_assert(offsetof(ULicenseTextWidget_C, UberGraphFrame) == 0x000278, "Member 'ULicenseTextWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULicenseTextWidget_C, Text) == 0x000280, "Member 'ULicenseTextWidget_C::Text' has a wrong offset!");
static_assert(offsetof(ULicenseTextWidget_C, TextTable) == 0x000288, "Member 'ULicenseTextWidget_C::TextTable' has a wrong offset!");

}

