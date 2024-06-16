#pragma once

 

// Package: LicenseDisp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LicenseDisp.LicenseDisp_C
// 0x0018 (0x0290 - 0x0278)
class ULicenseDisp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           TextBox;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_LicenseDisp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LicenseDisp_C">();
	}
	static class ULicenseDisp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULicenseDisp_C>();
	}
};
static_assert(alignof(ULicenseDisp_C) == 0x000008, "Wrong alignment on ULicenseDisp_C");
static_assert(sizeof(ULicenseDisp_C) == 0x000290, "Wrong size on ULicenseDisp_C");
static_assert(offsetof(ULicenseDisp_C, UberGraphFrame) == 0x000278, "Member 'ULicenseDisp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULicenseDisp_C, TextBox) == 0x000280, "Member 'ULicenseDisp_C::TextBox' has a wrong offset!");
static_assert(offsetof(ULicenseDisp_C, TextTable) == 0x000288, "Member 'ULicenseDisp_C::TextTable' has a wrong offset!");

}

