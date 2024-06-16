#pragma once

 

// Package: BP_RsDialog_ProductAmount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogPaymentType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C
// 0x0090 (0x0308 - 0x0278)
class UBP_RsDialog_ProductAmount_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher_2;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_139;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URibbon_PaidOnly_C*                     Ribbon_Paid;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Amount;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Amount_1;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Amount_2;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CouponUnit;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Label;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Label_2;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Label_Coupon;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Unit;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Unit_2;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsNumberBox;                                       // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_94D6[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSwitchType;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RsDialog_ProductAmount(int32 EntryPoint);
	void SetRibbon_PaidOnly(bool PaidOnly);
	void SetSelectNum(int32 Param_Amount);
	void SetAmountColor(bool IsLack);
	void PreConstruct(bool IsDesignTime);
	void SetPaymentType(ERsDialogPaymentType Type);
	void Construct();
	void SetAmount(int32 Param_Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_ProductAmount_C">();
	}
	static class UBP_RsDialog_ProductAmount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_ProductAmount_C>();
	}
};
static_assert(alignof(UBP_RsDialog_ProductAmount_C) == 0x000008, "Wrong alignment on UBP_RsDialog_ProductAmount_C");
static_assert(sizeof(UBP_RsDialog_ProductAmount_C) == 0x000308, "Wrong size on UBP_RsDialog_ProductAmount_C");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_ProductAmount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, IconSwitcher) == 0x000280, "Member 'UBP_RsDialog_ProductAmount_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, IconSwitcher_2) == 0x000288, "Member 'UBP_RsDialog_ProductAmount_C::IconSwitcher_2' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Image) == 0x000290, "Member 'UBP_RsDialog_ProductAmount_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Image_139) == 0x000298, "Member 'UBP_RsDialog_ProductAmount_C::Image_139' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Ribbon_Paid) == 0x0002A0, "Member 'UBP_RsDialog_ProductAmount_C::Ribbon_Paid' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, SwitchType) == 0x0002A8, "Member 'UBP_RsDialog_ProductAmount_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Amount) == 0x0002B0, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Amount_1) == 0x0002B8, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Amount_1' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Amount_2) == 0x0002C0, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Amount_2' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_CouponUnit) == 0x0002C8, "Member 'UBP_RsDialog_ProductAmount_C::Txt_CouponUnit' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Label) == 0x0002D0, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Label' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Label_2) == 0x0002D8, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Label_2' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Label_Coupon) == 0x0002E0, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Label_Coupon' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Unit) == 0x0002E8, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Unit' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Txt_Unit_2) == 0x0002F0, "Member 'UBP_RsDialog_ProductAmount_C::Txt_Unit_2' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, IsNumberBox) == 0x0002F8, "Member 'UBP_RsDialog_ProductAmount_C::IsNumberBox' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, InSwitchType) == 0x0002FC, "Member 'UBP_RsDialog_ProductAmount_C::InSwitchType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Price) == 0x000300, "Member 'UBP_RsDialog_ProductAmount_C::Price' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductAmount_C, Amount) == 0x000304, "Member 'UBP_RsDialog_ProductAmount_C::Amount' has a wrong offset!");

}

